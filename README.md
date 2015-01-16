# BLE-NRF51822-LBS-ANDROID
by yamukha@ukr.net

Project for nRF51822 custom board communicating over Bluetooth Smart (BLE 4.0) with Android. 
It combines several different projects into one bundle.

Project task: 
- provide low cost initial development toolchain for of Bluetoooth Low Energy system 

Project base:
Software
- Nordic SDK and Software Device 5.1.0 (old one while code is published on github).
- pure gcc for nRF51822 (for Linux platform)
- Android example from book "Getting Started with Bluetooth Low Energy"
- LED&button service example (lbs) from nAN36 of Nordic

used code with modification from:

https://github.com/finnurtorfa/nrf51

https://github.com/microbuilder/IntroToBLE/tree/master/TestApplicationAccelerator

https://github.com/hlnd/nrf51-pure-gcc-setup

https://github.com/NordicSemiconductor/nrf51-ble-app-lbs


Hardware:
- noname nRF51822 board from Aliexpress (with redefined pin for LED and button): - $15
- JLink from Aliexpress: - $13 
- Android device with BLE support (tested on LG L90)
- Linux PC (i.e. Ubuntu)

=======================

Short guide.

There are two parts:

- embedded part:  nrfRF51822 custom board, can be any board with properly defined input-output lines
- Android based client

1) embedded crosscompiling and flashing to nRF51822

in Linux PC at home folder create new folder Project

~/Project

clone to it code from github, there are 3 folders: AndroidBLElbs  nrf51  nrf51-pure-gcc-setup

- AndroidBLElbs: Android Eclipse project
- nfr51: SDK for SoC
- nrf51-pure-gcc-setup : with gcc make and flash scripts as well as with lbs code

If you can not compile and build bls project than check nrf51-pure-gcc-setup scripts and makefiles.
There can by issues of different version of SDK and folder structure. 
Project uses version 4.2 of the SDK.

Install Jlink drivers.

Connect board to Jlink using SWD lines (SWDCK,SWDIO) and power: GND, +3v3. 

Vref of Jlink connect to +3v3 by 10KOm pull up resistor.

Compiling:

cd ~/Projects/nrf51-pure-gcc-setup/examples/pca10001/lbs/pure_gcc

make

Copy bin file

cp _build/app_s110.bin ../../../../template/_build/app_s110.bin

Flashing:

cd ../../../../template

make flash-softdevice SOFTDEVICE=s110_nrf51822_5.1.0_softdevice.hex

2) building Android apk

in Eclipse: File->New ->Project->Android Project from existing code -> Next ...
select directory to import project from /home/amukha/Projects/AndroidBLElbs
clean, build and run it over adb or install apk directly on Android device and run it.

Logging: 

To lbs nrf project added simple uart functions to log over serial port. 
You can monitor messages from board over picocom or putty using ttyS or ttyUSB, i.e.: 

sudo picocom -b 38400 -r -l /dev/ttyUSB0


update: 

one other Android apk on github working with lbs:

https://github.com/foldedtoad/blelbservice
