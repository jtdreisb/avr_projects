/* 
 * Multiplexi defensive bot
 */


#include "dbot.h"

int main() {

	cli();
	init();
	moveRight();
	delayMs(1000); /// aproximately 1 second?
	servoInit();   // unfold

	// move(); right for some time
	
	//forever move left then right
	for (;;) {
		delayMs(1000);
		moveLeft();
		delayMs(1000);
		stop();
		moveRight();
	}

	return 0;
}
