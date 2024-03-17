# SWS-control-module
Code to control and read a LO-based heterodyne spin-wave sensor. Part of my final degree project for a BSc. in (applied) physics @ Complutense University of Madrid, Material Physics Dept. 



The code is meant to run on a TEENSY 4.0 controller board (thus note that [Teensyduino](https://www.pjrc.com/teensy/teensyduino.html) is needed to run the code).

The local oscillator is set on an ADF4351 eval board (I used [olgierd](https://github.com/olgierd/ADF4351)'s code to synthesise the frequencies using SPI), and two 16-pin LCDs have been used to display the data.


