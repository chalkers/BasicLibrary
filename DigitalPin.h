#ifndef DigitalPin_h
#define DigitalPin_h

#include "Arduino.h"

class DigitalPin
{
	public:
		DigitalPin(int pin, bool off_is_on = false);
		void on();
		void off();
		void write(boolean onOff);
	private:
		int _pin;
        bool _off_is_on;
	};
#endif