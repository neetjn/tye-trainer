#include <Windows.h>

#pragma once

namespace TyE_Module {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Agreement : public System::Windows::Forms::Form
	{
	public:
		Agreement(void)
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
		~Agreement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^  Protection;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  disagree;
	private: System::Windows::Forms::Button^  agree;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::CheckBox^  readTerms;

	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Timer^  doTime;



	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Agreement::typeid));
			this->Protection = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->disagree = (gcnew System::Windows::Forms::Button());
			this->agree = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->readTerms = (gcnew System::Windows::Forms::CheckBox());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->doTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// Protection
			// 
			this->Protection->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Agreement::Protection_DoWork);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(272, 18);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::panel1_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TyE . Agreement";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::label1_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::label1_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Agreement::label1_MouseUp);
			// 
			// disagree
			// 
			this->disagree->BackColor = System::Drawing::Color::Black;
			this->disagree->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->disagree->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->disagree->Location = System::Drawing::Point(10, 116);
			this->disagree->Name = L"disagree";
			this->disagree->Size = System::Drawing::Size(120, 25);
			this->disagree->TabIndex = 1;
			this->disagree->Text = L"Disagree";
			this->disagree->UseVisualStyleBackColor = false;
			this->disagree->Click += gcnew System::EventHandler(this, &Agreement::disagree_Click);
			// 
			// agree
			// 
			this->agree->BackColor = System::Drawing::Color::Black;
			this->agree->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->agree->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agree->Location = System::Drawing::Point(142, 116);
			this->agree->Name = L"agree";
			this->agree->Size = System::Drawing::Size(120, 25);
			this->agree->TabIndex = 2;
			this->agree->Text = L"Agree";
			this->agree->UseVisualStyleBackColor = false;
			this->agree->Click += gcnew System::EventHandler(this, &Agreement::agree_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 100);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(239, 10);
			this->progressBar1->TabIndex = 4;
			// 
			// readTerms
			// 
			this->readTerms->AutoSize = true;
			this->readTerms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->readTerms->Enabled = false;
			this->readTerms->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readTerms->ForeColor = System::Drawing::Color::Yellow;
			this->readTerms->Location = System::Drawing::Point(164, 76);
			this->readTerms->Name = L"readTerms";
			this->readTerms->Size = System::Drawing::Size(96, 19);
			this->readTerms->TabIndex = 5;
			this->readTerms->Text = L"Read and Agree";
			this->readTerms->UseVisualStyleBackColor = false;
			// 
			// Logo
			// 
			this->Logo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(10, 24);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(252, 50);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 7;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &Agreement::Logo_Click);
			// 
			// doTime
			// 
			this->doTime->Interval = 1000;
			this->doTime->Tick += gcnew System::EventHandler(this, &Agreement::doTime_Tick);
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTip1->ToolTipTitle = L"Tip";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->LinkColor = System::Drawing::SystemColors::MenuHighlight;
			this->linkLabel3->Location = System::Drawing::Point(15, 77);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(142, 15);
			this->linkLabel3->TabIndex = 2;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"NEET.Group Terms of Service";
			this->linkLabel3->VisitedLinkColor = System::Drawing::Color::DeepPink;
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Agreement::linkLabel3_LinkClicked);
			// 
			// Agreement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)), 
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->ClientSize = System::Drawing::Size(272, 149);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->readTerms);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->agree);
			this->Controls->Add(this->disagree);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::GhostWhite;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Agreement";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TyE . Agreement";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Agreement::Agreement_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Agreement::Agreement_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Agreement::Agreement_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//INITIALIZATION
	private: System::Void Agreement_Load(System::Object^  sender, System::EventArgs^  e);
	//EXIT_CHECK
	private: System::Void Agreement_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 try { ExitProcess(0); } catch(...) {  }
			}
	//SECURITY_SCAN
	private: System::Void Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e);
	//DRAW_BORDER
	void drawBorder(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Pen^ newPen = gcnew Pen( System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(153)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(255))), 3.00f );
				 int x = 0;
				 int y = 0;
				 int width = this->ClientSize.Width - 1;
				 int height = this->ClientSize.Height - 1;

				 e->Graphics->DrawRectangle( newPen, x, y, width, height );
			}
	//PAINT_GRAPHICS
	private: System::Void Agreement_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
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
	//AGREEMENT_TIME_COUNT_READ
	private: System::Void doTime_Tick(System::Object^  sender, System::EventArgs^  e);
	//LOGO_ACTION
	private: System::Void Logo_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Diagnostics::Process::Start("http://neetgroup.net/");
			}
	//AGREE-ABLE_TERMS
	private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 System::Diagnostics::Process::Start("http://forum.neetgroup.net/index.php?app=forums&module=extras&section=boardrules");
			}
	//DISAGREE
	private: System::Void disagree_Click(System::Object^  sender, System::EventArgs^  e);
	//AGREE
	private: System::Void agree_Click(System::Object^  sender, System::EventArgs^  e);

};
}