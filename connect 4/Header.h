#pragma once
#include <iostream>
#include <string>
#include "Board.h"


class Player {
	int n;
	std::string name;
	std::string color;
public:
	Player() {};
	Player(int n, std::string name)
	{
		this->n = n; this->name = name;
		if (n == 1)
		{
			color = "LawnGreen";
		}
		else if (n == 2)
		{
			color = "Red";
		}
	}
	int getN()
	{
		return n;
	}
	std::string getName()
	{
		return name;
	}
	std::string getColor()
	{
		return color;
	}


};