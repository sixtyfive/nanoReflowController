Reflow Oven Controller
=====================

* Forked from Dasaki, who forked from 0xPIT, who had originally forked from estechnical.
* My version has seen more code cleanup. Among other things, unfinished features were removed.
* What was intended as controlling a servo for opening the lid and a fan for helping the cooldown is now an extra ATTiny opening the lid and starting the fan.
* Unlike the original authors, I didn't create a custom PCB but have built everything on perfboard.

These features are still in the firmware, mostly unchanged from Dasaki's version:

* PID loop control
* Wave Packet control for the halogen bulb
* TFT display drawing the temperature curves (using a 5V-compatible 1.8" or 1.44" SPI based on the ST7735 controller)
* User interface controlled using a cheap rotary encoder and its button
* A MAX6675 module as interface to a K-type thermocouple
* Stores up to 30 temperature profiles in EEPROM
* Configurable PID parameters

(C) 2020 J. R. Schmid

(C) 2017 David Sanz Kirbis

(C) 2014 Karl Pitrich

(C) 2013 Ed Simmons

**Warning: This project operates with possibly lethal mains voltage. If you don't feel comfortable or don't have knowledge working with mains voltage, STOP right here and find someone to help you!**

For more information, follow the forks backwards.
