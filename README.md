# GSMCpp_prac
Merging the CPP higher level OOPS concept with the embedded application
packages for setting up AVR pluggin in the eclipse in Linux environment - gcc-avr binutils-avr gdb-avr avr-libc avrdude
Plugin link for installing new software in eclipse http://avr-eclipse.sourceforge.net/updatesite/
Set the project configuration to the release from debug and clock 11.0592 MHz
Burning hex command sudo avrdude -pm16 -cusbasp -u -Uflash:w:GSMCpp_prac.hex:a
Reading fuse to the file sudo avrdude -cusbasp -pm16 -Ulfuse:r:low_fuse_val.hex:h -Uhfuse:r:high_fuse_val.hex:h -Uefuse:r:ext_fuse_val.hex:h
Writing fuse to the controller (Setting external Xtal at external 11.0592 MHz) sudo avrdude -cusbasp -pm16 -U lfuse:w:0x60:m -U hfuse:w:0x99:m
