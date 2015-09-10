#include <Windows.h>
#include "BuildUp.h"
#pragma once

namespace TyE_Module {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^  Protection;
	private: System::ComponentModel::BackgroundWorker^  oException;
	protected: 
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  Credits;

	private: System::Windows::Forms::Panel^  Exit;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  Minimize;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Panel^  Notes;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Panel^  Hacks;
	private: System::Windows::Forms::CheckedListBox^  hackList;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  Settings;
	private: System::Windows::Forms::CheckBox^  chanCheck;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckBox^  speedCheck;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  CHANNEL_;
	private: System::Windows::Forms::Label^  charName;
	private: System::ComponentModel::BackgroundWorker^  Statistics;
	private: System::Windows::Forms::Label^  Channel;
	private: System::Windows::Forms::CheckBox^  Stats;
	private: System::Windows::Forms::Label^  Level;

	private: System::Windows::Forms::Panel^  Hacks_2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  nameHack;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  myIGN;
	private: System::ComponentModel::BackgroundWorker^  Fade;
	private: System::Windows::Forms::Panel^  Hotkeys;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  viewList;
	private: System::Windows::Forms::Label^  customKey;
	private: System::Windows::Forms::CheckBox^  keyCheck;
	private: System::ComponentModel::BackgroundWorker^  Hotkey;
	private: System::Windows::Forms::Button^  buForm;
	private: System::Windows::Forms::Label^  label18;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->Protection = (gcnew System::ComponentModel::BackgroundWorker());
			this->oException = (gcnew System::ComponentModel::BackgroundWorker());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Credits = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->Level = (gcnew System::Windows::Forms::Label());
			this->Channel = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Notes = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Hacks = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->hackList = (gcnew System::Windows::Forms::CheckedListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Settings = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->speedCheck = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chanCheck = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CHANNEL_ = (gcnew System::Windows::Forms::Timer(this->components));
			this->charName = (gcnew System::Windows::Forms::Label());
			this->Statistics = (gcnew System::ComponentModel::BackgroundWorker());
			this->Stats = (gcnew System::Windows::Forms::CheckBox());
			this->Hacks_2 = (gcnew System::Windows::Forms::Panel());
			this->buForm = (gcnew System::Windows::Forms::Button());
			this->nameHack = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->myIGN = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Fade = (gcnew System::ComponentModel::BackgroundWorker());
			this->Hotkeys = (gcnew System::Windows::Forms::Panel());
			this->viewList = (gcnew System::Windows::Forms::Label());
			this->keyCheck = (gcnew System::Windows::Forms::CheckBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->customKey = (gcnew System::Windows::Forms::Label());
			this->Hotkey = (gcnew System::ComponentModel::BackgroundWorker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->Credits->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->Notes->SuspendLayout();
			this->Hacks->SuspendLayout();
			this->Settings->SuspendLayout();
			this->Hacks_2->SuspendLayout();
			this->Hotkeys->SuspendLayout();
			this->SuspendLayout();
			// 
			// Protection
			// 
			this->Protection->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Protection_DoWork);
			// 
			// oException
			// 
			this->oException->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::oException_DoWork);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::Color::GhostWhite;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Notes", L"Credits", L"Hacks", L"Hotkeys", L"Settings"});
			this->listBox1->Location = System::Drawing::Point(2, 68);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(49, 75);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::listBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(165, 18);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Brown;
			this->Exit->Location = System::Drawing::Point(131, -6);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(29, 17);
			this->Exit->TabIndex = 6;
			this->Exit->Click += gcnew System::EventHandler(this, &Home::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TyE . Home";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::label1_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::label1_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::label1_MouseUp);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)), 
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel2->Controls->Add(this->Minimize);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Location = System::Drawing::Point(0, 168);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(165, 17);
			this->panel2->TabIndex = 3;
			// 
			// Minimize
			// 
			this->Minimize->BackColor = System::Drawing::Color::SlateGray;
			this->Minimize->Location = System::Drawing::Point(7, 6);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(29, 17);
			this->Minimize->TabIndex = 7;
			this->Minimize->Click += gcnew System::EventHandler(this, &Home::Minimize_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Peru;
			this->label3->Location = System::Drawing::Point(135, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 15);
			this->label3->TabIndex = 24;
			this->label3->Text = L"4.6.4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::GhostWhite;
			this->label9->Location = System::Drawing::Point(103, 1);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 15);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Build:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::GhostWhite;
			this->label5->Location = System::Drawing::Point(2, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 15);
			this->label5->TabIndex = 22;
			this->label5->Text = L"© NEET 13\'";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Location = System::Drawing::Point(0, 68);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(2, 75);
			this->panel3->TabIndex = 4;
			// 
			// Credits
			// 
			this->Credits->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Credits->Controls->Add(this->label18);
			this->Credits->Controls->Add(this->label8);
			this->Credits->Controls->Add(this->label7);
			this->Credits->Controls->Add(this->label6);
			this->Credits->Controls->Add(this->label5);
			this->Credits->Location = System::Drawing::Point(51, 68);
			this->Credits->Name = L"Credits";
			this->Credits->Size = System::Drawing::Size(113, 90);
			this->Credits->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 15);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Code: Veritas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 15);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Content: Veritas";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 2);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 15);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Design: Veritas";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel6->Location = System::Drawing::Point(0, 40);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(165, 2);
			this->panel6->TabIndex = 6;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel7->Controls->Add(this->Level);
			this->panel7->Controls->Add(this->Channel);
			this->panel7->Location = System::Drawing::Point(0, 42);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(165, 20);
			this->panel7->TabIndex = 7;
			// 
			// Level
			// 
			this->Level->AutoSize = true;
			this->Level->Location = System::Drawing::Point(4, 3);
			this->Level->Name = L"Level";
			this->Level->Size = System::Drawing::Size(46, 15);
			this->Level->TabIndex = 1;
			this->Level->Text = L"Level: ...";
			// 
			// Channel
			// 
			this->Channel->AutoSize = true;
			this->Channel->Location = System::Drawing::Point(55, 3);
			this->Channel->Name = L"Channel";
			this->Channel->Size = System::Drawing::Size(60, 15);
			this->Channel->TabIndex = 0;
			this->Channel->Text = L"Channel: ...";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel8->Controls->Add(this->label2);
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Location = System::Drawing::Point(89, 22);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(56, 19);
			this->panel8->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Statistics";
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Tip";
			// 
			// Notes
			// 
			this->Notes->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Notes->Controls->Add(this->richTextBox1);
			this->Notes->Controls->Add(this->listBox2);
			this->Notes->Controls->Add(this->label4);
			this->Notes->Location = System::Drawing::Point(255, 25);
			this->Notes->Name = L"Notes";
			this->Notes->Size = System::Drawing::Size(113, 90);
			this->Notes->TabIndex = 23;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::GhostWhite;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->richTextBox1->ForeColor = System::Drawing::Color::SlateGray;
			this->richTextBox1->Location = System::Drawing::Point(61, 7);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(46, 60);
			this->richTextBox1->TabIndex = 24;
			this->richTextBox1->Text = L"+Build\n-Rebirth\n+Crash\n-Nanmu\n+Crush";
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::White;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Graphics", L"Content", L"Settings", L"Hotkeys"});
			this->listBox2->Location = System::Drawing::Point(5, 7);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(53, 60);
			this->listBox2->TabIndex = 23;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::listBox2_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::GhostWhite;
			this->label4->Location = System::Drawing::Point(2, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 15);
			this->label4->TabIndex = 22;
			this->label4->Text = L"© NEET 13\'";
			// 
			// Hacks
			// 
			this->Hacks->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Hacks->Controls->Add(this->label15);
			this->Hacks->Controls->Add(this->hackList);
			this->Hacks->Controls->Add(this->label13);
			this->Hacks->Location = System::Drawing::Point(255, 121);
			this->Hacks->Name = L"Hacks";
			this->Hacks->Size = System::Drawing::Size(113, 90);
			this->Hacks->TabIndex = 26;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Enabled = false;
			this->label15->Location = System::Drawing::Point(72, 73);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 15);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Page 2";
			this->label15->Click += gcnew System::EventHandler(this, &Home::label15_Click);
			// 
			// hackList
			// 
			this->hackList->BackColor = System::Drawing::Color::GhostWhite;
			this->hackList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hackList->Enabled = false;
			this->hackList->ForeColor = System::Drawing::Color::SlateGray;
			this->hackList->FormattingEnabled = true;
			this->hackList->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"Air Suspend", L"Gravity Jump", L"Levi. Glide", 
				L"Walk Boost", L"Run Boost", L"H. Jump", L"Suicide Jump", L"Hyper Jump", L"Room Crash", L"Panic Hack", L"Crush D3D", L"Dead Gravity", 
				L"Ping View"});
			this->hackList->Location = System::Drawing::Point(5, 7);
			this->hackList->Name = L"hackList";
			this->hackList->Size = System::Drawing::Size(102, 60);
			this->hackList->TabIndex = 23;
			this->hackList->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Home::hackList_ItemCheck);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::GhostWhite;
			this->label13->Location = System::Drawing::Point(2, 74);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(56, 15);
			this->label13->TabIndex = 22;
			this->label13->Text = L"© NEET 13\'";
			// 
			// Settings
			// 
			this->Settings->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Settings->Controls->Add(this->label12);
			this->Settings->Controls->Add(this->speedCheck);
			this->Settings->Controls->Add(this->textBox1);
			this->Settings->Controls->Add(this->chanCheck);
			this->Settings->Controls->Add(this->label11);
			this->Settings->Controls->Add(this->comboBox1);
			this->Settings->Controls->Add(this->label10);
			this->Settings->Location = System::Drawing::Point(255, 217);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(113, 90);
			this->Settings->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 55);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 15);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Speed";
			// 
			// speedCheck
			// 
			this->speedCheck->AutoSize = true;
			this->speedCheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->speedCheck->Location = System::Drawing::Point(98, 58);
			this->speedCheck->Name = L"speedCheck";
			this->speedCheck->Size = System::Drawing::Size(12, 11);
			this->speedCheck->TabIndex = 27;
			this->speedCheck->UseVisualStyleBackColor = true;
			this->speedCheck->CheckedChanged += gcnew System::EventHandler(this, &Home::speedCheck_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(49, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 20);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// chanCheck
			// 
			this->chanCheck->AutoSize = true;
			this->chanCheck->Enabled = false;
			this->chanCheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chanCheck->Location = System::Drawing::Point(98, 26);
			this->chanCheck->Name = L"chanCheck";
			this->chanCheck->Size = System::Drawing::Size(12, 11);
			this->chanCheck->TabIndex = 25;
			this->chanCheck->UseVisualStyleBackColor = true;
			this->chanCheck->CheckedChanged += gcnew System::EventHandler(this, &Home::chanCheck_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 15);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Channel Selection";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Amateur", L"Semi Pro", L"Professional", L"NEET Custom"});
			this->comboBox1->Location = System::Drawing::Point(6, 21);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(87, 23);
			this->comboBox1->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::GhostWhite;
			this->label10->Location = System::Drawing::Point(2, 74);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 15);
			this->label10->TabIndex = 22;
			this->label10->Text = L"© NEET 13\'";
			// 
			// CHANNEL_
			// 
			this->CHANNEL_->Interval = 1500;
			this->CHANNEL_->Tick += gcnew System::EventHandler(this, &Home::CHANNEL_Tick);
			// 
			// charName
			// 
			this->charName->AutoSize = true;
			this->charName->Location = System::Drawing::Point(4, 24);
			this->charName->Name = L"charName";
			this->charName->Size = System::Drawing::Size(16, 15);
			this->charName->TabIndex = 28;
			this->charName->Text = L"...";
			// 
			// Statistics
			// 
			this->Statistics->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Statistics_DoWork);
			// 
			// Stats
			// 
			this->Stats->AutoSize = true;
			this->Stats->Enabled = false;
			this->Stats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stats->Location = System::Drawing::Point(4, 143);
			this->Stats->Name = L"Stats";
			this->Stats->Size = System::Drawing::Size(47, 19);
			this->Stats->TabIndex = 29;
			this->Stats->Text = L"Hook";
			this->Stats->UseVisualStyleBackColor = true;
			// 
			// Hacks_2
			// 
			this->Hacks_2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Hacks_2->Controls->Add(this->buForm);
			this->Hacks_2->Controls->Add(this->nameHack);
			this->Hacks_2->Controls->Add(this->label17);
			this->Hacks_2->Controls->Add(this->myIGN);
			this->Hacks_2->Controls->Add(this->label16);
			this->Hacks_2->Controls->Add(this->label14);
			this->Hacks_2->Location = System::Drawing::Point(374, 121);
			this->Hacks_2->Name = L"Hacks_2";
			this->Hacks_2->Size = System::Drawing::Size(113, 90);
			this->Hacks_2->TabIndex = 27;
			// 
			// buForm
			// 
			this->buForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->buForm->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buForm->Location = System::Drawing::Point(5, 44);
			this->buForm->Name = L"buForm";
			this->buForm->Size = System::Drawing::Size(104, 23);
			this->buForm->TabIndex = 29;
			this->buForm->Text = L"Build Up";
			this->buForm->UseVisualStyleBackColor = false;
			this->buForm->Click += gcnew System::EventHandler(this, &Home::buForm_Click);
			// 
			// nameHack
			// 
			this->nameHack->AutoSize = true;
			this->nameHack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nameHack->ForeColor = System::Drawing::Color::Red;
			this->nameHack->Location = System::Drawing::Point(71, 2);
			this->nameHack->Name = L"nameHack";
			this->nameHack->Size = System::Drawing::Size(39, 15);
			this->nameHack->TabIndex = 28;
			this->nameHack->Text = L"Update";
			this->nameHack->Click += gcnew System::EventHandler(this, &Home::nameHack_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 2);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 15);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Player IGN";
			// 
			// myIGN
			// 
			this->myIGN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->myIGN->Location = System::Drawing::Point(5, 20);
			this->myIGN->Name = L"myIGN";
			this->myIGN->Size = System::Drawing::Size(104, 20);
			this->myIGN->TabIndex = 26;
			this->myIGN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->myIGN->Click += gcnew System::EventHandler(this, &Home::myIGN_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Location = System::Drawing::Point(72, 73);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 15);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Page 1";
			this->label16->Click += gcnew System::EventHandler(this, &Home::label16_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::GhostWhite;
			this->label14->Location = System::Drawing::Point(2, 74);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 15);
			this->label14->TabIndex = 22;
			this->label14->Text = L"© NEET 13\'";
			// 
			// Fade
			// 
			this->Fade->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Fade_DoWork);
			// 
			// Hotkeys
			// 
			this->Hotkeys->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Hotkeys->Controls->Add(this->viewList);
			this->Hotkeys->Controls->Add(this->keyCheck);
			this->Hotkeys->Controls->Add(this->label21);
			this->Hotkeys->Location = System::Drawing::Point(255, 313);
			this->Hotkeys->Name = L"Hotkeys";
			this->Hotkeys->Size = System::Drawing::Size(113, 90);
			this->Hotkeys->TabIndex = 29;
			// 
			// viewList
			// 
			this->viewList->AutoSize = true;
			this->viewList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewList->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->viewList->Location = System::Drawing::Point(79, 21);
			this->viewList->Name = L"viewList";
			this->viewList->Size = System::Drawing::Size(24, 15);
			this->viewList->TabIndex = 25;
			this->viewList->Text = L"List";
			this->viewList->Click += gcnew System::EventHandler(this, &Home::viewList_Click);
			// 
			// keyCheck
			// 
			this->keyCheck->AutoSize = true;
			this->keyCheck->Enabled = false;
			this->keyCheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->keyCheck->Location = System::Drawing::Point(5, 19);
			this->keyCheck->Name = L"keyCheck";
			this->keyCheck->Size = System::Drawing::Size(59, 19);
			this->keyCheck->TabIndex = 23;
			this->keyCheck->Text = L"Hotkeys";
			this->keyCheck->UseVisualStyleBackColor = true;
			this->keyCheck->CheckedChanged += gcnew System::EventHandler(this, &Home::keyCheck_CheckedChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::GhostWhite;
			this->label21->Location = System::Drawing::Point(2, 74);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 15);
			this->label21->TabIndex = 22;
			this->label21->Text = L"© NEET 13\'";
			// 
			// customKey
			// 
			this->customKey->AutoSize = true;
			this->customKey->Cursor = System::Windows::Forms::Cursors::Hand;
			this->customKey->ForeColor = System::Drawing::Color::Red;
			this->customKey->Location = System::Drawing::Point(413, 332);
			this->customKey->Name = L"customKey";
			this->customKey->Size = System::Drawing::Size(43, 15);
			this->customKey->TabIndex = 24;
			this->customKey->Text = L"Custom";
			// 
			// Hotkey
			// 
			this->Hotkey->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Home::Hotkey_DoWork);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(36, 47);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(71, 15);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Idea(\?): Mercy";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->ClientSize = System::Drawing::Size(165, 185);
			this->Controls->Add(this->Hotkeys);
			this->Controls->Add(this->customKey);
			this->Controls->Add(this->Hacks_2);
			this->Controls->Add(this->Stats);
			this->Controls->Add(this->charName);
			this->Controls->Add(this->Settings);
			this->Controls->Add(this->Hacks);
			this->Controls->Add(this->Notes);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->Credits);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::GhostWhite;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TyE . Home";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Home::Home_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::Home_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->Credits->ResumeLayout(false);
			this->Credits->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->Notes->ResumeLayout(false);
			this->Notes->PerformLayout();
			this->Hacks->ResumeLayout(false);
			this->Hacks->PerformLayout();
			this->Settings->ResumeLayout(false);
			this->Settings->PerformLayout();
			this->Hacks_2->ResumeLayout(false);
			this->Hacks_2->PerformLayout();
			this->Hotkeys->ResumeLayout(false);
			this->Hotkeys->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//INITIALIZATION
		private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e);
	//STATISTICS_CONTROL
		private: System::Void Statistics_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
		private: System::Void setStats();
		private: System::Void doIGN();
	//EXIT_CHECK
		private: System::Void Home_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 try { ExitProcess(0); } catch(...) {  }
			}
	//SECURITY_SCAN
		private: System::Void Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
	//EXCEPTION_SCAN
		private: System::Void oException_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
	//FADE_THREAD
		private: System::Void Fade_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

				 //DO_FADE
label_FADE:
				 if ( this->Opacity != 100 ) {

					 this->Opacity += 0.025;
					 Sleep(15);
					 goto label_FADE;
				 }
				 Fade->CancelAsync();
			 }
	//DRAW_BORDER
		void drawBorder(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Pen^ newPen = gcnew Pen( System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(43))), 3.00f );
				 int x = 0;
				 int y = 0;
				 int width = this->ClientSize.Width - 1;
				 int height = this->ClientSize.Height - 1;

				 e->Graphics->DrawRectangle( newPen, x, y, width, height );
			}
	//PAINT_GRAPHICS
		private: System::Void Home_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 drawBorder(sender, e);
			}
	//DRAGGING_CONTROL
		private: bool DRAGGING;
		private: Point OFFSET;
		private: void getPOS(System::Windows::Forms::MouseEventArgs^  e) {
				 this->OFFSET = Point(e->X, e->Y);
			 }
		private: void DRAG(System::Windows::Forms::MouseEventArgs^  e) {
				 switch (DRAGGING) {
				 case true:
					 Point currentScreenPos = PointToScreen(e->Location);
					 Location = Point(currentScreenPos.X - this->OFFSET.X, currentScreenPos.Y - this->OFFSET.Y);
					 break;
				 }
			 }
	//DRAGGING_BAR
		private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->DRAGGING = true;
				 getPOS(e);
			 }
		private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 switch (DRAGGING) {
				 case true:
					 DRAG(e);
					 break;
				 }
			 }
		private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->DRAGGING = false;
			 }
	//DRAGGING_LABEL_TITLE
		private: System::Void label1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->DRAGGING = true;
				 getPOS(e);
			 }
		private: System::Void label1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 switch (DRAGGING) {
				 case true:
					 DRAG(e);
					 break;
				 }
			 }
		private: System::Void label1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->DRAGGING = false;
			 }
	//EXIT_MINIMIZE
		private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				if ((MessageBoxA(NULL, "Would You Like To Exit TyE?\nClient Process Will Be Killed", "TyE . Dialog", MB_ICONWARNING | MB_YESNO)) == IDOK || IDYES ) {
					ExitProcess(0);
				}
			 }
		private: System::Void Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->WindowState = FormWindowState::Minimized;
			 }
	//CHANGE_SELECT_PANEL
		private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 int curIndex = listBox1->SelectedIndex;
				 switch (curIndex) {
					//NOTES
				 case 0:
					  this->Notes->Location = System::Drawing::Point(51, 68);
					  this->Credits->Location = System::Drawing::Point(300, 300);
					  this->Hacks->Location = System::Drawing::Point(300, 300);
					  this->Hotkeys->Location = System::Drawing::Point(300, 300);
					  this->Settings->Location = System::Drawing::Point(300, 300);
					 break;
					//CREDITS
				 case 1:
					  this->Credits->Location = System::Drawing::Point(51, 68);
					  this->Notes->Location = System::Drawing::Point(300, 300);
					  this->Hacks->Location = System::Drawing::Point(300, 300);
					  this->Hotkeys->Location = System::Drawing::Point(300, 300);
					  this->Settings->Location = System::Drawing::Point(300, 300);
					 break;
					 //HACKS
				 case 2:
					  this->Hacks->Location = System::Drawing::Point(51, 68);
					  this->Credits->Location = System::Drawing::Point(300, 300);
					  this->Notes->Location = System::Drawing::Point(300, 300);
					  this->Hotkeys->Location = System::Drawing::Point(300, 300);
					  this->Settings->Location = System::Drawing::Point(300, 300);
					 break;
					 //HOTKEYS
				 case 3:
					  this->Hotkeys->Location = System::Drawing::Point(51, 68);
					  this->Hacks->Location = System::Drawing::Point(300, 300);
					  this->Credits->Location = System::Drawing::Point(300, 300);
					  this->Notes->Location = System::Drawing::Point(300, 300);
					  this->Settings->Location = System::Drawing::Point(300, 300);
					 break;
					 //SETTINGS
				 case 4:
					  this->Settings->Location = System::Drawing::Point(51, 68);
					  this->Hacks->Location = System::Drawing::Point(300, 300);
					  this->Hotkeys->Location = System::Drawing::Point(300, 300);
					  this->Credits->Location = System::Drawing::Point(300, 300);
					  this->Notes->Location = System::Drawing::Point(300, 300);
					 break;
				 }
			 }
	//HACK_INDEX
		private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hacks->Location = System::Drawing::Point(300, 300);
				 this->Hacks_2->Location = System::Drawing::Point(51, 68);
				 listBox1->Enabled = false;
		 }
		private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hacks_2->Location = System::Drawing::Point(300, 300);
				 this->Hacks->Location = System::Drawing::Point(51, 68);
				 listBox1->Enabled = true;
		 }
	//CHANGE_LOG_SET
		private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 int curIndex = listBox2->SelectedIndex;
				 switch (curIndex) {
					 //GRAPHICS
				 case 0:
					 richTextBox1->Text = "@Empty";
					 break;
					 //CONTENT
				 case 1:
					 richTextBox1->Text = L"+Build\n-Rebirth\n+Crash\n-Nanmu\n+Crush";
					 break;
					 //SETTINGS
				 case 2:
					 richTextBox1->Text = "@Empty";
					 break;
					 //HOTKEYS
				 case 3:
					 richTextBox1->Text = "@Empty";
					 break;
				 }
			 }
	//HOTKEY_LIST_VIEW
		private: System::Void viewList_Click(System::Object^  sender, System::EventArgs^  e) {

					 MessageBoxA(NULL, "F1: Disable Hotkeys\nF2: Air Suspension\nF3: Gravity Jump\nF4: @Empty\nF5: Panic Reset\nF6: Glide\nF7: Walk Boost\nF8: Run Boost\nF9: Suicide Jump\nF10: D3D Crush\nF11: Dead Gravity\nF12: Room Crash", "TyE . Dialog", MB_ICONINFORMATION | MB_OK);
			 }
	//HOTKEY_THREAD_ACTION
		private: int HKey();
		private: System::Void Hotkey_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
	//HOTKEY_THREADING
		private: System::Void keyCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	//HIDE_SHOW_RUMBLE_WINDOW
		private: void phantomWindow();
#pragma region HACKS
	//BUILD_UP
		private: BuildUp^ buFrm;
		private: System::Void buForm_Click(System::Object^  sender, System::EventArgs^  e);
	//CHANNEL_HACK
		private: System::Void CHANNEL_Tick(System::Object^  sender, System::EventArgs^  e);
		private: System::Void chanCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	//SPEED_HACK
		private: System::Void speedCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	//LIB_HACKS
		private: System::Void hackList_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e);
	//NAME_HACK
		private: System::Void nameChange();
		private: System::Void nameHack_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void myIGN_Click(System::Object^  sender, System::EventArgs^  e) {
					 if ( myIGN->Text != "" ) {

						 myIGN->Text = "";
					 }
				 }
#pragma endregion
};
}