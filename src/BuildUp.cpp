#include <Windows.h>
#include "BuildUp.h"

using namespace TyE_Module;
using namespace std;

//SCAN_ID
void BuildUp::scanCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	switch(scanCheck->Checked) {

	case false:

		this->freezeCheck->Enabled = true;
		break;
	case true:

		this->freezeCheck->Enabled = false;
		break;
	}
}
//FREEZE_ID
void BuildUp::freezeCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	switch(freezeCheck->Checked) {

	case false:

		BuildUp::bDelay=500;
		this->scanCheck->Enabled = true;
		break;
	case true:

		if((MessageBoxA(NULL, "Will You Be Entering Boss Mode?", "TyE . Dialog", MB_YESNO | MB_ICONQUESTION)) == IDYES)
			BuildUp::bDelay=25;

		this->scanCheck->Enabled = false;
		break;
	}
}

//HANDLERS
void BuildUp::Scan_Thread_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	while(true) {

		if (scanCheck->Checked) {

			this->bVals->Items[0] = lib->getGear(SCROLL);
			this->bVals->Items[1] = lib->getGear(EXO_A);
			this->bVals->Items[2] = lib->getGear(EXO_B);
		}
		Sleep(150);
	}
}
void BuildUp::BuildUp_Thread_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	while(true) {

		if (freezeCheck->Checked) {

			lib->setGear(SCROLL, Convert::ToInt32(this->bVals->Items[0]));
			lib->setGear(SCROLL_2, Convert::ToInt32(this->bVals->Items[0]));
			lib->setGear(EXO_A, Convert::ToInt32(this->bVals->Items[1]));
			lib->setGear(EXO_A_2, Convert::ToInt32(this->bVals->Items[1]));
			lib->setGear(EXO_B, Convert::ToInt32(this->bVals->Items[2]));
			lib->setGear(EXO_B_2, Convert::ToInt32(this->bVals->Items[2]));
		}

		Sleep(BuildUp::bDelay);
	}
}