#BasicLibrary for Arduino

##Introduction

This is a basic object orientated library for Arduino that consists of the following classes:

 	* `DigitalPin`
	* `AnalogPin`

###DigitalPin Example

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

##Licence

Copyright 2013 Andrew Chalkley
http://forefront.io

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