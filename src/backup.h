////GRAB_USE-ABLE_ADDRESSES
//	void doSCAN() {
//
//		try {
//
//			panicAddy = 0x760F30;
//
//Label_Catch:
//			AirSuspendAddy = scan->findPattern( dwBegin, dwEnd, (PBYTE)"\x80\xC0\x00\x00\xA0", "xxxxx" );
//			if (AirSuspendAddy == 0)
//				goto Label_Catch;
//			
//			if (AirSuspendAddy > 0)
//				goto Label_Continue;
//			else
//				goto Label_Catch;
//
//Label_Continue:
//
//			gravityAddy = scan->findPattern( dwBegin, dwEnd, (PBYTE)"\x00\x00\xA0\x40\x0A\xD7\x23\x3D", "xxxxxxxx" );
//			glideAddy = scan->findPattern( dwBegin, dwEnd, (PBYTE)"\xC0\x00\x00\xA0\x40\x0A\xD7\x23", "xxxxxxxx" );
//			walkSpdAddy = gravityAddy + 0x1B;
//			runSpdAddy = gravityAddy + 0x1F;
//			hermitAddy = gravityAddy + 0x2F;
//			JSuicideAddy = scan->findPattern( dwBegin, dwEnd, (PBYTE)"\x40\x00\x00\x20\x40\x33\x33\xB3\x2E", "xxxxxxxx" );
//			S2JumpAddy = scan->findPattern( dwBegin, dwEnd, (PBYTE)"\xCD\xCC\x4C\x40\x00\x00\x20\x40", "xxxxxxxx" );
//			D3DAddy = (DWORD)GetModuleHandleA("d3dx9_35.dll");
//			D3DAddy += 0x1596BB;
//		} catch(...) {
//
//			MessageBoxA(NULL, "An Internal Error Has Occured", "TyE . Dialog", MB_OK | MB_ICONERROR);
//			ExitProcess(0);
//		}
//	}