#include <Windows.h>

extern float Acceleration;
void SpeedHack(bool Enabled);
int ExitSpeedHack();

class Speed {
public:
	//CONSTRUCTOR
	Speed() {
		//INITIALIZE

	}
public:
	VOID setSPEED(INT speed) {

		Acceleration = speed;
	}
	VOID doSPEED() {

		SpeedHack(true);
	}
};