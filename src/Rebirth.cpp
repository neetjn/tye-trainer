#include <Windows.h>
#include <boost/thread/thread.hpp>
#include "Rebirth.h"
#include "Secure.h"
#include "hLib.h"

using namespace TyE_Module;
using namespace boost;

//CREATE_LIBRARY_OBJECT
	Library *lib = new Library(false);
//CREATE_PROTECTION_SCANNER
	Secure *PROTECT = new Secure(50);

//INTIALIZE
void Rebirth::Rebirth_Load(System::Object^  sender, System::EventArgs^  e) {

	toolTip1->SetToolTip(Exit, "Exit Rebirth Manager");
	toolTip1->SetToolTip(Minimize, "Minimize Rebirth Form");
	toolTip1->SetToolTip(panel3, "Initialize Rebirth");
	toolTip1->SetToolTip(label2, "Initialize Rebirth");
	toolTip1->SetToolTip(panel4, "Reboot Client");
	toolTip1->SetToolTip(label3, "Reboot Client");

	//BEGIN_SECURITY_SCAN
		Protection->RunWorkerAsync();
}
//SECURITY_SCAN
void Rebirth::Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	
	//CREATE_SCAN_THREAD
		PROTECT->InitScan();
}

//DO_LOAD_INITIALIZE_REBIRTH
void _rebirth() {

	lib->Rebirth();
}
void Rebirth::panel3_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBoxA( NULL, "This Process May Take Up To 5 Minutes", "TyE . Dialog", MB_OK | MB_ICONWARNING );
	panel3->Enabled = false;
	thread rebirth_0( &_rebirth );
	rebirth_0.join();
label_completed:
	if (lib->rbSwitch == 0) {

		Sleep(500);
		goto label_completed;
	}
	panel4->Enabled = true;
	MessageBoxA( NULL, "Initialization Complete!", "TyE . Dialog", MB_OK | MB_ICONINFORMATION );
}
void Rebirth::label2_Click(System::Object^  sender, System::EventArgs^  e) {

	MessageBoxA( NULL, "This Process May Take Up To 5 Minutes", "TyE . Dialog", MB_OK | MB_ICONWARNING );
	panel3->Enabled = false;
	thread rebirth_0( &_rebirth );
	rebirth_0.join();
	panel4->Enabled = true;
	MessageBoxA( NULL, "Initialization Complete!", "TyE . Dialog", MB_OK | MB_ICONINFORMATION );
}