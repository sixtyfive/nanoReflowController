Reflow Oven Controller
======================

**News**

* Forked from 0xPIT & uploaded the code after a lot of restructuration
* Board design has also changed

**Arduino-based reflow oven controller with:**
* [PID] loop control
* [Wave Packet] control for AC output
* graphic TFT LC-Display, drawing the temperature curves
  * using a 5v compatible 1.8" of 1.44" TFT SPI display with ST7735 controller
* solely controlled using a cheap rotary encoder and its single button
* uses a MAX6675 module as interface to a K type thermocouple
* stores up to 30 temperature profiles in EEPROM
* configurable PID-parameters
* simple, small hardware to drive loads up to 600V and up to 2A without heatsink
* powered throuhg one of three options: 12v RAW pin, 5v pin or 5v USB
* optional 12v fan control (not yet implemented in the code)
* *Please Note*: Requires Arduino IDE 1.5.x or newer

(c) 2017 David Sanz Kirbis

(c) 2014 Karl Pitrich <karl@pitrich.com>

In part based on a project of (c) 2013 Ed Simmons <ed@estechnical.co.uk>

**Warning: This project operates with possibly lethal mains voltage. If you are unsure what to do, don't do it and get help from an experienced tinkerer with professional training.**

Pictures!
=========

**Minimal build**

![BoardPic1] | ![BoardPic2]
------------ | -------------

**Completely populated**

![Complete1] | ![Complete2] | ![Complete3]
------------ | ------------ | -------------

**Enclosed and mounted on halogen floodlight**

(more info: [Halogen Floodlight SMT reflow])

![Floodlight]

Obtaining the source code
=========================

Get the code using `git`.

	git clone https://github.com/dasaki/nanoReflowController.git

or [download a Snapshot].

The following dependencies will have to be installed:

* PID >= 1.2.0 (available through the Arduino IDE or from https://github.com/br3ttb/Arduino-PID-Library/)
* PDQ_GFX_Libs (clone to your Arduino libraries folder from https://github.com/XarkLabs/PDQ_GFX_Libs/, then, also there, `ln -s PDQ_GFX_Libs/PDQ_GFX/ .; ln -s PDQ_GFX_Libs/PDQ_ST7735/ .`
* 0xPIT's menu and encoder libraries (clone like above from https://github.com/0xPIT/Menu and https://github.com/0xPIT/encoder, respectively)
* TimerOne >= 1.1.0 (available through the Arduino IDE or from https://code.google.com/archive/p/arduino-timerone/)
* MAX6675 (available through the Arduino IDE or from https://github.com/adafruit/MAX6675-library)

Installation
============

Of course, you need to have the Arduino IDE installed. I've worked with version 1.5.x only and I will not support older versions. Get it from the [Arduino Download] page or upgrade you current Arduino setup.

There as several dependencies you need to install. 

If you are unfamiliar with Arduino Libraries, please read [the library guide].
Basically, each library needs to be liked or copied into your Arduino library folder.

Things to note
==============

* The PID Loop must be tuned individually for each oven. It will *not* work out of the box. 
* [PID Autotune] is not very useful, as it seems to be able to tune only to keep a specific temperature value, which is not what we do in a reflow oven. Also, at least my oven seems to be very non-linear when heating up.
* Use proper earth ground connection for your ovens chassis.

Licensing
=========
```
The MIT License (MIT)

Copyright (c) 2017 David Sanz Kirbis
All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
```

[PID Autotune]:https://github.com/br3ttb/Arduino-PID-AutoTune-Library
[Submodule Cheat Sheet]:http://blog.jacius.info/git-submodule-cheat-sheet/
[ESTechnical]:http://www.estechnical.co.uk
[Arduino Download]:http://arduino.cc/en/Main/Software
[folder hardware]:https://github.com/dasaki/nanoReflowController/tree/master/hardware
[download a Snapshot]:https://github.com/dasaki/nanoReflowController/archive/master.zip
[the library guide]:http://arduino.cc/en/Guide/Libraries
[PID]:http://en.wikipedia.org/wiki/PID_controller
[Wave Packet]:http://de.wikipedia.org/wiki/Schwingungspaketsteuerung
[Phase Fired]:http://en.wikipedia.org/wiki/Phase-fired_controllers 
[Adafruit 1.8" TFT]:http://www.adafruit.com/products/358
[MAX31855]:http://www.maximintegrated.com/en/products/analog/sensors-and-sensor-interface/MAX31855.html
[Fischer SK409 50,8]:http://www.pollin.de/shop/dt/NzE5OTY1OTk-
[Sharp S202S01]:http://sharp-world.com/products/device/lineup/data/pdf/datasheet/s102s01_e.pdf
[Zero crossing]:http://en.wikipedia.org/wiki/Zero_crossing
[TimerOne]:http://playground.arduino.cc/Code/Timer1
[TimerThree]:http://playground.arduino.cc/Code/Timer1
[Adafruit_ST7735]:https://github.com/adafruit/Adafruit-ST7735-Library
[Adafruit_GFX]:https://github.com/adafruit/Adafruit-GFX-Library
[Adafruit_ST7735-pit]:https://github.com/0xPIT/Adafruit-ST7735-Library
[Menu]:https://github.com/0xPIT/menu
[ClickEncoder]:https://github.com/0xPIT/encoder
[Arduino Nano]:https://store.arduino.cc/arduino-nano

[CycleWithOverflow]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/CycleWithOverflow.jpg
[FanSpeedEdit]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/FanSpeedEdit.jpg
[MenuDefault]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/Menu.jpg
[MenuLoadProfile]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/MenuLoadProfile.jpg
[MenuEditProfile]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/MenuEditProfile.jpg
[PIDValuesEdit]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/PIDValuesEdit.jpg
[ProfileSettings]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/ProfileSettings.jpg
[PIDValues]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/PIDValues.jpg
[ProfileSettingsEdit]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/ProfileSettingsEdit.jpg

[Warning]:http://www.proshieldsafetysigns.co.uk/signs/59793_signs.jpg
[ImgPCB]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/v0.2.brd.preview.png
[ImgSCH]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/v0.2.sch.preview.png

[ImgMissingTrace]:https://raw.githubusercontent.com/0xPIT/reflowOvenController/master/images/MissingTrace.jpg
[BoardPic1]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_Board_picture_top.jpg
[BoardPic2]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_Board_picture_bottom.jpg
[Complete1]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_Board_3d_01.png
[Complete2]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_Board_3d_02.png
[Complete3]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_Board_3d_03.png
[Floodlight]:https://raw.githubusercontent.com/dasaki/nanoReflowController/master/images/v1_0_floodlight_reflow.jpg
[Halogen Floodlight SMT reflow]:http://therandomlab.blogspot.com.es/2017/07/halogen-floodlight-smt-reflow.html
