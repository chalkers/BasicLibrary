#include "Arduino.h"
#include "DigitalPin.h"

DigitalPin::DigitalPin(int pin, bool off_is_on)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
    _off_is_on = off_is_on;
	off();
}

void DigitalPin::on() 
{
    if (_off_is_on) {
        write(LOW);
    } else {
        write(HIGH);
    }
}

void DigitalPin::off()
{
    if (_off_is_on) {
        write(HIGH);
    } else {
        write(LOW);
    }
}

void DigitalPin::write(boolean onOff)
{
	digitalWrite(_pin, onOff);
}
