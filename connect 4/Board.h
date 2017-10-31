#pragma once
#include <string>
#include <windows.h>
#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;

namespace connect4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Board
	/// </summary>
	public ref class Board : public System::Windows::Forms::Form
	{
	public:
		Board(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Board()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:










































	protected: System::Windows::Forms::Button^  button2;
	protected: System::Windows::Forms::Button^  button3;
	protected: System::Windows::Forms::Button^  button4;
	protected: System::Windows::Forms::Button^  button5;
	protected: System::Windows::Forms::Button^  button6;
	protected: System::Windows::Forms::Button^  button7;



	private: System::Windows::Forms::PictureBox^  white;
	private: System::Windows::Forms::PictureBox^  green;
	private: System::Windows::Forms::PictureBox^  red;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::PictureBox^  hover1;
private: System::Windows::Forms::PictureBox^  hover2;
private: System::Windows::Forms::PictureBox^  hover3;
private: System::Windows::Forms::PictureBox^  hover4;
private: System::Windows::Forms::PictureBox^  hover5;
private: System::Windows::Forms::PictureBox^  hover6;
private: System::Windows::Forms::PictureBox^  hover7;
private: System::Windows::Forms::PictureBox^  redhover;
private: System::Windows::Forms::PictureBox^  greenhover;
private: System::Windows::Forms::PictureBox^  turnpic;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::PictureBox^  greenwin;

private: System::Windows::Forms::PictureBox^  redwin;
protected: System::Windows::Forms::Button^  savebutton;
private: System::Windows::Forms::ProgressBar^  progressBar1;
protected:
private:

private:


















































	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Board::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->white = (gcnew System::Windows::Forms::PictureBox());
			this->green = (gcnew System::Windows::Forms::PictureBox());
			this->red = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->hover1 = (gcnew System::Windows::Forms::PictureBox());
			this->hover2 = (gcnew System::Windows::Forms::PictureBox());
			this->hover3 = (gcnew System::Windows::Forms::PictureBox());
			this->hover4 = (gcnew System::Windows::Forms::PictureBox());
			this->hover5 = (gcnew System::Windows::Forms::PictureBox());
			this->hover6 = (gcnew System::Windows::Forms::PictureBox());
			this->hover7 = (gcnew System::Windows::Forms::PictureBox());
			this->redhover = (gcnew System::Windows::Forms::PictureBox());
			this->greenhover = (gcnew System::Windows::Forms::PictureBox());
			this->turnpic = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->greenwin = (gcnew System::Windows::Forms::PictureBox());
			this->redwin = (gcnew System::Windows::Forms::PictureBox());
			this->savebutton = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->white))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->green))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redhover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenhover))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turnpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenwin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redwin))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Gold;
			this->button1->Location = System::Drawing::Point(29, 623);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"^";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Board::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &Board::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &Board::button1_MouseHover);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button1_MouseUp);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Gold;
			this->button2->Location = System::Drawing::Point(124, 623);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 41);
			this->button2->TabIndex = 0;
			this->button2->Text = L"^";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Board::button2_Click);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &Board::button2_MouseLeave);
			this->button2->MouseHover += gcnew System::EventHandler(this, &Board::button2_MouseHover);
			this->button2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button2_MouseUp);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Gold;
			this->button3->Location = System::Drawing::Point(219, 623);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 41);
			this->button3->TabIndex = 0;
			this->button3->Text = L"^";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Board::button3_Click);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &Board::button3_MouseLeave);
			this->button3->MouseHover += gcnew System::EventHandler(this, &Board::button3_MouseHover);
			this->button3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button3_MouseUp);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Gold;
			this->button4->Location = System::Drawing::Point(313, 622);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 41);
			this->button4->TabIndex = 0;
			this->button4->Text = L"^";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Board::button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &Board::button4_MouseLeave);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Board::button4_MouseHover);
			this->button4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button4_MouseUp);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Gold;
			this->button5->Location = System::Drawing::Point(406, 622);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 41);
			this->button5->TabIndex = 0;
			this->button5->Text = L"^";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Board::button5_Click);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &Board::button5_MouseLeave);
			this->button5->MouseHover += gcnew System::EventHandler(this, &Board::button5_MouseHover);
			this->button5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button5_MouseUp);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Gold;
			this->button6->Location = System::Drawing::Point(500, 622);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 41);
			this->button6->TabIndex = 0;
			this->button6->Text = L"^";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Board::button6_Click);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &Board::button6_MouseLeave);
			this->button6->MouseHover += gcnew System::EventHandler(this, &Board::button6_MouseHover);
			this->button6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button6_MouseUp);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Gold;
			this->button7->Location = System::Drawing::Point(594, 623);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 40);
			this->button7->TabIndex = 0;
			this->button7->Text = L"^";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Board::button7_Click);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &Board::button7_MouseLeave);
			this->button7->MouseHover += gcnew System::EventHandler(this, &Board::button7_MouseHover);
			this->button7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Board::button7_MouseUp);
			// 
			// white
			// 
			this->white->Location = System::Drawing::Point(749, 12);
			this->white->Name = L"white";
			this->white->Size = System::Drawing::Size(20, 17);
			this->white->TabIndex = 51;
			this->white->TabStop = false;
			// 
			// green
			// 
			this->green->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"green.Image")));
			this->green->Location = System::Drawing::Point(692, 443);
			this->green->Name = L"green";
			this->green->Size = System::Drawing::Size(10, 27);
			this->green->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->green->TabIndex = 53;
			this->green->TabStop = false;
			this->green->Visible = false;
			// 
			// red
			// 
			this->red->BackColor = System::Drawing::Color::Transparent;
			this->red->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red.Image")));
			this->red->Location = System::Drawing::Point(692, 571);
			this->red->Name = L"red";
			this->red->Size = System::Drawing::Size(10, 37);
			this->red->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->red->TabIndex = 54;
			this->red->TabStop = false;
			this->red->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox25);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox26);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox27);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox28);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox29);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox30);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox31);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->pictureBox32);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox33);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox34);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox35);
			this->panel1->Controls->Add(this->pictureBox24);
			this->panel1->Controls->Add(this->pictureBox36);
			this->panel1->Controls->Add(this->pictureBox23);
			this->panel1->Controls->Add(this->pictureBox37);
			this->panel1->Controls->Add(this->pictureBox22);
			this->panel1->Controls->Add(this->pictureBox38);
			this->panel1->Controls->Add(this->pictureBox21);
			this->panel1->Controls->Add(this->pictureBox39);
			this->panel1->Controls->Add(this->pictureBox20);
			this->panel1->Controls->Add(this->pictureBox40);
			this->panel1->Controls->Add(this->pictureBox19);
			this->panel1->Controls->Add(this->pictureBox41);
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox42);
			this->panel1->Controls->Add(this->pictureBox17);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Location = System::Drawing::Point(12, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(669, 521);
			this->panel1->TabIndex = 96;
			this->panel1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 436);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(84, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(12, 350);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(84, 79);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 55;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Location = System::Drawing::Point(387, 435);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(84, 79);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 95;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(11, 264);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(84, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 56;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Location = System::Drawing::Point(388, 348);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(84, 79);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 94;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(10, 179);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(84, 79);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 57;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Location = System::Drawing::Point(386, 262);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(84, 79);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 93;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(10, 94);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(84, 79);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 58;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Location = System::Drawing::Point(386, 179);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(84, 79);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 92;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(10, 9);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(84, 79);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 59;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->Location = System::Drawing::Point(386, 92);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(84, 79);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 91;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Location = System::Drawing::Point(104, 8);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(84, 79);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 60;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->Location = System::Drawing::Point(386, 8);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(84, 79);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 90;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Location = System::Drawing::Point(104, 92);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(84, 79);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 61;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->Location = System::Drawing::Point(481, 436);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(84, 79);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 89;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(104, 178);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(84, 79);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 62;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->Location = System::Drawing::Point(480, 348);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(84, 79);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 88;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(105, 263);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(84, 79);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 63;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->Location = System::Drawing::Point(479, 263);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(84, 79);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 87;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(106, 350);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(84, 79);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 64;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->Location = System::Drawing::Point(482, 179);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(84, 79);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 86;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(106, 436);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(84, 79);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 65;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->Location = System::Drawing::Point(480, 94);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(84, 79);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 85;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Location = System::Drawing::Point(292, 7);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(84, 79);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 66;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->Location = System::Drawing::Point(480, 8);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(84, 79);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 84;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Location = System::Drawing::Point(292, 92);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(84, 79);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 67;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->Location = System::Drawing::Point(573, 435);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(84, 79);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 83;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Location = System::Drawing::Point(292, 179);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(84, 79);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 68;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->Location = System::Drawing::Point(574, 349);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(84, 79);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 82;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Location = System::Drawing::Point(293, 263);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(84, 79);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 69;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.BackgroundImage")));
			this->pictureBox39->Location = System::Drawing::Point(573, 264);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(84, 79);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 81;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Location = System::Drawing::Point(293, 350);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(84, 79);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 70;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.BackgroundImage")));
			this->pictureBox40->Location = System::Drawing::Point(573, 179);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(84, 79);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 80;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Location = System::Drawing::Point(293, 436);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(84, 79);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 71;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.BackgroundImage")));
			this->pictureBox41->Location = System::Drawing::Point(574, 94);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(84, 79);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 79;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(198, 7);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(84, 79);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 72;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.BackgroundImage")));
			this->pictureBox42->Location = System::Drawing::Point(573, 9);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(84, 79);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 78;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(198, 93);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(84, 79);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 73;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Location = System::Drawing::Point(199, 434);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(84, 79);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 77;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(198, 179);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(84, 79);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 74;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Location = System::Drawing::Point(199, 348);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(84, 79);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 76;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Location = System::Drawing::Point(198, 262);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(84, 79);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 75;
			this->pictureBox15->TabStop = false;
			// 
			// hover1
			// 
			this->hover1->Location = System::Drawing::Point(13, 8);
			this->hover1->Name = L"hover1";
			this->hover1->Size = System::Drawing::Size(100, 87);
			this->hover1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover1->TabIndex = 97;
			this->hover1->TabStop = false;
			this->hover1->Visible = false;
			// 
			// hover2
			// 
			this->hover2->Location = System::Drawing::Point(102, 8);
			this->hover2->Name = L"hover2";
			this->hover2->Size = System::Drawing::Size(100, 87);
			this->hover2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover2->TabIndex = 98;
			this->hover2->TabStop = false;
			this->hover2->Visible = false;
			// 
			// hover3
			// 
			this->hover3->Location = System::Drawing::Point(201, 8);
			this->hover3->Name = L"hover3";
			this->hover3->Size = System::Drawing::Size(100, 87);
			this->hover3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover3->TabIndex = 99;
			this->hover3->TabStop = false;
			this->hover3->Visible = false;
			// 
			// hover4
			// 
			this->hover4->Location = System::Drawing::Point(293, 8);
			this->hover4->Name = L"hover4";
			this->hover4->Size = System::Drawing::Size(100, 87);
			this->hover4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover4->TabIndex = 100;
			this->hover4->TabStop = false;
			this->hover4->Visible = false;
			// 
			// hover5
			// 
			this->hover5->Location = System::Drawing::Point(389, 7);
			this->hover5->Name = L"hover5";
			this->hover5->Size = System::Drawing::Size(100, 87);
			this->hover5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover5->TabIndex = 101;
			this->hover5->TabStop = false;
			this->hover5->Visible = false;
			// 
			// hover6
			// 
			this->hover6->Location = System::Drawing::Point(484, 7);
			this->hover6->Name = L"hover6";
			this->hover6->Size = System::Drawing::Size(100, 87);
			this->hover6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover6->TabIndex = 102;
			this->hover6->TabStop = false;
			this->hover6->Visible = false;
			// 
			// hover7
			// 
			this->hover7->Location = System::Drawing::Point(576, 7);
			this->hover7->Name = L"hover7";
			this->hover7->Size = System::Drawing::Size(100, 87);
			this->hover7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hover7->TabIndex = 103;
			this->hover7->TabStop = false;
			this->hover7->Visible = false;
			// 
			// redhover
			// 
			this->redhover->BackColor = System::Drawing::Color::Transparent;
			this->redhover->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redhover.Image")));
			this->redhover->Location = System::Drawing::Point(692, 485);
			this->redhover->Name = L"redhover";
			this->redhover->Size = System::Drawing::Size(10, 37);
			this->redhover->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->redhover->TabIndex = 105;
			this->redhover->TabStop = false;
			this->redhover->Visible = false;
			// 
			// greenhover
			// 
			this->greenhover->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"greenhover.Image")));
			this->greenhover->Location = System::Drawing::Point(692, 528);
			this->greenhover->Name = L"greenhover";
			this->greenhover->Size = System::Drawing::Size(10, 37);
			this->greenhover->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->greenhover->TabIndex = 104;
			this->greenhover->TabStop = false;
			this->greenhover->Visible = false;
			// 
			// turnpic
			// 
			this->turnpic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"turnpic.Image")));
			this->turnpic->Location = System::Drawing::Point(257, 668);
			this->turnpic->Name = L"turnpic";
			this->turnpic->Size = System::Drawing::Size(44, 43);
			this->turnpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->turnpic->TabIndex = 106;
			this->turnpic->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(307, 668);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 44);
			this->label1->TabIndex = 107;
			this->label1->Text = L"Player 1";
			// 
			// greenwin
			// 
			this->greenwin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"greenwin.Image")));
			this->greenwin->Location = System::Drawing::Point(692, 348);
			this->greenwin->Name = L"greenwin";
			this->greenwin->Size = System::Drawing::Size(10, 37);
			this->greenwin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->greenwin->TabIndex = 109;
			this->greenwin->TabStop = false;
			this->greenwin->Visible = false;
			// 
			// redwin
			// 
			this->redwin->BackColor = System::Drawing::Color::Transparent;
			this->redwin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redwin.Image")));
			this->redwin->Location = System::Drawing::Point(692, 391);
			this->redwin->Name = L"redwin";
			this->redwin->Size = System::Drawing::Size(10, 37);
			this->redwin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->redwin->TabIndex = 108;
			this->redwin->TabStop = false;
			this->redwin->Visible = false;
			// 
			// savebutton
			// 
			this->savebutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->savebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savebutton->ForeColor = System::Drawing::Color::Gold;
			this->savebutton->Location = System::Drawing::Point(501, 668);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(135, 41);
			this->savebutton->TabIndex = 110;
			this->savebutton->Text = L"Save and Exit";
			this->savebutton->UseVisualStyleBackColor = false;
			this->savebutton->Click += gcnew System::EventHandler(this, &Board::button8_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(-163, 710);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(657, 37);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 111;
			this->progressBar1->Click += gcnew System::EventHandler(this, &Board::progressBar1_Click);
			// 
			// Board
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(717, 714);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->savebutton);
			this->Controls->Add(this->greenwin);
			this->Controls->Add(this->redwin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->turnpic);
			this->Controls->Add(this->redhover);
			this->Controls->Add(this->greenhover);
			this->Controls->Add(this->hover7);
			this->Controls->Add(this->hover6);
			this->Controls->Add(this->hover5);
			this->Controls->Add(this->hover4);
			this->Controls->Add(this->hover3);
			this->Controls->Add(this->hover2);
			this->Controls->Add(this->hover1);
			this->Controls->Add(this->red);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->green);
			this->Controls->Add(this->white);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(733, 753);
			this->MinimumSize = System::Drawing::Size(733, 753);
			this->Name = L"Board";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Connect 4";
			this->Load += gcnew System::EventHandler(this, &Board::Board_Load);
			this->Shown += gcnew System::EventHandler(this, &Board::Board_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->white))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->green))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hover7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redhover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenhover))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turnpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenwin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redwin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		Player *p1 = new Player(1, "Player 1");
		Player *p2 = new Player(2, "Player 2");
		Player *temp = &(*p1);
		int gameOver = 0;

		bool checkcolorred(int x, int y) {
			if (x == 1 && y == 1) {
				if (pictureBox1->Image == red->Image)
					return 1;
			}
			if (x == 1 && y == 2) {
				if (pictureBox2->Image == red->Image)
					return 1;
			}

			if (x == 1 && y == 3) {
				if (pictureBox3->Image == red->Image)
					return 1;
			}

			if (x == 1 && y == 4) {
				if (pictureBox4->Image == red->Image)
					return 1;
			}

			if (x == 1 && y == 5) {
				if (pictureBox5->Image == red->Image)
					return 1;
			}

			if (x == 1 && y == 6) {
				if (pictureBox6->Image == red->Image)
					return 1;
			}
			if (x == 2 && y == 1) {
				if (pictureBox7->Image == red->Image)
					return 1;
			}
			if (x == 2 && y == 2) {
				if (pictureBox8->Image == red->Image)
					return 1;
			}

			if (x == 2 && y == 3) {
				if (pictureBox9->Image == red->Image)
					return 1;
			}

			if (x == 2 && y == 4) {
				if (pictureBox10->Image == red->Image)
					return 1;
			}

			if (x == 2 && y == 5) {
				if (pictureBox11->Image == red->Image)
					return 1;
			}

			if (x == 2 && y == 6) {
				if (pictureBox12->Image == red->Image)
					return 1;
			}
			if (x == 3 && y == 1) {
				if (pictureBox13->Image == red->Image)
					return 1;
			}
			if (x == 3 && y == 2) {
				if (pictureBox14->Image == red->Image)
					return 1;
			}

			if (x == 3 && y == 3) {
				if (pictureBox15->Image == red->Image)
					return 1;
			}

			if (x == 3 && y == 4) {
				if (pictureBox16->Image == red->Image)
					return 1;
			}

			if (x == 3 && y == 5) {
				if (pictureBox17->Image == red->Image)
					return 1;
			}

			if (x == 3 && y == 6) {
				if (pictureBox18->Image == red->Image)
					return 1;
			}
			if (x == 4 && y == 1) {
				if (pictureBox19->Image == red->Image)
					return 1;
			}
			if (x == 4 && y == 2) {
				if (pictureBox20->Image == red->Image)
					return 1;
			}

			if (x == 4 && y == 3) {
				if (pictureBox21->Image == red->Image)
					return 1;
			}

			if (x == 4 && y == 4) {
				if (pictureBox22->Image == red->Image)
					return 1;
			}

			if (x == 4 && y == 5) {
				if (pictureBox23->Image == red->Image)
					return 1;
			}

			if (x == 4 && y == 6) {
				if (pictureBox24->Image == red->Image)
					return 1;
			}
			if (x == 5 && y == 1) {
				if (pictureBox25->Image == red->Image)
					return 1;
			}
			if (x == 5 && y == 2) {
				if (pictureBox26->Image == red->Image)
					return 1;
			}

			if (x == 5 && y == 3) {
				if (pictureBox27->Image == red->Image)
					return 1;
			}

			if (x == 5 && y == 4) {
				if (pictureBox28->Image == red->Image)
					return 1;
			}

			if (x == 5 && y == 5) {
				if (pictureBox29->Image == red->Image)
					return 1;
			}

			if (x == 5 && y == 6) {
				if (pictureBox30->Image == red->Image)
					return 1;
			}
			if (x == 6 && y == 1) {
				if (pictureBox31->Image == red->Image)
					return 1;
			}
			if (x == 6 && y == 2) {
				if (pictureBox32->Image == red->Image)
					return 1;
			}

			if (x == 6 && y == 3) {
				if (pictureBox33->Image == red->Image)
					return 1;
			}

			if (x == 6 && y == 4) {
				if (pictureBox34->Image == red->Image)
					return 1;
			}

			if (x == 6 && y == 5) {
				if (pictureBox35->Image == red->Image)
					return 1;
			}

			if (x == 6 && y == 6) {
				if (pictureBox36->Image == red->Image)
					return 1;
			}
			if (x == 7 && y == 1) {
				if (pictureBox37->Image == red->Image)
					return 1;
			}
			if (x == 7 && y == 2) {
				if (pictureBox38->Image == red->Image)
					return 1;
			}

			if (x == 7 && y == 3) {
				if (pictureBox39->Image == red->Image)
					return 1;
			}

			if (x == 7 && y == 4) {
				if (pictureBox40->Image == red->Image)
					return 1;
			}

			if (x == 7 && y == 5) {
				if (pictureBox41->Image == red->Image)
					return 1;
			}

			if (x == 7 && y == 6) {
				if (pictureBox42->Image == red->Image)
					return 1;
			}
		}


		bool checkcolorgreen(int x, int y) {
			if (x == 1 && y == 1) {
				if (pictureBox1->Image == green->Image)
					return 1;
			}
			if (x == 1 && y == 2) {
				if (pictureBox2->Image == green->Image)
					return 1;
			}

			if (x == 1 && y == 3) {
				if (pictureBox3->Image == green->Image)
					return 1;
			}

			if (x == 1 && y == 4) {
				if (pictureBox4->Image == green->Image)
					return 1;
			}

			if (x == 1 && y == 5) {
				if (pictureBox5->Image == green->Image)
					return 1;
			}

			if (x == 1 && y == 6) {
				if (pictureBox6->Image == green->Image)
					return 1;
			}
			if (x == 2 && y == 1) {
				if (pictureBox7->Image == green->Image)
					return 1;
			}
			if (x == 2 && y == 2) {
				if (pictureBox8->Image == green->Image)
					return 1;
			}

			if (x == 2 && y == 3) {
				if (pictureBox9->Image == green->Image)
					return 1;
			}

			if (x == 2 && y == 4) {
				if (pictureBox10->Image == green->Image)
					return 1;
			}

			if (x == 2 && y == 5) {
				if (pictureBox11->Image == green->Image)
					return 1;
			}

			if (x == 2 && y == 6) {
				if (pictureBox12->Image == green->Image)
					return 1;
			}
			if (x == 3 && y == 1) {
				if (pictureBox13->Image == green->Image)
					return 1;
			}
			if (x == 3 && y == 2) {
				if (pictureBox14->Image == green->Image)
					return 1;
			}

			if (x == 3 && y == 3) {
				if (pictureBox15->Image == green->Image)
					return 1;
			}

			if (x == 3 && y == 4) {
				if (pictureBox16->Image == green->Image)
					return 1;
			}

			if (x == 3 && y == 5) {
				if (pictureBox17->Image == green->Image)
					return 1;
			}

			if (x == 3 && y == 6) {
				if (pictureBox18->Image == green->Image)
					return 1;
			}
			if (x == 4 && y == 1) {
				if (pictureBox19->Image == green->Image)
					return 1;
			}
			if (x == 4 && y == 2) {
				if (pictureBox20->Image == green->Image)
					return 1;
			}

			if (x == 4 && y == 3) {
				if (pictureBox21->Image == green->Image)
					return 1;
			}

			if (x == 4 && y == 4) {
				if (pictureBox22->Image == green->Image)
					return 1;
			}

			if (x == 4 && y == 5) {
				if (pictureBox23->Image == green->Image)
					return 1;
			}

			if (x == 4 && y == 6) {
				if (pictureBox24->Image == green->Image)
					return 1;
			}
			if (x == 5 && y == 1) {
				if (pictureBox25->Image == green->Image)
					return 1;
			}
			if (x == 5 && y == 2) {
				if (pictureBox26->Image == green->Image)
					return 1;
			}

			if (x == 5 && y == 3) {
				if (pictureBox27->Image == green->Image)
					return 1;
			}

			if (x == 5 && y == 4) {
				if (pictureBox28->Image == green->Image)
					return 1;
			}

			if (x == 5 && y == 5) {
				if (pictureBox29->Image == green->Image)
					return 1;
			}

			if (x == 5 && y == 6) {
				if (pictureBox30->Image == green->Image)
					return 1;
			}
			if (x == 6 && y == 1) {
				if (pictureBox31->Image == green->Image)
					return 1;
			}
			if (x == 6 && y == 2) {
				if (pictureBox32->Image == green->Image)
					return 1;
			}

			if (x == 6 && y == 3) {
				if (pictureBox33->Image == green->Image)
					return 1;
			}

			if (x == 6 && y == 4) {
				if (pictureBox34->Image == green->Image)
					return 1;
			}

			if (x == 6 && y == 5) {
				if (pictureBox35->Image == green->Image)
					return 1;
			}

			if (x == 6 && y == 6) {
				if (pictureBox36->Image == green->Image)
					return 1;
			}
			if (x == 7 && y == 1) {
				if (pictureBox37->Image == green->Image)
					return 1;
			}
			if (x == 7 && y == 2) {
				if (pictureBox38->Image == green->Image)
					return 1;
			}

			if (x == 7 && y == 3) {
				if (pictureBox39->Image == green->Image)
					return 1;
			}

			if (x == 7 && y == 4) {
				if (pictureBox40->Image == green->Image)
					return 1;
			}

			if (x == 7 && y == 5) {
				if (pictureBox41->Image == green->Image)
					return 1;
			}

			if (x == 7 && y == 6) {
				if (pictureBox42->Image == green->Image)
					return 1;
			}
		}
		
		bool checkcolor(int x, int y) {
			if (x == 1 && y == 1) {
				if (pictureBox1->Image == white->Image)
					return 1;
			}
			if (x == 1 && y == 2) {
				if (pictureBox2->Image == white->Image)
					return 1;
			}

			if (x == 1 && y == 3) {
				if (pictureBox3->Image == white->Image)
					return 1;
			}

			if (x == 1 && y == 4) {
				if (pictureBox4->Image == white->Image)
					return 1;
			}

			if (x == 1 && y == 5) {
				if (pictureBox5->Image == white->Image)
					return 1;
			}

			if (x == 1 && y == 6) {
				if (pictureBox6->Image == white->Image)
					return 1;
			}
			if (x == 2 && y == 1) {
				if (pictureBox7->Image == white->Image)
					return 1;
			}
			if (x == 2 && y == 2) {
				if (pictureBox8->Image == white->Image)
					return 1;
			}

			if (x == 2 && y == 3) {
				if (pictureBox9->Image == white->Image)
					return 1;
			}

			if (x == 2 && y == 4) {
				if (pictureBox10->Image == white->Image)
					return 1;
			}

			if (x == 2 && y == 5) {
				if (pictureBox11->Image == white->Image)
					return 1;
			}

			if (x == 2 && y == 6) {
				if (pictureBox12->Image == white->Image)
					return 1;
			}
			if (x == 3 && y == 1) {
				if (pictureBox13->Image == white->Image)
					return 1;
			}
			if (x == 3 && y == 2) {
				if (pictureBox14->Image == white->Image)
					return 1;
			}

			if (x == 3 && y == 3) {
				if (pictureBox15->Image == white->Image)
					return 1;
			}

			if (x == 3 && y == 4) {
				if (pictureBox16->Image == white->Image)
					return 1;
			}

			if (x == 3 && y == 5) {
				if (pictureBox17->Image == white->Image)
					return 1;
			}

			if (x == 3 && y == 6) {
				if (pictureBox18->Image == white->Image)
					return 1;
			}
			if (x == 4 && y == 1) {
				if (pictureBox19->Image == white->Image)
					return 1;
			}
			if (x == 4 && y == 2) {
				if (pictureBox20->Image == white->Image)
					return 1;
			}

			if (x == 4 && y == 3) {
				if (pictureBox21->Image == white->Image)
					return 1;
			}

			if (x == 4 && y == 4) {
				if (pictureBox22->Image == white->Image)
					return 1;
			}

			if (x == 4 && y == 5) {
				if (pictureBox23->Image == white->Image)
					return 1;
			}

			if (x == 4 && y == 6) {
				if (pictureBox24->Image == white->Image)
					return 1;
			}
			if (x == 5 && y == 1) {
				if (pictureBox25->Image == white->Image)
					return 1;
			}
			if (x == 5 && y == 2) {
				if (pictureBox26->Image == white->Image)
					return 1;
			}

			if (x == 5 && y == 3) {
				if (pictureBox27->Image == white->Image)
					return 1;
			}

			if (x == 5 && y == 4) {
				if (pictureBox28->Image == white->Image)
					return 1;
			}

			if (x == 5 && y == 5) {
				if (pictureBox29->Image == white->Image)
					return 1;
			}

			if (x == 5 && y == 6) {
				if (pictureBox30->Image == white->Image)
					return 1;
			}
			if (x == 6 && y == 1) {
				if (pictureBox31->Image == white->Image)
					return 1;
			}
			if (x == 6 && y == 2) {
				if (pictureBox32->Image == white->Image)
					return 1;
			}

			if (x == 6 && y == 3) {
				if (pictureBox33->Image == white->Image)
					return 1;
			}

			if (x == 6 && y == 4) {
				if (pictureBox34->Image == white->Image)
					return 1;
			}

			if (x == 6 && y == 5) {
				if (pictureBox35->Image == white->Image)
					return 1;
			}

			if (x == 6 && y == 6) {
				if (pictureBox36->Image == white->Image)
					return 1;
			}
			if (x == 7 && y == 1) {
				if (pictureBox37->Image == white->Image)
					return 1;
			}
			if (x == 7 && y == 2) {
				if (pictureBox38->Image == white->Image)
					return 1;
			}

			if (x == 7 && y == 3) {
				if (pictureBox39->Image == white->Image)
					return 1;
			}

			if (x == 7 && y == 4) {
				if (pictureBox40->Image == white->Image)
					return 1;
			}

			if (x == 7 && y == 5) {
				if (pictureBox41->Image == white->Image)
					return 1;
			}

			if (x == 7 && y == 6) {
				if (pictureBox42->Image == white->Image)
					return 1;
			}
		}

		void setcolorgreenwin(int x, int y) {

			if (x == 1 && y == 1) {
				pictureBox1->Image = greenwin->Image;
			}
			if (x == 1 && y == 2) {
				pictureBox2->Image = greenwin->Image;
			}
			if (x == 1 && y == 3) {
				pictureBox3->Image = greenwin->Image;
			}
			if (x == 1 && y == 4) {
				pictureBox4->Image = greenwin->Image;
			}
			if (x == 1 && y == 5) {
				pictureBox5->Image = greenwin->Image;
			}
			if (x == 1 && y == 6) {
				pictureBox6->Image = greenwin->Image;
			}
			if (x == 2 && y == 1) {
				pictureBox7->Image = greenwin->Image;
			}
			if (x == 2 && y == 2) {
				pictureBox8->Image = greenwin->Image;
			}
			if (x == 2 && y == 3) {
				pictureBox9->Image = greenwin->Image;
			}
			if (x == 2 && y == 4) {
				pictureBox10->Image = greenwin->Image;
			}
			if (x == 2 && y == 5) {
				pictureBox11->Image = greenwin->Image;
			}
			if (x == 2 && y == 6) {
				pictureBox12->Image = greenwin->Image;
			}

			if (x == 3 && y == 1) {
				pictureBox13->Image = greenwin->Image;
			}
			if (x == 3 && y == 2) {
				pictureBox14->Image = greenwin->Image;
			}
			if (x == 3 && y == 3) {
				pictureBox15->Image = greenwin->Image;
			}
			if (x == 3 && y == 4) {
				pictureBox16->Image = greenwin->Image;
			}
			if (x == 3 && y == 5) {
				pictureBox17->Image = greenwin->Image;
			}
			if (x == 3 && y == 6) {
				pictureBox18->Image = greenwin->Image;
			}

			if (x == 4 && y == 1) {
				pictureBox19->Image = greenwin->Image;
			}
			if (x == 4 && y == 2) {
				pictureBox20->Image = greenwin->Image;
			}
			if (x == 4 && y == 3) {
				pictureBox21->Image = greenwin->Image;
			}
			if (x == 4 && y == 4) {
				pictureBox22->Image = greenwin->Image;
			}
			if (x == 4 && y == 5) {
				pictureBox23->Image = greenwin->Image;
			}
			if (x == 4 && y == 6) {
				pictureBox24->Image = greenwin->Image;
			}

			if (x == 5 && y == 1) {
				pictureBox25->Image = greenwin->Image;
			}
			if (x == 5 && y == 2) {
				pictureBox26->Image = greenwin->Image;
			}
			if (x == 5 && y == 3) {
				pictureBox27->Image = greenwin->Image;
			}
			if (x == 5 && y == 4) {
				pictureBox28->Image = greenwin->Image;
			}
			if (x == 5 && y == 5) {
				pictureBox29->Image = greenwin->Image;
			}
			if (x == 5 && y == 6) {
				pictureBox30->Image = greenwin->Image;
			}
			if (x == 6 && y == 1) {
				pictureBox31->Image = greenwin->Image;
			}
			if (x == 6 && y == 2) {
				pictureBox32->Image = greenwin->Image;
			}
			if (x == 6 && y == 3) {
				pictureBox33->Image = greenwin->Image;
			}
			if (x == 6 && y == 4) {
				pictureBox34->Image = greenwin->Image;
			}
			if (x == 6 && y == 5) {
				pictureBox35->Image = greenwin->Image;
			}
			if (x == 6 && y == 6) {
				pictureBox36->Image = greenwin->Image;
			}

			if (x == 7 && y == 1) {
				pictureBox37->Image = greenwin->Image;
			}
			if (x == 7 && y == 2) {
				pictureBox38->Image = greenwin->Image;
			}
			if (x == 7 && y == 3) {
				pictureBox39->Image = greenwin->Image;
			}
			if (x == 7 && y == 4) {
				pictureBox40->Image = greenwin->Image;
			}
			if (x == 7 && y == 5) {
				pictureBox41->Image = greenwin->Image;
			}
			if (x == 7 && y == 6) {
				pictureBox42->Image = greenwin->Image;
			}
		}
		
		void setcolorgreen(int x, int y) {

			if (x == 1 && y == 1) {
				pictureBox1->Image = green->Image;
			}
			if (x == 1 && y == 2) {
				pictureBox2->Image = green->Image;
			}
			if (x == 1 && y == 3) {
				pictureBox3->Image = green->Image;
			}
			if (x == 1 && y == 4) {
				pictureBox4->Image = green->Image;
			}
			if (x == 1 && y == 5) {
				pictureBox5->Image = green->Image;
			}
			if (x == 1 && y == 6) {
				pictureBox6->Image = green->Image;
			}
			if (x == 2 && y == 1) {
				pictureBox7->Image = green->Image;
			}
			if (x == 2 && y == 2) {
				pictureBox8->Image = green->Image;
			}
			if (x == 2 && y == 3) {
				pictureBox9->Image = green->Image;
			}
			if (x == 2 && y == 4) {
				pictureBox10->Image = green->Image;
			}
			if (x == 2 && y == 5) {
				pictureBox11->Image = green->Image;
			}
			if (x == 2 && y == 6) {
				pictureBox12->Image = green->Image;
			}

			if (x == 3 && y == 1) {
				pictureBox13->Image = green->Image;
			}
			if (x == 3 && y == 2) {
				pictureBox14->Image = green->Image;
			}
			if (x == 3 && y == 3) {
				pictureBox15->Image = green->Image;
			}
			if (x == 3 && y == 4) {
				pictureBox16->Image = green->Image;
			}
			if (x == 3 && y == 5) {
				pictureBox17->Image = green->Image;
			}
			if (x == 3 && y == 6) {
				pictureBox18->Image = green->Image;
			}

			if (x == 4 && y == 1) {
				pictureBox19->Image = green->Image;
			}
			if (x == 4 && y == 2) {
				pictureBox20->Image = green->Image;
			}
			if (x == 4 && y == 3) {
				pictureBox21->Image = green->Image;
			}
			if (x == 4 && y == 4) {
				pictureBox22->Image = green->Image;
			}
			if (x == 4 && y == 5) {
				pictureBox23->Image = green->Image;
			}
			if (x == 4 && y == 6) {
				pictureBox24->Image = green->Image;
			}

			if (x == 5 && y == 1) {
				pictureBox25->Image = green->Image;
			}
			if (x == 5 && y == 2) {
				pictureBox26->Image = green->Image;
			}
			if (x == 5 && y == 3) {
				pictureBox27->Image = green->Image;
			}
			if (x == 5 && y == 4) {
				pictureBox28->Image = green->Image;
			}
			if (x == 5 && y == 5) {
				pictureBox29->Image = green->Image;
			}
			if (x == 5 && y == 6) {
				pictureBox30->Image = green->Image;
			}
			if (x == 6 && y == 1) {
				pictureBox31->Image = green->Image;
			}
			if (x == 6 && y == 2) {
				pictureBox32->Image = green->Image;
			}
			if (x == 6 && y == 3) {
				pictureBox33->Image = green->Image;
			}
			if (x == 6 && y == 4) {
				pictureBox34->Image = green->Image;
			}
			if (x == 6 && y == 5) {
				pictureBox35->Image = green->Image;
			}
			if (x == 6 && y == 6) {
				pictureBox36->Image = green->Image;
			}

			if (x == 7 && y == 1) {
				pictureBox37->Image = green->Image;
			}
			if (x == 7 && y == 2) {
				pictureBox38->Image = green->Image;
			}
			if (x == 7 && y == 3) {
				pictureBox39->Image = green->Image;
			}
			if (x == 7 && y == 4) {
				pictureBox40->Image = green->Image;
			}
			if (x == 7 && y == 5) {
				pictureBox41->Image = green->Image;
			}
			if (x == 7 && y == 6) {
				pictureBox42->Image = green->Image;
			}
		}

		void setcolorredwin(int x, int y) {

			if (x == 1 && y == 1) {
				pictureBox1->Image = redwin->Image;
			}
			if (x == 1 && y == 2) {
				pictureBox2->Image = redwin->Image;
			}
			if (x == 1 && y == 3) {
				pictureBox3->Image = redwin->Image;
			}
			if (x == 1 && y == 4) {
				pictureBox4->Image = redwin->Image;
			}
			if (x == 1 && y == 5) {
				pictureBox5->Image = redwin->Image;
			}
			if (x == 1 && y == 6) {
				pictureBox6->Image = redwin->Image;
			}
			if (x == 2 && y == 1) {
				pictureBox7->Image = redwin->Image;
			}
			if (x == 2 && y == 2) {
				pictureBox8->Image = redwin->Image;
			}
			if (x == 2 && y == 3) {
				pictureBox9->Image = redwin->Image;
			}
			if (x == 2 && y == 4) {
				pictureBox10->Image = redwin->Image;
			}
			if (x == 2 && y == 5) {
				pictureBox11->Image = redwin->Image;
			}
			if (x == 2 && y == 6) {
				pictureBox12->Image = redwin->Image;
			}

			if (x == 3 && y == 1) {
				pictureBox13->Image = redwin->Image;
			}
			if (x == 3 && y == 2) {
				pictureBox14->Image = redwin->Image;
			}
			if (x == 3 && y == 3) {
				pictureBox15->Image = redwin->Image;
			}
			if (x == 3 && y == 4) {
				pictureBox16->Image = redwin->Image;
			}
			if (x == 3 && y == 5) {
				pictureBox17->Image = redwin->Image;
			}
			if (x == 3 && y == 6) {
				pictureBox18->Image = redwin->Image;
			}

			if (x == 4 && y == 1) {
				pictureBox19->Image = redwin->Image;
			}
			if (x == 4 && y == 2) {
				pictureBox20->Image = redwin->Image;
			}
			if (x == 4 && y == 3) {
				pictureBox21->Image = redwin->Image;
			}
			if (x == 4 && y == 4) {
				pictureBox22->Image = redwin->Image;
			}
			if (x == 4 && y == 5) {
				pictureBox23->Image = redwin->Image;
			}
			if (x == 4 && y == 6) {
				pictureBox24->Image = redwin->Image;
			}

			if (x == 5 && y == 1) {
				pictureBox25->Image = redwin->Image;
			}
			if (x == 5 && y == 2) {
				pictureBox26->Image = redwin->Image;
			}
			if (x == 5 && y == 3) {
				pictureBox27->Image = redwin->Image;
			}
			if (x == 5 && y == 4) {
				pictureBox28->Image = redwin->Image;
			}
			if (x == 5 && y == 5) {
				pictureBox29->Image = redwin->Image;
			}
			if (x == 5 && y == 6) {
				pictureBox30->Image = redwin->Image;
			}
			if (x == 6 && y == 1) {
				pictureBox31->Image = redwin->Image;
			}
			if (x == 6 && y == 2) {
				pictureBox32->Image = redwin->Image;
			}
			if (x == 6 && y == 3) {
				pictureBox33->Image = redwin->Image;
			}
			if (x == 6 && y == 4) {
				pictureBox34->Image = redwin->Image;
			}
			if (x == 6 && y == 5) {
				pictureBox35->Image = redwin->Image;
			}
			if (x == 6 && y == 6) {
				pictureBox36->Image = redwin->Image;
			}

			if (x == 7 && y == 1) {
				pictureBox37->Image = redwin->Image;
			}
			if (x == 7 && y == 2) {
				pictureBox38->Image = redwin->Image;
			}
			if (x == 7 && y == 3) {
				pictureBox39->Image = redwin->Image;
			}
			if (x == 7 && y == 4) {
				pictureBox40->Image = redwin->Image;
			}
			if (x == 7 && y == 5) {
				pictureBox41->Image = redwin->Image;
			}
			if (x == 7 && y == 6) {
				pictureBox42->Image = redwin->Image;
			}
		}

		void setcolorred(int x, int y) {

			if (x == 1 && y == 1) {
				pictureBox1->Image = red->Image;
			}
			if (x == 1 && y == 2) {
				pictureBox2->Image = red->Image;
			}
			if (x == 1 && y == 3) {
				pictureBox3->Image = red->Image;
			}
			if (x == 1 && y == 4) {
				pictureBox4->Image = red->Image;
			}
			if (x == 1 && y == 5) {
				pictureBox5->Image = red->Image;
			}
			if (x == 1 && y == 6) {
				pictureBox6->Image = red->Image;
			}
			if (x == 2 && y == 1) {
				pictureBox7->Image = red->Image;
			}
			if (x == 2 && y == 2) {
				pictureBox8->Image = red->Image;
			}
			if (x == 2 && y == 3) {
				pictureBox9->Image = red->Image;
			}
			if (x == 2 && y == 4) {
				pictureBox10->Image = red->Image;
			}
			if (x == 2 && y == 5) {
				pictureBox11->Image = red->Image;
			}
			if (x == 2 && y == 6) {
				pictureBox12->Image = red->Image;
			}

			if (x == 3 && y == 1) {
				pictureBox13->Image = red->Image;
			}
			if (x == 3 && y == 2) {
				pictureBox14->Image = red->Image;
			}
			if (x == 3 && y == 3) {
				pictureBox15->Image = red->Image;
			}
			if (x == 3 && y == 4) {
				pictureBox16->Image = red->Image;
			}
			if (x == 3 && y == 5) {
				pictureBox17->Image = red->Image;
			}
			if (x == 3 && y == 6) {
				pictureBox18->Image = red->Image;
			}

			if (x == 4 && y == 1) {
				pictureBox19->Image = red->Image;
			}
			if (x == 4 && y == 2) {
				pictureBox20->Image = red->Image;
			}
			if (x == 4 && y == 3) {
				pictureBox21->Image = red->Image;
			}
			if (x == 4 && y == 4) {
				pictureBox22->Image = red->Image;
			}
			if (x == 4 && y == 5) {
				pictureBox23->Image = red->Image;
			}
			if (x == 4 && y == 6) {
				pictureBox24->Image = red->Image;
			}

			if (x == 5 && y == 1) {
				pictureBox25->Image = red->Image;
			}
			if (x == 5 && y == 2) {
				pictureBox26->Image = red->Image;
			}
			if (x == 5 && y == 3) {
				pictureBox27->Image = red->Image;
			}
			if (x == 5 && y == 4) {
				pictureBox28->Image = red->Image;
			}
			if (x == 5 && y == 5) {
				pictureBox29->Image = red->Image;
			}
			if (x == 5 && y == 6) {
				pictureBox30->Image = red->Image;
			}
			if (x == 6 && y == 1) {
				pictureBox31->Image = red->Image;
			}
			if (x == 6 && y == 2) {
				pictureBox32->Image = red->Image;
			}
			if (x == 6 && y == 3) {
				pictureBox33->Image = red->Image;
			}
			if (x == 6 && y == 4) {
				pictureBox34->Image = red->Image;
			}
			if (x == 6 && y == 5) {
				pictureBox35->Image = red->Image;
			}
			if (x == 6 && y == 6) {
				pictureBox36->Image = red->Image;
			}

			if (x == 7 && y == 1) {
				pictureBox37->Image = red->Image;
			}
			if (x == 7 && y == 2) {
				pictureBox38->Image = red->Image;
			}
			if (x == 7 && y == 3) {
				pictureBox39->Image = red->Image;
			}
			if (x == 7 && y == 4) {
				pictureBox40->Image = red->Image;
			}
			if (x == 7 && y == 5) {
				pictureBox41->Image = red->Image;
			}
			if (x == 7 && y == 6) {
				pictureBox42->Image = red->Image;
			}
		}
		
		/*	void checkvertical()
		{

		for (int i = 1; i <= 7; i++)
		{
		int count = 0;
		for (int j = ((6 * i) - 5); j <= i * 6; j++)
		{
		if (checkcolorred(j) == 1)
		{
		count++;
		if (count == 4)
		{
		MessageBox::Show("Red Wins!");
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		delete p1;
		delete p2;
		}
		}
		else
		{
		count = 0;
		}
		}
		}
		for (int i = 1; i <= 7; i++) {
		int count = 0;
		for (int j = ((6 * i) - 5); j <= i * 6; j++) {
		if (checkcolorgreen(j) == 1) {
		count++;
		if (count == 4) {
		MessageBox::Show("Green Wins!");
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		delete p1;
		delete p2;
		}
		}
		else {
		count = 0;
		}
		}
		}
		} */

		void player1Win()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			delete p1;
			delete p2;
			gameOver = 1;
		}
		void player2Win()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			delete p1;
			delete p2;
			gameOver = 2;
		}
		void checkVertical()
		{
			if (temp->getN() == 2)
			{
				for (int i = 1; i < 8; i++)
				{
					for (int j = 1; j < 4; j++)
					{
						if (checkcolorgreen(i, j) == true && checkcolorgreen(i, j + 1) == true && checkcolorgreen(i, j + 2) == true && checkcolorgreen(i, j + 3) == true)
						{
							setcolorgreenwin(i, j);
							setcolorgreenwin(i, j+1);
							setcolorgreenwin(i, j+2);
							setcolorgreenwin(i, j+3);
							player1Win();
							break;
						}
					}
				}
			}
			else if (temp->getN() == 1)
			{

				for (int i = 1; i < 8; i++)
				{
					for (int j = 1; j < 3; j++)
					{
						if (checkcolorred(i, j) == true && checkcolorred(i, j + 1) == true && checkcolorred(i, j + 2) == true && checkcolorred(i, j + 3) == true)
						{
							setcolorredwin(i, j);
							setcolorredwin(i, j + 1);
							setcolorredwin(i, j + 2);
							setcolorredwin(i, j + 3);
							player2Win();
							break;
						}
					}
				}
			}

		}
		
		void checkHorizontal()
		{
			if (temp->getN() == 2)
			{

				for (int i = 1; i < 5; i++)
				{
					for (int j = 1; j < 7; j++)
					{
						if (checkcolorgreen(i, j) == true && checkcolorgreen(i + 1, j) == true && checkcolorgreen(i + 2, j) == true && checkcolorgreen(i + 3, j) == true)
						{
							setcolorgreenwin(i, j);
							setcolorgreenwin(i + 1, j);
							setcolorgreenwin(i + 2, j);
							setcolorgreenwin(i + 3, j);
							player1Win();
							
							break;
						}
					}
				}
			}
			else if (temp->getN() == 1)
			{
				for (int i = 1; i < 5; i++)
				{
					for (int j = 1; j < 7; j++)
					{
						if (checkcolorred(i, j) == true && checkcolorred(i + 1, j) == true && checkcolorred(i + 2, j) == true && checkcolorred(i + 3, j) == true)
						{
							setcolorredwin(i, j);
							setcolorredwin(i + 1, j);
							setcolorredwin(i + 2, j);
							setcolorredwin(i + 3, j);
							player2Win();
							break;
						}
					}
				}

			}
		}
		void checkDiagonal()
		{
			if (temp->getN() == 2)
			{
				for (int i = 1; i < 5; i++)
				{
					for (int j = 1; j < 4; j++)
					{
						if (checkcolorgreen(i, j) == true && checkcolorgreen(i + 1, j + 1) == true && checkcolorgreen(i + 2, j + 2) == true && checkcolorgreen(i + 3, j + 3) == true)
						{
							setcolorgreenwin(i, j);
							setcolorgreenwin(i + 1, j+1);
							setcolorgreenwin(i + 2, j+2);
							setcolorgreenwin(i + 3, j+3);
							player1Win();
							break;
						}
					}
				}
			}
			else if (temp->getN() == 1)
			{
				for (int i = 1; i < 5; i++)
				{
					for (int j = 1; j < 4; j++)
					{
						if (checkcolorred(i, j) == true && checkcolorred(i + 1, j + 1) == true && checkcolorred(i + 2, j + 2) == true && checkcolorred(i + 3, j + 3) == true)
						{
							setcolorredwin(i, j);
							setcolorredwin(i + 1, j + 1);
							setcolorredwin(i + 2, j + 2);
							setcolorredwin(i + 3, j + 3);
							player2Win();
							break;
						}
					}
				}

			}
		}
		void checkDiagonalRev()
		{
			if (temp->getN() == 2)
			{
				for (int i = 1; i < 5; i++)
				{
					for (int j = 6; j > 3; j--)
					{
						if (checkcolorgreen(i, j) == true && checkcolorgreen(i + 1, j - 1) == true && checkcolorgreen(i + 2, j - 2) == true && checkcolorgreen(i + 3, j - 3) == true)
						{
							setcolorgreenwin(i, j);
							setcolorgreenwin(i + 1, j - 1);
							setcolorgreenwin(i + 2, j - 2);
							setcolorgreenwin(i + 3, j - 3);
							player1Win();
							break;
						}
					}
				}
			}
			else if (temp->getN() == 1)
			{
				for (int i = 1; i < 5; i++)
				{
					for (int j = 6; j > 3; j--)
					{
						if (checkcolorred(i, j) == true && checkcolorred(i + 1, j - 1) == true && checkcolorred(i + 2, j - 2) == true && checkcolorred(i + 3, j - 3) == true)
						{
							setcolorredwin(i, j);
							setcolorredwin(i + 1, j - 1);
							setcolorredwin(i + 2, j - 2);
							setcolorredwin(i + 3, j - 3);
							player2Win();
							break;
						}
					}
				}
			}

		}

		void checkdraw() {
			int flag = 1;
			for (int i = 1; i < 8; i++) {
				for (int j = 1; j < 7; j++) {
					if (checkcolor(i, j) == 1) {
						flag = 0;
						break;
					}
				}
			}
			if (flag == 1) {
				savebutton->Visible = false;
				label1->ForeColor = System::Drawing::Color::Black;
				label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				label1->Text = "DRAW";
				label1->Size = System::Drawing::Size(445, 88);
				label1->Location = System::Drawing::Point(159, 4);
				turnpic->Visible = false;
			}
		}
			
		void changePlayer(int x, int y)
		{
			if (label1->Text == "Player 1")
			{
				temp = &(*p2);
				setcolorgreen(x, y);
				checkVertical();
				checkHorizontal();
				checkDiagonal();
				checkDiagonalRev();
				
				if (gameOver == 0)
				{
					label1->Text = "Player 2";
				}
				else if (gameOver == 1)
				{
					label1->Text = "Player 1 Wins!";
				}
				else if (gameOver == 2)
				{
					label1->Text = "Player 2 Wins!";
				}
				if (gameOver != 0) {
					savebutton->Visible = false;
					label1->ForeColor = System::Drawing::Color::Gold;
					label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					label1->Size = System::Drawing::Size(445, 88);
					label1->Location = System::Drawing::Point(159, 4);
					turnpic->Location = System::Drawing::Point(83, 10);
					turnpic->Size = System::Drawing::Size(70, 76);
					
				}
				else {
					label1->ForeColor = System::Drawing::Color::Red;
					turnpic->Image = red->Image;
				}
			}
			else
			{
				temp = &(*p1);
				checkdraw();
				setcolorred(x, y);
				checkVertical();
				checkHorizontal();
				checkDiagonal();
				checkDiagonalRev();
				if (gameOver == 0)
				{
					label1->Text = "Player 1";
				}
				else if (gameOver == 1)
				{
					label1->Text = "Player 1 Wins!";
				}
				else if (gameOver == 2)
				{
					label1->Text = "Player 2 Wins!";
				}
				if (gameOver != 0) {
					savebutton->Visible = false;
					label1->ForeColor = System::Drawing::Color::Gold;
					label1->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					label1->Size = System::Drawing::Size(445, 88);
					label1->Location = System::Drawing::Point(159, 4);
					turnpic->Location = System::Drawing::Point(83, 10);
					turnpic->Size = System::Drawing::Size(70, 76);
					
				}
				else{
					label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				turnpic->Image = green->Image;
			}
			}
			checkdraw();
		}




	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover1->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(1, i) == 1)
			{
				changePlayer(1, i);
				break;
			}
			if (i == 5 && checkcolor(1, i) == 0)
			{
				button1->Enabled = false;
			}
			
		}
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover2->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(2, i) == 1)
			{
				changePlayer(2, i);
				break;
			}
			if (i == 5 && checkcolor(2, i) == 0)
				button2->Enabled = false;
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover3->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(3, i) == 1)
			{
				changePlayer(3, i);
				break;
			}
			if (i == 5 && checkcolor(3, i) == 0)
				button3->Enabled = false;
		}
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover4->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(4, i) == 1)
			{
				changePlayer(4, i);
				break;
			}
			if (i == 5 && checkcolor(4, i) == 0)
				button4->Enabled = false;
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover5->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(5, i) == 1)
			{
				changePlayer(5, i);
				break;
			}
			if (i == 5 && checkcolor(5, i) == 0)
				button5->Enabled = false;
		}
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover6->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(6, i) == 1)
			{
				changePlayer(6, i);
				break;
			}
			if (i == 5 && checkcolor(6, i) == 0)
				button6->Enabled = false;
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		hover7->Visible = false;
		for (int i = 1; i < 7; i++)
		{
			if (checkcolor(7, i) == 1)
			{
				changePlayer(7, i);
				break;
			}
			if (i == 5 && checkcolor(7, i) == 0)
				button7->Enabled = false;
		}
	}

			 void loading() {
			progressBar1->Location = System::Drawing::Point(17, 224);
				 for (; progressBar1->Value < 100; progressBar1->Value += 10) {
					 Sleep(200);
				 }
				 if (progressBar1->Value == 100) {
					 progressBar1->Visible = false;
					 panel1->Visible = true;
					 button1->Visible = true;
					 button2->Visible = true;
					 button3->Visible = true;
					 button4->Visible = true;
					 button5->Visible = true;
					 button6->Visible = true;
					 button7->Visible = true;
				 }
			 }



	private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		if (label1->Text == "Player 1")
		{
			hover1->Image = greenhover->Image;
			hover1->Visible = true;
		}
		else {
			hover1->Image = redhover->Image;
			hover1->Visible = true;
		}
	}

private: System::Void button1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover1->Visible = false;
}

			private: System::Void button2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				if (label1->Text == "Player 1")
				{
					hover2->Image = greenhover->Image;
					hover2->Visible = true;
				}
				else {
					hover2->Image = redhover->Image;
					hover2->Visible = true;
				}
			}

private: System::Void button2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover2->Visible = false;
}
					private: System::Void button3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
						if (label1->Text == "Player 1")
						{
							hover3->Image = greenhover->Image;
							hover3->Visible = true;
						}
						else {
							hover3->Image = redhover->Image;
							hover3->Visible = true;
						}
					}

private: System::Void button3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover3->Visible = false;
}

					private: System::Void button4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
						if (label1->Text == "Player 1")
						{
							hover4->Image = greenhover->Image;
							hover4->Visible = true;
						}
						else {
							hover4->Image = redhover->Image;
							hover4->Visible = true;
						}
					}

private: System::Void button4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover4->Visible = false;
}

		 			private: System::Void button5_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				if (label1->Text == "Player 1")
				{
					hover5->Image = greenhover->Image;
					hover5->Visible = true;
				}
				else {
					hover5->Image = redhover->Image;
					hover5->Visible = true;
				}
			}

private: System::Void button5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover5->Visible = false;
}

					private: System::Void button6_MouseHover(System::Object^  sender, System::EventArgs^  e) {
						if (label1->Text == "Player 1")
						{
							hover6->Image = greenhover->Image;
							hover6->Visible = true;
						}
						else {
							hover6->Image = redhover->Image;
							hover6->Visible = true;
						}
					}

private: System::Void button6_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover6->Visible = false;
}

					private: System::Void button7_MouseHover(System::Object^  sender, System::EventArgs^  e) {
						if (label1->Text == "Player 1")
						{
							hover7->Image = greenhover->Image;
							hover7->Visible = true;
						}
						else {
							hover7->Image = redhover->Image;
							hover7->Visible = true;
						}
					}

private: System::Void button7_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	hover7->Visible = false;
}

private: System::Void button1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover1->Image = greenhover->Image;
		hover1->Visible = true;
	}
	else {
		hover1->Image = redhover->Image;
		hover1->Visible = true;
	}
}
private: System::Void button2_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover2->Image = greenhover->Image;
		hover2->Visible = true;
	}
	else {
		hover2->Image = redhover->Image;
		hover2->Visible = true;
	}
}

private: System::Void button3_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover3->Image = greenhover->Image;
		hover3->Visible = true;
	}
	else {
		hover3->Image = redhover->Image;
		hover3->Visible = true;
	}
}
private: System::Void button4_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover4->Image = greenhover->Image;
		hover4->Visible = true;
	}
	else {
		hover4->Image = redhover->Image;
		hover4->Visible = true;
	}
}
private: System::Void button5_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover5->Image = greenhover->Image;
		hover5->Visible = true;
	}
	else {
		hover5->Image = redhover->Image;
		hover5->Visible = true;
	}
}
private: System::Void button6_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover6->Image = greenhover->Image;
		hover6->Visible = true;
	}
	else {
		hover6->Image = redhover->Image;
		hover6->Visible = true;
	}
}
private: System::Void button7_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (label1->Text == "Player 1")
	{
		hover7->Image = greenhover->Image;
		hover7->Visible = true;
	}
	else {
		hover7->Image = redhover->Image;
		hover7->Visible = true;
	}
}
private: System::Void Board_Load(System::Object^  sender, System::EventArgs^  e) {
	
	int size = 0;
	ifstream incontact("save.txt");
	string line;
	int flag = 0;
	while (getline(incontact, line))
	{
		size++;
		flag = 1;
	}
	incontact.close();
	ifstream incontact2("save.txt");

	for (int k = 0; k <size; k++)
	{
		int color;
		int i;
		int j;
		incontact2 >> color >> i >> j;
		if (color == 8) {
			setcolorgreen(i, j);
		}
		else if (color == 9) {
			setcolorred(i, j);
		}

	}
	incontact2.close();
	remove("save.txt");
	if (flag == 1) {
		MessageBox::Show("Save file loaded");
	}
	
}
		 
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	int size;
	ofstream out("save.txt");
	for (int i = 1; i < 8; i++) {
		for (int j = 1; j < 7; j++) {
			if (checkcolorgreen(i, j) == 1) {
				out << 8 << " ";
				out << i << " ";
				out << j << endl;
			}
			else if (checkcolorred(i, j) == 1) {
				out << 9 << " ";
				out << i << " ";
				out << j << endl;
		}
	}
}
	out.close();
	Application::Exit();
}
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void Board_Shown(System::Object^  sender, System::EventArgs^  e) {
	loading();
}
};



}
