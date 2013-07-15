#include "Arduino.h"
#include "AnalogPin.h"

AnalogPin::AnalogPin(int pin) 
{
	pinMode(pin, OUTPUT);
	_pin = pin;
	_intensity = 0;
}

void AnalogPin::increase() 
{
	_intensity = _intensity + 51;
	setIntensity(_intensity);
}

void AnalogPin::decrease()
{
	_intensity = _intensity - 51;
	setIntensity(_intensity);
}

void AnalogPin::setIntensity(int intensity)
{
	_intensity = intensity;
	if(_intensity > 255) {
		_intensity = 255;
	} else if(intensity < 0) {
		_intensity = 0;
	}
	analogWrite(_pin, _intensity);
}
