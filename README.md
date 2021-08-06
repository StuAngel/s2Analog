# s2Analog
Watchy: Simple &amp; Elegant watch face

![Watchy s2Analog watch face](https://raw.githubusercontent.com/StuAngel/s2Analog/main/s2analog.gif)

My first Watchy watch face, I just wanted something that was a fairly simple analogue, but not so simple it was a few dots and dashes,

<strong>Buttons</strong><br/>
  Top left: Toggle Dark / Light mode<br/>
  Top right: Bring the Date to front and bold it<br/>
  Bottom left: Default menu system<br/>
  Bottom right: Show / Hide battery gauge
  

if you do not require any of the button functionality you will only require<br/>
Watchy_S2Analog.cpp<br/>Watchy_S2Analog.h<br/>Seven_Segment10pt7b.h<br/>S2Analog.ino<br/>s2_numbers.h

Watchy.h (and all other ancillary files) was required to virtualize the handleButtonPress() function on line 34

virtual void handleButtonPress();

apart from that everything else is stock standard based on the 7_SEG demo

-= Stu =-
