#ifndef DigitalPin_h
#define DigitalPin_h

#include "Arduino.h"

class DigitalPin
{
	public:
		DigitalPin(int pin);
		void on();
		void off();
		void write(boolean onOff);
	private:
		int _pin;
	};
#endif