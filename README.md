# s2Analog
Watchy: Simple &amp; Elegant watch face

![Watchy s2Analog watch face](https://raw.githubusercontent.com/StuAngel/s2Analog/main/s2analog.gif)

My first Watchy watch face, I just wanted something that was simple, appealing to me and analogue,

Buttons
  Top left: Toggle Dark / Light mode
  Top right: Bring the Date to front and bold it
  Bottom left: Default menu system
  Bottom right: Show / Hide battery gauge

if you do not require any of the button functionality you will only require 

Watchy_S2Analog.cpp
Watchy_S2Analog.h
Seven_Segment10pt7b.h
S2Analog.ino
s2_numbers.h

Watchy.h (and all other ancillary files) was required to virtualize the handleButtonPress() function on line 34

virtual void handleButtonPress();

apart from that everything else is stock standard from the 7_SEG demo

-= Stu =-
