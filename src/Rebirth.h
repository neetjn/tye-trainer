#include <Windows.h>
#pragma once

namespace TyE_Module {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Rebirth
	/// </summary>
	public ref class Rebirth : public System::Windows::Forms::Form
	{
	public:
		Rebirth(void)
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
		~Rebirth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  Exit;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  Minimize;
	private: System::Windows::Forms::Button^  helpDiag;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::BackgroundWorker^  Protection;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Rebirth::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Minimize = (gcnew System::Windows::Forms::Panel());
			this->helpDiag = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Protection = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::GhostWhite;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 18);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::panel1_MouseUp);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Brown;
			this->Exit->Location = System::Drawing::Point(222, -6);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(29, 17);
			this->Exit->TabIndex = 6;
			this->Exit->Click += gcnew System::EventHandler(this, &Rebirth::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TyE . Rebirth";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::label1_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::label1_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Rebirth::label1_MouseUp);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)), 
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel2->Controls->Add(this->Minimize);
			this->panel2->Location = System::Drawing::Point(0, 103);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(256, 17);
			this->panel2->TabIndex = 4;
			// 
			// Minimize
			// 
			this->Minimize->BackColor = System::Drawing::Color::SlateGray;
			this->Minimize->Location = System::Drawing::Point(7, 6);
			this->Minimize->Name = L"Minimize";
			this->Minimize->Size = System::Drawing::Size(29, 17);
			this->Minimize->TabIndex = 7;
			this->Minimize->Click += gcnew System::EventHandler(this, &Rebirth::Minimize_Click);
			// 
			// helpDiag
			// 
			this->helpDiag->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->helpDiag->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->helpDiag->ForeColor = System::Drawing::Color::GhostWhite;
			this->helpDiag->Location = System::Drawing::Point(6, 24);
			this->helpDiag->Name = L"helpDiag";
			this->helpDiag->Size = System::Drawing::Size(120, 23);
			this->helpDiag->TabIndex = 5;
			this->helpDiag->Text = L"Setup";
			this->helpDiag->UseVisualStyleBackColor = false;
			this->helpDiag->Click += gcnew System::EventHandler(this, &Rebirth::helpDiag_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Green;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(4, 54);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(122, 41);
			this->panel3->TabIndex = 6;
			this->panel3->Click += gcnew System::EventHandler(this, &Rebirth::panel3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::GhostWhite;
			this->label2->Location = System::Drawing::Point(18, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Initialize Rebirth";
			this->label2->Click += gcnew System::EventHandler(this, &Rebirth::label2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel4->Enabled = false;
			this->panel4->Location = System::Drawing::Point(130, 54);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(122, 41);
			this->panel4->TabIndex = 7;
			this->panel4->Click += gcnew System::EventHandler(this, &Rebirth::panel4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::GhostWhite;
			this->label3->Location = System::Drawing::Point(41, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Restart";
			this->label3->Click += gcnew System::EventHandler(this, &Rebirth::label3_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Tip";
			// 
			// Protection
			// 
			this->Protection->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Rebirth::Protection_DoWork);
			// 
			// Rebirth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(256, 121);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->helpDiag);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Rebirth";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"TyE . Rebirth";
			this->TopMost = true;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Rebirth::Rebirth_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Rebirth::Rebirth_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Rebirth::Rebirth_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//INITIALIZE
	private: System::Void Rebirth_Load(System::Object^  sender, System::EventArgs^  e);
	//EXIT_CHECK
	private: System::Void Rebirth_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				 try { ExitProcess(0); } catch(...) {  }
			}
	//SECURE_SCAN
	private: System::Void Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
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
	private: System::Void Rebirth_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

				 drawBorder( sender, e );
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

	//HELP_INFO_DIALOG
	private: System::Void helpDiag_Click(System::Object^  sender, System::EventArgs^  e) {

				 MessageBoxA(NULL, "Performing a Rebirth Has Never Been Easier!\n 1) Purchase a Normal Chest Key\n 2) Click on 'Initialize Rebirth'\n 3) Navigate To Your Closet (on RumbleFighter)\n 4) Click On Your Normal Key\n 5) Choose Your Rebirth & Restart Your Client!", "TyE . Dialog", MB_OK | MB_ICONINFORMATION);
				 SelectNextControl(helpDiag, true, true, true, true);
			 }

	//REBIRTH_LOAD_INITIALIZE
	private: System::Void panel3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e);

	//RESTART_ACTION
	private: System::Void panel4_Click(System::Object^  sender, System::EventArgs^  e) {

				 ExitProcess(0);
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {

				 ExitProcess(0);
			 }
};
}