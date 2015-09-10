#include <Windows.h>
#include "hLib.h"
#pragma once

namespace TyE_Module {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BuildUp
	/// </summary>
	public ref class BuildUp : public System::Windows::Forms::Form
	{
	private: Library *lib;
	public:
		BuildUp(Library *lib)
		{
			InitializeComponent();
			this->lib=lib;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BuildUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  bVars;
	private: System::Windows::Forms::ListBox^  bVals;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::CheckBox^  scanCheck;
	private: System::Windows::Forms::CheckBox^  freezeCheck;
	private: System::Windows::Forms::Button^  Edit_Button;





	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  Edit_Execute;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Panel^  Exit;
	private: System::ComponentModel::BackgroundWorker^  Fade;
	private: System::ComponentModel::BackgroundWorker^  BuildUp_Thread;
	private: System::ComponentModel::BackgroundWorker^  Scan_Thread;
	private: System::Windows::Forms::Label^  label2;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bVars = (gcnew System::Windows::Forms::ListBox());
			this->bVals = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->freezeCheck = (gcnew System::Windows::Forms::CheckBox());
			this->scanCheck = (gcnew System::Windows::Forms::CheckBox());
			this->Edit_Button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Edit_Execute = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->Fade = (gcnew System::ComponentModel::BackgroundWorker());
			this->BuildUp_Thread = (gcnew System::ComponentModel::BackgroundWorker());
			this->Scan_Thread = (gcnew System::ComponentModel::BackgroundWorker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(163, 16);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::GhostWhite;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"TyE . BU";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &BuildUp::bar_MouseUp);
			// 
			// bVars
			// 
			this->bVars->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bVars->FormattingEnabled = true;
			this->bVars->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Scroll", L"Exo_1", L"Exo_2"});
			this->bVars->Location = System::Drawing::Point(8, 43);
			this->bVars->Name = L"bVars";
			this->bVars->Size = System::Drawing::Size(69, 39);
			this->bVars->TabIndex = 13;
			this->bVars->SelectedIndexChanged += gcnew System::EventHandler(this, &BuildUp::bVars_SelectedIndexChanged);
			// 
			// bVals
			// 
			this->bVals->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bVals->FormattingEnabled = true;
			this->bVals->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"0", L"0", L"0"});
			this->bVals->Location = System::Drawing::Point(78, 43);
			this->bVals->Name = L"bVals";
			this->bVals->Size = System::Drawing::Size(75, 39);
			this->bVals->TabIndex = 14;
			this->bVals->SelectedIndexChanged += gcnew System::EventHandler(this, &BuildUp::bVals_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel2->Controls->Add(this->freezeCheck);
			this->panel2->Controls->Add(this->scanCheck);
			this->panel2->Location = System::Drawing::Point(8, 88);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(145, 25);
			this->panel2->TabIndex = 17;
			// 
			// freezeCheck
			// 
			this->freezeCheck->AutoSize = true;
			this->freezeCheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->freezeCheck->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->freezeCheck->ForeColor = System::Drawing::Color::Silver;
			this->freezeCheck->Location = System::Drawing::Point(73, 5);
			this->freezeCheck->Name = L"freezeCheck";
			this->freezeCheck->Size = System::Drawing::Size(61, 17);
			this->freezeCheck->TabIndex = 1;
			this->freezeCheck->Text = L"Freeze";
			this->freezeCheck->UseVisualStyleBackColor = true;
			this->freezeCheck->CheckedChanged += gcnew System::EventHandler(this, &BuildUp::freezeCheck_CheckedChanged);
			// 
			// scanCheck
			// 
			this->scanCheck->AutoSize = true;
			this->scanCheck->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->scanCheck->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->scanCheck->ForeColor = System::Drawing::Color::Silver;
			this->scanCheck->Location = System::Drawing::Point(17, 5);
			this->scanCheck->Name = L"scanCheck";
			this->scanCheck->Size = System::Drawing::Size(50, 17);
			this->scanCheck->TabIndex = 0;
			this->scanCheck->Text = L"Scan";
			this->scanCheck->UseVisualStyleBackColor = true;
			this->scanCheck->CheckedChanged += gcnew System::EventHandler(this, &BuildUp::scanCheck_CheckedChanged);
			// 
			// Edit_Button
			// 
			this->Edit_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Edit_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Edit_Button->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Edit_Button->ForeColor = System::Drawing::Color::White;
			this->Edit_Button->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Edit_Button->Location = System::Drawing::Point(78, 19);
			this->Edit_Button->Name = L"Edit_Button";
			this->Edit_Button->Size = System::Drawing::Size(76, 22);
			this->Edit_Button->TabIndex = 18;
			this->Edit_Button->TabStop = false;
			this->Edit_Button->Text = L"Edit";
			this->Edit_Button->UseVisualStyleBackColor = false;
			this->Edit_Button->Click += gcnew System::EventHandler(this, &BuildUp::Edit_Button_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(8, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 13);
			this->textBox1->TabIndex = 24;
			// 
			// Edit_Execute
			// 
			this->Edit_Execute->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)));
			this->Edit_Execute->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Edit_Execute->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Edit_Execute->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Edit_Execute->Location = System::Drawing::Point(86, 127);
			this->Edit_Execute->Name = L"Edit_Execute";
			this->Edit_Execute->Size = System::Drawing::Size(67, 22);
			this->Edit_Execute->TabIndex = 25;
			this->Edit_Execute->TabStop = false;
			this->Edit_Execute->Text = L"Edit";
			this->Edit_Execute->UseVisualStyleBackColor = false;
			this->Edit_Execute->Click += gcnew System::EventHandler(this, &BuildUp::Edit_Execute_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"TyE";
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Brown;
			this->Exit->Location = System::Drawing::Point(129, -6);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(29, 17);
			this->Exit->TabIndex = 26;
			this->Exit->Click += gcnew System::EventHandler(this, &BuildUp::Exit_Click);
			// 
			// Fade
			// 
			this->Fade->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &BuildUp::Fade_DoWork);
			// 
			// BuildUp_Thread
			// 
			this->BuildUp_Thread->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &BuildUp::BuildUp_Thread_DoWork);
			// 
			// Scan_Thread
			// 
			this->Scan_Thread->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &BuildUp::Scan_Thread_DoWork);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(7, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"SLOT_____";
			// 
			// BuildUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->ClientSize = System::Drawing::Size(163, 119);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Edit_Execute);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Edit_Button);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bVals);
			this->Controls->Add(this->bVars);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BuildUp";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TyE . BU";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &BuildUp::BuildUp_FormClosed);
			this->Load += gcnew System::EventHandler(this, &BuildUp::BuildUp_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BuildUp::BuildUp_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//INITIALIZE_MAIN_FORM
		private: System::Void BuildUp_Load(System::Object^  sender, System::EventArgs^  e) {
					 
					 //SET_TOOLTIP_TEXT
						 toolTip1->SetToolTip(this->Edit_Execute, "Edit Selected Value");
						 toolTip1->SetToolTip(this->textBox1, "Input New Value");
						 toolTip1->SetToolTip(this->Edit_Button, "View Editing Table");
					//INITIALIZE_VAR_LIST
						 bVars->SelectedIndex=0;
						 bVals->SelectedIndex=0;
					//BEGIN_FADE_THREAD
						 Fade->RunWorkerAsync();
					//BEGIN_HANDLER_THREADS
						 Scan_Thread->RunWorkerAsync();
						 BuildUp_Thread->RunWorkerAsync();
				 }

	//DRAGGING
		private: bool dragging;
		private: Point offset;

		private: System::Void bar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

					 this->dragging = true;
					 this->offset = Point(e->X, e->Y);
				}
		private: System::Void bar_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

					 this->dragging = false;
				}
		private: System::Void bar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

					 if (this->dragging){ 
						 Point currentScreenPos = PointToScreen(e->Location);
						 Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
					 }
				}

	//EXIT
		private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {

					 this->Close();
				}
		private: System::Void BuildUp_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

					 lib->buSwitch=FALSE;
				}

	//DRAWING
		void drawBorder(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
					 Pen^ newPen = gcnew Pen( System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
						 static_cast<System::Int32>(static_cast<System::Byte>(43))), 3.00f );
					 int x = 0;
					 int y = 0;
					 int width = this->ClientSize.Width - 1;
					 int height = this->ClientSize.Height - 1;

					 e->Graphics->DrawRectangle( newPen, x, y, width, height );
				 }
		private: System::Void BuildUp_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
					 drawBorder(sender, e);
				}

	//FADING
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

#pragma region BUILD_UP:
	//SCAN_ID
		private: System::Void scanCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	//FREEZE_ID
		private: System::Void freezeCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	//HANDLERS
		private: static int bDelay=500;
		private: System::Void Scan_Thread_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
		private: System::Void BuildUp_Thread_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
	
	//LI_MATCH
		private: System::Void bVars_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
					 bVals->SelectedIndex = bVars->SelectedIndex;
				}
		private: System::Void bVals_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
					bVars->SelectedIndex = bVals->SelectedIndex;
				}

	//CHANGE_ID
		static bool isChange = false;
		private: System::Void Edit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 this->Edit_Button->SelectNextControl(Edit_Button, true, true, true, true);
				 if (isChange != true) {
					 this->Edit_Button->ForeColor = System::Drawing::Color::Gray;
					 this->ClientSize = System::Drawing::Size(163, 154);
					 isChange = true;
				 }
				 else { this->Edit_Button->ForeColor = System::Drawing::Color::White; this->ClientSize = System::Drawing::Size(163, 119); isChange = false; }
			}

	//EDIT_ID
		private: System::Void Edit_Execute_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 this->Edit_Execute->SelectNextControl(Edit_Execute, true, true, true, true);
				 int curIndex = bVars->SelectedIndex;
				 if (this->textBox1->Text != "") {
						 try {
							 int newVal = Convert::ToInt32(this->textBox1->Text);
							 this->bVals->Items[curIndex] = newVal;
							 MessageBox::Show("Item iD Set Successfuly", "TyE . Dialog", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
						 } catch(...) {
							 MessageBox::Show("A Valid iD Must Be Provided", "TyE . Dialog", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						 }
					 }
					 else
						 MessageBox::Show("A Valid iD Must Be Provided", "TyE . Dialog", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				 
		 }
#pragma endregion
};
}