#include <Windows.h>
#include <msclr/marshal_cppstd.h>
#include "Home.h"
#include "Rebirth.h"
#include "Secure.h"
#include "hLib.h"

using namespace TyE_Module;

#pragma managed

//CREATE_LIBRARY_OBJECT
	//Library *lib = new Library(true);
	Library *lib = new Library(false); //INITIALIZATION_BUG_FIX_TEST
//CREATE_PROTECTION_SCANNER
	Secure *PROTECT = new Secure(50);

/*
 *	@structure		Allows use of native method 'FindWindow' using the WINAPI.
 */
	HWND WINAPI FindWindow(
	  _In_opt_  LPCTSTR lpClassName,
	  _In_opt_  LPCTSTR lpWindowName
	);

//INITIALIZATION
void Home::Home_Load(System::Object^  sender, System::EventArgs^  e) {

	//SET_START_LIST
		this->listBox1->SelectedIndex = 1;
	//SET_START_LIST
		this->listBox2->SelectedIndex = 1;

	//TOOLTIP_SET
		toolTip1->SetToolTip(Exit, "Exit TyE Trainer");
		toolTip1->SetToolTip(Minimize, "Minimize TyE Form");
		toolTip1->SetToolTip(Stats, "Enable Statistics Hook");
		toolTip1->SetToolTip(charName, "Returned IGN");
		toolTip1->SetToolTip(Level, "Returned Level");
		toolTip1->SetToolTip(Channel, "Returned Channel");
		toolTip1->SetToolTip(chanCheck, "Change/Freeze Channel");
		toolTip1->SetToolTip(speedCheck, "Enable or Disable Speed Hack");
		toolTip1->SetToolTip(label3, "Current Revision");
		toolTip1->SetToolTip(label15, "Switch Page");
		toolTip1->SetToolTip(label16, "Switch Page");
		toolTip1->SetToolTip(nameHack, "Update Displayable IGN\nNote: This Is Client Sided");
		toolTip1->SetToolTip(viewList, "View Preset Hotkey List");
		toolTip1->SetToolTip(customKey, "Customize Your Hotkeys\nNote: Currently Unavailable");
		toolTip1->SetToolTip(keyCheck, "Enable or Disable Hotkey Use");
	//BEGIN_FADING_THREAD
		Fade->RunWorkerAsync();
	//BEGIN_PROTECTION
		PROTECT->_SCAN();
		Protection->RunWorkerAsync();
	//BEGIN_STATISTICS_THREAD
		Statistics->RunWorkerAsync();
	//BEGIN_HOTKEY_THREAD
		Hotkey->RunWorkerAsync();
}
//SECURITY_SCAN
void Home::Protection_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	
	//CREATE_SCAN_THREAD
		PROTECT->InitScan();
}
//EXCEPTION_SCAN
void Home::oException_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	while (true) {

		if (FindWindow("#32770", "GEM Fighter Client") != NULL)
		{

			ExitProcess(0);
		}
		if (FindWindow("#32770", "Rumble Fighter: rumblefighter.exe - Application Error") != NULL)
		{

			ExitProcess(0);
		}

		Sleep(5000);
	}
}

//OPEN_BUILD_UP
void Home::buForm_Click(System::Object^  sender, System::EventArgs^  e) {

	if(!lib->buSwitch) {
		lib->buSwitch=TRUE;
		this->buFrm=gcnew BuildUp(lib);
		buFrm->Show();
	}
}
//SET_CHANNEL
void Home::setStats() {

	Level->Text = "Level: " + lib->getLevel().ToString();

	switch ( lib->getChannel() ) {
	case _CHANNELS::_AMATEUR:

		Channel->Text = "Channel: Amateur";
		break;
	case _CHANNELS::_SEMIPRO:

		Channel->Text = "Channel: Semi Pro";
		break;
	case _CHANNELS::_PROFESSIONAL:

		Channel->Text = "Channel: Professional";
		break;
	case _CHANNELS::_NEET:

		Channel->Text = "Channel: Custom";
		break;
	}
}

static int ignLen = 0;
//SET_IGN
void Home::doIGN() {

	string nIGN = lib->getIGN();
	String^ IGN = gcnew String(nIGN.c_str());
	charName->Text = IGN;
	myIGN->Text = IGN;
}

//DO_CONTROL_STATISTICS
void Home::Statistics_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	//WAIT_CLIENT_INITIALIZED
	while ( !lib->inGame() ) {

		Sleep(1500);
	}

Label_Initialize:

	//GET_CLIENT_VERSION
		lib->Version();
	//ENABLE_HACK_USE
		lib->Initialize();
		chanCheck->Enabled = true;
		hackList->Enabled = true;
	//BEGIN_EXCEPTION_THREAD
		oException->RunWorkerAsync();
	//ENABLE_HOTKEYS
		keyCheck->Enabled = true;

Label_Statistics:

	//GET_CHAR_IGN
	while ( lib->getIGN() == "" ) {
		Sleep(500);
	}

	//GET_IGN
		doIGN();
		ignLen = charName->Text->Length;
		this->label15->Enabled = true;

	//GET_STATS
		setStats();
		Stats->Enabled = true;

Label_Hook:
	if (Stats->Checked) {
		setStats();
		Sleep(3000);
		goto Label_Hook;
	}
	else {
		Sleep(1500);
		goto Label_Hook;
	}

}

//HOTKEY_THREAD_ACTION

int Home::HKey() {

	return keyCheck->Checked;
}
void Home::Hotkey_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

Label_HKey:

	//CHECKS_ENABLED
	if (HKey() == 0) {
		Sleep(500);
			goto Label_HKey;
	}

	//DISABLE_HOTKEYS
	if (GetAsyncKeyState(VK_F1) &1) {

		keyCheck->Checked = false;
			goto Label_HKey;
	}
	//AIR_SUSPENSION
	if (GetAsyncKeyState(VK_F2) &1) {

		hackList->SelectedIndex = 0;
		bool hackState = !hackList->GetItemChecked(0);
		hackList->SetItemChecked(0, hackState);
			goto Label_HKey;
	}
	//GRAVITY_JUMP
	if (GetAsyncKeyState(VK_F3) &1) {

		hackList->SelectedIndex = 1;
		bool hackState = !hackList->GetItemChecked(1);
		hackList->SetItemChecked(1, hackState);
			goto Label_HKey;
	}
	//PANIC_HACK
	if (GetAsyncKeyState(VK_F5) &1) {

		lib->Panic();
			goto Label_HKey;
	}
	//GLIDE
	if (GetAsyncKeyState(VK_F6) &1) {

		hackList->SelectedIndex = 2;
		bool hackState = !hackList->GetItemChecked(2);
		hackList->SetItemChecked(2, hackState);
			goto Label_HKey;
	}
	//WALK_BOOST_HACK
	if (GetAsyncKeyState(VK_F7) &1) {

		hackList->SelectedIndex = 3;
		bool hackState = !hackList->GetItemChecked(3);
		hackList->SetItemChecked(3, hackState);
			goto Label_HKey;
	}
	//RUN_BOOST_HACK
	if (GetAsyncKeyState(VK_F8) &1) {

		hackList->SelectedIndex = 4;
		bool hackState = !hackList->GetItemChecked(4);
		hackList->SetItemChecked(4, hackState);
			goto Label_HKey;
	}
	//SUICIDE_JUMP
	if (GetAsyncKeyState(VK_F9) &1) {

		hackList->SelectedIndex = 6;
		bool hackState = !hackList->GetItemChecked(6);
		hackList->SetItemChecked(6, hackState);
			goto Label_HKey;
	}
	//D3D_CRUSH
	if (GetAsyncKeyState(VK_F10) &1) {

		hackList->SelectedIndex = 10;
		bool hackState = !hackList->GetItemChecked(10);
		hackList->SetItemChecked(10, hackState);
			goto Label_HKey;
	}
	//DEAD_GRAVITY
	if (GetAsyncKeyState(VK_F11) &1) {

		hackList->SelectedIndex = 11;
		bool hackState = !hackList->GetItemChecked(11);
		hackList->SetItemChecked(11, hackState);
			goto Label_HKey;
	}
	//ROOM_CRASH
	if (GetAsyncKeyState(VK_F12) &1) {

		hackList->SelectedIndex = 8;
		bool hackState = !hackList->GetItemChecked(8);
		hackList->SetItemChecked(8, hackState);
			goto Label_HKey;
	}

	Sleep(500);
	goto Label_HKey;
}
//HOTKEY_SWITCH
void Home::keyCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (keyCheck->Checked)
		MessageBoxA(NULL, "Hotkeys Activated", "TyE . Dialog", MB_ICONASTERISK | MB_OK);
	else
		MessageBoxA(NULL, "Hotkeys Disabled", "TyE . Dialog", MB_ICONHAND | MB_OK);
}

//HIDE_SHOW_RUMBLE_WINDOW
	bool isHide = false;
void Home::phantomWindow() {

	if (!isHide) {

		HWND hWnd = FindWindowA("RumbleFighter", NULL);
		ShowWindow(hWnd, SW_HIDE);
		isHide = true;
		MessageBoxA(NULL, "Rumble Window Successfully Hidden", "TyE . Dialog", MB_OK | MB_ICONINFORMATION);
	}
	else {

		HWND hWnd = FindWindowA("RumbleFighter", NULL);
		ShowWindow(hWnd, SW_SHOW);
		isHide = false;
		MessageBoxA(NULL, "Rumble Window Successfully Restored", "TyE . Dialog", MB_OK | MB_ICONINFORMATION);
	}
}

#pragma region HACKS_CHEATS
//CHANNEL_HACK
void Home::CHANNEL_Tick(System::Object^  sender, System::EventArgs^  e) {

	lib->channelHack(comboBox1->SelectedIndex+1);

}
void Home::chanCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	bool isActive = chanCheck->Checked;
	this->CHANNEL_->Enabled = isActive;

}
//SPEED_CHECK
void Home::speedCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	switch (speedCheck->Checked) {
		//ENABLE
	case true:
		try {
			int uSpeed = int::Parse(textBox1->Text);
			lib->doSPEED(true, uSpeed);
		} catch (...) { MessageBox::Show("ERROR: 100100,\nCANNOT CONVERT", "TyE . Dialog"); speedCheck->Checked = false; }
		break;
		//DISABLE
	case false:
		textBox1->Text = "1";
		lib->doSPEED(false);
		break;
	}
}
//LIB_HACKS_CHECK_CONTROL
void Home::hackList_ItemCheck(System::Object^  sender, System::Windows::Forms::ItemCheckEventArgs^  e) {

	switch ( hackList->SelectedIndex ) {
		//AIR_SUSPEND
	case 0:

		if ( hackList->GetItemChecked(2) )
			hackList->SetItemChecked(2, false);
		lib->AirSuspend();
		break;
		//GRAVITY_JUMP
	case 1:

		if ( hackList->GetItemChecked(11) )
			hackList->SetItemChecked(11, false);
		lib->GravityJump();
		break;
		//GLIDE
	case 2:

		if ( hackList->GetItemChecked(0) )
			hackList->SetItemChecked(0, false);
		lib->Glide();
		break;
		//WALKING_SPEED_HACK
	case 3:

		lib->WalkSpeed();
		break;
		//RUNNING_SPEED_HACK
	case 4:

		lib->RunSpeed();
		break;
		//HERMIT_JUMP
	case 5:

		lib->HermitJump();
		break;
		//SUICIDE_JUMP
	case 6:

		lib->JSuicide();
		break;
		//HYPER_JUMP
	case 7:

		lib->HyperJump();
		break;
		//ROOM_CRASH
	case 8:

		lib->Crash();
		this->hackList->Enabled = false;
		break;
		//PANIC_HACK
	case 9:

		lib->Panic();
		break;
		//D3D_CRUSH
	case 10:

		lib->D3DCrush();
		break;
		//DEAD_GRAVITY
	case 11:

		if ( hackList->GetItemChecked(1) )
			hackList->SetItemChecked(1, false);
		lib->DeadGravity();
		break;
	//PING_VIEW
	case 12:

		lib->doPING();
		break;
	}

}
//NAME_HACK
void Home::nameChange() {

	String^ newIGN = myIGN->Text;

	if (newIGN != "") {

		std::string nativeIGN = msclr::interop::marshal_as< std::string >( newIGN );

		lib->setIGN(nativeIGN);
		doIGN();

		MessageBox::Show("In Game Name Successfully Updated", "TyE . Dialog");
	}
	else { MessageBox::Show("Please Enter a Suitable IGN", "TyE . Dialog"); }
}
void Home::nameHack_Click(System::Object^  sender, System::EventArgs^  e) {

	int tempLen = myIGN->Text->Length;
	if ( tempLen != ignLen ) {

		if ( (MessageBoxA(NULL, "Length Mismatch, Your Chosen Name Is Either Too Short or Too Long\nWould You Like To Continue With This Action?", "TyE . Dialog", MB_ICONQUESTION | MB_YESNO)) != IDYES ) {
			
			MessageBoxA(NULL, "Event Task Disposed", "TyE . Dialog", MB_OK);
		}
		else {

			nameChange();
		}
	}
	else {

		nameChange();
	}
}

#pragma endregion