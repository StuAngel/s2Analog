# s2Analog
Watchy: Simple &amp; Elegant watch face

![Watchy s2Analog watch face](https://raw.githubusercontent.com/StuAngel/s2Analog/main/s2analog.gif)

My first Watchy watch face, I just wanted something that was a fairly simple analogue, but not so simple it was a few dots and dashes,

<strong>Buttons</strong><br/>
  <strong>Top Left:</strong> Toggle Dark / Light mode<br/>
  <strong>Top Right:</strong> Bring the Date to front and bold it<br/>
  <strong>Bottom Left:</strong> Default menu system<br/>
  <strong>Bottom Right:</strong> Show / Hide battery gauge
  

If you do not require any of the button functionality you will only require<br/>
<strong>Watchy_S2Analog.cpp</strong><br/>
<strong>Watchy_S2Analog.h</strong><br/>
<strong>Seven_Segment10pt7b.h</strong><br/>
<strong>S2Analog.ino</strong><br/>
<strong>s2_numbers.h</strong>

Watchy.h (and all other ancillary files) was required to virtualize the handleButtonPress() function on line 34

virtual void handleButtonPress();

Apart from that everything else is stock standard based on the 7_SEG demo

<strong>the face is based on the following image</strong>

![Watchy s2Analog watch face](https://raw.githubusercontent.com/StuAngel/s2Analog/main/watch_raw.gif)

-= Stu =-
