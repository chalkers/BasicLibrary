#include "Arduino.h"
#include "DigitalPin.h"

DigitalPin::DigitalPin(int pin) 
{
	pinMode(pin, OUTPUT);
	_pin = pin;
	off();
}

void DigitalPin::on() 
{
	write(HIGH);
}

void DigitalPin::off()
{
	write(LOW);
}

void DigitalPin::write(boolean onOff)
{
	digitalWrite(_pin, onOff);
}
