#BasicLibrary for Arduino

##Introduction

This is a basic object oriented library for Arduino that consists of the following classes:

* `DigitalPin`
* `AnalogPin`

Both `AnalogPin` and `DigitalPin` instances start in the off state. 

###DigitalPin 

####Default Behaviour

`DigitalPin` allows you to create a digital `OUTPUT` pin on a given pin number. It has three methods `on()`, `off()` and `write()`.

Call `on()` so set the pin to `HIGH` and `off()` to set it to `LOW`.

The `write()` method takes a value of `true` (`1`, `HIGH`) or `false` (`0`, `LOW`) to manually switch it on or off.

####Example

    #include <DigitalPin.h>
    
    DigitalPin forward(13);
    DigitalPin backward(12);
    
    void setup(){
    }
    
    void loop() {
     backward.off();
     forward.on();
     delay(1000); 
     forward.off();
     backward.on();
     delay(1000);
    }
    
####Alternate Behaviour

Normally calling `on()` will set the pin to `HIGH` and `off()` will set it to `LOW`. However, you may want to define `on()` as `LOW` and `off()` as `HIGH`. You can do this by passing `true` to the constructor like so:

    DigitalPin forward(13, true);

If you choose to manually send `HIGH` or `LOW` to the `write()` method no intelligent switching will occur `HIGH` will still be __off__ and `LOW` will still be __on__.

###AnalogPin 

`AnalogPin` allows you to create a PWM `OUTPUT` pin on a given pin number. It has three methods `increase()`, `deacrese()` and `setIntensity()`. The `setIntensity()` method takes a value between `0` and `255`.

Call the `increase()` and `decrease()` methods to increase or decrease the `_intensity`  values of `51`. This means that there are 6 unique values, `0`, `51`, `102`, `153`, `204` and `255`. Calling `increase()` on the pin when the `_intensity` is `255` will not increase it further. Calling `decrease()` on the pin when the `_intensity` is `0` will not decrease it further.

The `setIntensity()` method takes one parameter, an `int` to manually set the `_intensity`. If the value is greater than `255` it will be set to `255`, anything less than `0` it will be set to `0`.

####Example

The following example will darken an LED on pin `12` until it switches off completely. On pin `13` an LED that is off initially and will get brighter until it gets to the value of `255`.

    #include <AnalogPin.h>
    
    DigitalPin brighten(13);
    DigitalPin darken(12);
    
    void setup(){
		darken.setIntensity(255);
    }
    
    void loop() {
     brighten.increase();
     darken.deacrease();
     delay(250);
    }


##Licence

Copyright 2013-2014 [Andrew Chalkley](http://twitter.com/chalkers) http://forefront.io

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
