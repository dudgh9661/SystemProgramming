#include <wiringPi.h>
#include <stdio.h>
#include <softPwm.h>

#define SERVO 

int main() {
	char sel;


	softPwmCreate(SERVO, 0, 200);

	int i = 20;

	while(i--){
		softPwmWrite(SERVO, 16);
//		else if (range == 0) softPwmWrite(SERVO, 5);
		delay(19);
	}
	return 0;
}
