

MAX31856 Scratch


//from MAX31856.ino

#define SCK    3
#define CS     4
#define SDI    5
#define SDO    6

temperature = new MAX31856(SDI, SDO, CS, SCK);


//from MAX31856.cpp
MAX31856::MAX31856(int sdi, int sdo, int cs, int clk)
{
    _sdi = sdi;
    _sdo = sdo;
    _cs = cs;
    _clk = clk;

    // Initialize all the data pins
    pinMode(_sdi, OUTPUT);
    pinMode(_cs, OUTPUT);
    pinMode(_clk, OUTPUT);
    // Use a pullup on the data line to be able to detect "no communication"
    pinMode(_sdo, INPUT_PULLUP);



/*------------
	
	Need a map for how to connect to Arduino and Photon.
	Could be in the format 

	MAX31856 			Arduino Uno 		Photon
	-------------------------------------------------
	[PIN]   -----------> [PIN] ------------> [PIN]
	





-----------*/