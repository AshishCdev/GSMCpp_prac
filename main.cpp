/*
 * main.cpp
 *
 *  Created on: 25-May-2017
 *      Author: root
 */
#include <avr/io.h>
#include <util/delay.h>

int main(int argc, char **argv) {
	DDRD = 0Xff;
	while(1){
		PORTD = 0xFF;
		_delay_ms(1000);
		PORTD = 0x00;
		_delay_ms(1000);
	}
	return 0;
}




