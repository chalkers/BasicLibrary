#ifndef AnalogPin_h
#define AnalogPin_h

#include "Arduino.h"

class AnalogPin
{
	public:
		AnalogPin(int pin);
		void increase();
		void decrease();
		void setIntensity(int intensity);
	private:
		int _pin;
		int _intensity;
	};
#endif