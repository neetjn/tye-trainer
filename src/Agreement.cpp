#include <Windows.h>
#include "Agreement.h"
#include "Home.h"
#include "Secure.h"

using namespace TyE_Module;

void GUIWork() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Agreement);
	Application::Exit();
}

Secure *PROTECT = new Secure(10);
void Main(void) {

	//PERFORM SCAN
		PROTECT->_SCAN();
	//CREATE_INTERFACE
		GUIWork();
}

//AGREEMENT_TIMER
static int curTime = 0;

//INITIALIZATION
void Agreement::Agreement_Load(System::Object^  sender, System::EventArgs^  e) {
	
	//BEGIN_TIMER
		this->doTime->Enabled = true;

	//TOOLTIP_SET
		toolTip1->SetToolTip(linkLabel3, "Click To Navigate");
		toolTip1->SetToolTip(progressBar1, "Agreement Timer");
		toolTip1->SetToolTip(readTerms, "Agree To Terms Listed/Provided");

	//BEGIN_PROTECTION
		Protection->RunWorkerAsync();

}
//SECURITY_SCAN
void Agreement::Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	//CREATE_SCAN_THREAD
		PROTECT->InitScan();
}
//AGREEMENT_TIME_COUNT_READ
void Agreement::doTime_Tick(System::Object^  sender, System::EventArgs^  e) {

	//DISABLE_MAX_TIME
	switch (curTime) {
	case 10:
		doTime->Enabled = false;
		readTerms->Enabled = true;
		break;
	}

	//INCREMENT_TIME
	if (curTime != 10) {
		curTime++;
		progressBar1->Value = (curTime * 10);
	}

	return;

}
//DISAGREE
void Agreement::disagree_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBoxA(NULL, "Terms Must Be Agreed To Before Proceeding", "TyE . Dialog", MB_ICONERROR | MB_OK);
	ExitProcess(0);
}
//AGREE
void Agreement::agree_Click(System::Object^  sender, System::EventArgs^  e) {

	//CHECK_IF_AGREED
	if (!readTerms->Checked) {
		MessageBoxA(NULL, "Terms Must Be Agreed To Before Proceeding", "TyE . Dialog", MB_ICONWARNING | MB_OK);
		return;
	}

	//SHOW_HOME
		this->Hide();
		Home ^hForm = gcnew Home();
		hForm->Show();
}