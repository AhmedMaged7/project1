;;
;;  Animal Identification Expert System
;;  Copyright (C) 2013  George Piskas
;;
;;  This program is free software; you can redistribute it and/or modify
;;  it under the terms of the GNU General Public License as published by
;;  the Free Software Foundation; either version 2 of the License, or
;;  (at your option) any later version.
;;
;;  This program is distributed in the hope that it will be useful,
;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;  GNU General Public License for more details.
;;
;;  You should have received a copy of the GNU General Public License along
;;  with this program; if not, write to the Free Software Foundation, Inc.,
;;  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
;;
;;  Contact: geopiskas@gmail.com
;;

;;; This is the template definition for the animal. The fact has the following form:
;;; (animal (name ?STRING) (kind ?STRING) (size ?NUMBER) (colors $?SYMBOL) (spots SYMBOL) (body $?SYMBOL) (environment $?SYMBOL) (particularity $?SYMBOL) )
;;; It is better (visually) explained in the analysis pdf
(deftemplate animal "Template holding the characteristics of an animal."
	;;; Type checking is applied on every field.
	;;; Some fields have a number of allowed values for safety.

	;;; Name, kind and size. All three are required fields (default ?NONE). Size is strictly a number(float or integer) in *cm*.
	(multislot name (type STRING) (default ?NONE))
	(slot size (type NUMBER) (default ?DRIVE))

	(multislot season (type SYMBOL) (default ?DRIVE)
		(allowed-symbols nil summer autumn spring winter)
	)

	;;; Descripion in three seperate parts. Color is required, spots and body are optional.
	(multislot colors (type SYMBOL) (default ?DRIVE)
		(allowed-symbols nil pink yellow orange purple pinkish-red red white blue)
	)
	(slot perfume (type SYMBOL) (default false) (allowed-symbols false true))
	(multislot roottype (type SYMBOL) (default ?DRIVE)
		(allowed-symbols nil bulb root)
	)

	;;; Environment, required field.
	(multislot lifetype (type SYMBOL) (default ?DRIVE)
		(allowed-symbols nil annual perennial)
	)

	;;; Particularities, optional field.
	(multislot soil (type SYMBOL) (default ?DRIVE)
		(allowed-symbols nil acidic rich well-drained loose fertile)
	)
)


(deffacts animal-database "Adding our animal database to the facts."
	;;; Iris
	(animal (name "Iris")
			(season summer)
			(colors blue purple yellow)
			(roottype bulb)
			(lifetype perennial)
	)
	;;; Anemone
	(animal (name "Anemone")
			(season autumn)
			(colors white pink pinkish-red)

	)
	;;; Chrysanthemums
	(animal (name "Chrysanthemums")
			(size 60)
			(season autumn)
			(colors white purple red)

	)
	;;; Freesia
	(animal (name "Freesia")
			(season spring)
			(colors white red blue yellow orange purple)
			(perfume true)
			(roottype bulb)

	)
	;;; Dahlia
	(animal (name "Dahlia")
			(size 160)
			(season summer)
			(roottype bulb)
			(lifetype perennial)
	)
	;;; Narcissus
	(animal (name "Narcissus")
			(season spring)
			(colors white yellow)
			(roottype bulb)
	)
	;;; Camellias
	(animal (name "Camellias")
			(colors white pink red)
			(roottype root)
			(lifetype perennial)
			(soil acidic)
	)
	;;; Lily
	(animal (name "Lily")
			(size 30)
			(season spring)
			(roottype bulb)
			(lifetype perennial)
	)
	;;; Begonia
	(animal (name "Begonia")
			(size 20)
			(lifetype annual)
			(soil rich loose fertile)
	)
	;;; Azaleas
	(animal (name "Azaleas")
			(colors white pink red)
			(season winter)
			(lifetype perennial)
	)
	;;; Anemone
	(animal (name "Anemone2")
			(colors white red blue yellow)
			(roottype root)
	)
	;;; Roses
	(animal (name "Roses")
			(colors red yellow pink white)
			(roottype root)
			(lifetype perennial)
			(soil well-drained)
	)
	;;; White lily
	(animal (name "White lily")
			(size 30)
			(season spring)
			(roottype bulb)
			(perfume true)
			(lifetype perennial)
	)
)


;;; A global variable that holds the number of avaliable animals.
(defglobal ?*counter* = 13)


;;; The variable above is being modified with this function each time we exclude an animal from
;;; the possible solutions. (minusOne) decreases the global counter by one.
(deffunction minusOne ()
	(bind ?*counter* (- ?*counter* 1))
)


;;; This function is used for every question made to the user.
;;; The question that is printed to the user is broken into three arguments (?qBEG ?qMID ?qEND) for flexibility, as we may need to include a printable in the middle.
;;; The argument $?allowed-values is a list that holds the allowed values that the program accepts.
;;; If the user enters a non-acceptable value, the program asks the question again until the answer is valid.
(deffunction ask-question (?qBEG ?qMID ?qEND $?allowed-values)
	(printout t ?qBEG ?qMID ?qEND)
	(bind ?answer (read))
	(if (lexemep ?answer)
		then (bind ?answer (lowcase ?answer))
	)
	(while (not (member ?answer ?allowed-values)) do
		(printout t ?qBEG ?qMID ?qEND)
		(bind ?answer (read))
		(if (lexemep ?answer)
			then (bind ?answer (lowcase ?answer)))
	)
?answer)


;;; The first main question made to the user. We ask for the size of the animal, expecting tiny, small or big as the answer.
;;; The result is stored as the following fact: (theScale ?size)
(defrule mainQuestion-Season
	?x <- (initial-fact)
	=>
	(retract ?x)
	(bind ?season (ask-question "### what is the flower season ? (summer,autumn,winter,spring) ### " "" "" summer autumn winter spring))
	(assert (theSeason ?season))
)


;;; Given that the fact (theScale ?size) exists, this rule gets triggered.
;;; This rule filters the animals by size, and deletes those that are not in the given scale-group.
;;; In addition, every time we retract an animal, we substract one from the global variable ?*counter* calling the (minusOne) function.
(defrule filterBy-Season
	(theSeason ?s)
	?ani <- (animal (season ?season))
	=>
	(if (eq ?s summer)
		then ((retract ?ani) (minusOne))
	else (if (eq ?s autumn)
		    then ((retract ?ani) (minusOne))
		 )
	else (if (eq ?s winter)
		    then ((retract ?ani) (minusOne))
		 )
  else (if (eq ?s spring))
				then ((retract ?ani1) (minusOne))
	)
)


;;; The second main question is about the color of the animal. The user can type any color from the acceptable list in the parentheses.
;;; The result is stored as the following fact: (theColor ?color)
(defrule mainQuestion-Color
	(theScale ?s)
	=>
	(bind ?color (ask-question "### What color is it? (brown yellow black grey green red white blue) ### " "" "" brown yellow black grey green red white blue))
	(assert (theColor ?color))
)


;;; Given that the fact (theColor ?color) exists, this rule gets triggered. It is very similar to the filterBy-Scale rule.
;;; This rule filters the animals by color, and deletes those that do not have this color in the list of colors.
;;; In addition, every time we retract an animal, we substract one from the global variable ?*counter* calling the (minusOne) function.
(defrule filterBy-Color
	(theColor ?c)
	?ani <- (animal (colors $?colors))
	=>
	(if (not (member$ ?c $?colors))
		then (retract ?ani) (minusOne)
	)
)


;;; After the Scale and Color filtering process, we check the global variable ?*counter*.
;;; If we have 1 animal left, this is the result and we assert (found true) in order to trigger the success print rule below.
;;; If we have 0 animals left, we assert (found false) as there are no animals that passed the filtering.
;;; If we got more than one, we need more facts to reach a conclusion, so we assert (needMoreFacts ?scale ?color) for the program to continue asking.
(defrule postFilteringEvaluation
    ?season <- (theSeason ?s)
	=>
	(retract ?season )
	(if (eq ?*counter* 1)
		then (assert (found true))
	else (if (eq ?*counter* 0)
			then (assert (found false))
		 )
	else (if (> ?*counter* 1)
			then (assert (needMoreFacts ?s ))
		 )
	)
)


;;; Given the fact (needMoreFacts ?s ?c) where ?s is the scale and ?c is the color the user has asked, we ask a more specific question about the animal
;;; that we are searching. We then assert a fact in the following form: (ask X Y) where X is a field of the animal template and Y is what we are searching in X.
;;; This rule is based on the table that is included in the analysis pdf.
(defrule needMoreFacts
	?q <-(needMoreFacts ?s )
	=>
	(retract ?q)
	(if (and (eq ?s summer))
		then (assert (ask size tall))
	)
	(if (and (eq ?s autumn) )
		then (assert (ask size medium))
	)

	(if (and (eq ?s spring))
		then (assert (ask lifetype perennial))
	)
	(if (and (eq ?s nil) )
		then (assert (ask soil acidic))
	)
)


;;; Based on the assert that was made on the rule above, we ask a specific question about the body of the animal.
;;; According to the analysis table in the pdf, there will be only two possible choises when the question is about the body of the animal.
;;; We pick those two facts, make sure they are different and ask the body question.
;;; Then, based on the user's answer, we retract one of them and we have reached a solution. We then assert the fact (found true).
(defrule askSize
	?q <-(ask Size ?ans)
	?ani1 <- (animal (size $?content1))
	(test (member$ ?ans $?content1))
	?ani2 <- (animal (size $?content2))
	(test (neq ?ani1 ?ani2))
	=>
	(retract ?q)
	(bind ?a (ask-question "### Is the flower size is" ?ans "? (yes/no) ### " yes no))
	(if (eq ?a yes)
		then (retract ?ani2) (minusOne)
		else (retract ?ani1) (minusOne)
	)
	(if (eq ?*counter* 1)
		then (assert (found true))
	)
)


;;; This rule follows the same idea as the rule above. Two possible animals, one gets filtered and we got a solution.
(defrule askLifetype
	?q <-(ask lifetype ?ans)
	?ani1 <- (animal (lifetype $?content1))
	(test (member$ ?ans $?content1))
	?ani2 <- (animal (lifetype $?content2))
	(test (neq ?ani1 ?ani2))
	=>
	(retract ?q)
	(bind ?a (ask-question "### Is the flower life type is " ?ans "? (yes/no) ### " yes no))
	(if (eq ?a yes)
		then (retract ?ani2) (minusOne) (assert (ask perfume true))
		else (retract ?ani1) (minusOne) (assert (ask perfume true))
	)
	(if (eq ?*counter* 1)
		then (assert (found true))
	)
)


(defrule askSoil
	?q <- (ask soil)
	?ani1 <- (animal (soil acidic ))
	?ani2 <- (animal (soil rich loose fertile))
	?ani3 <- (animal (spots well-drained))
	?ani4 <- (animal (spots nil))
	(test (neq ?ani2 ?ani3))
	=>
	(retract ?q)
	(bind ?a (ask-question "### What is the flower soil? (acidic/rich/loose/fertile/well-drained) ### " acidic rich	loose	fertile well-drained ))
	(if (eq ?a acidic)
		then (retract ?ani2) (minusOne) (retract ?ani3) (minusOne) (retract ?ani4) (minusOne)
	)
	(if (and (eq ?a well-drained))
		then (retract ?ani1) (minusOne) (retract ?ani2) (minusOne) (retract ?ani4) (minusOne)
	)
	(if (and (eq ?a rich loose fertile) )
		then (retract ?ani1) (minusOne) (retract ?ani3) (minusOne) (retract ?ani4) (minusOne)
	)
	(if (and (eq ?a nil) )
		then (retract ?ani1) (minusOne) (retract ?ani3) (minusOne) (retract ?ani2) (minusOne)
	)
	(if (eq ?*counter* 1)
		then (assert (found true))
	)
;;; This rule follows the same idea as the rule above, but instead of two animals we have three.
;;; We ask if the animal has spots. Based on the analysis table, If the answer is yes, we get a solution and we assert (found true).
;;; Otherwise, answering no, we get two possible animals and we need to ask one more question. Thus, we assert (ask particularity dangerous)
;;; in order to trigger the rule that follows.


;;; This rule gets triggered if the previous one (askSpots) was triggered and the fact (ask particularity dangerous) is present.
;;; Other than that, it follows the same idea as the rules above where we only have two possible animals.
;;; One of them gets filtered out and we got a solution, asserting (found true).


;;; If the fact (found true) is present, it means that we have only one (animal) fact in memory, thus we have concluded to
;;; the one the user searches for. We assign this animal to the variable ?ani and print it's name and kind to the user.
(defrule matchFound
	?f <- (found true)
	?ani <- (animal (name ?n) )
	=>
	(retract ?f ?ani)
	(printout t "*********************" crlf)
	(printout t "* Animal found!" crlf)
	(printout t "* Name: " ?n crlf)
	(printout t "*********************" crlf)
)

;;; Just like the rule above, if the fact (found false) is present, we have no (animal) facts in memory. This means we have
;;; no results with the given criteria. We then print the failure to the user.
(defrule matchNotFound
	?f <- (found false)
	=>
	(retract ?f)
	(printout t "*********************" crlf)
	(printout t "* No animals match your description!" crlf)
	(printout t "*********************" crlf)
)
