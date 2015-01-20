package com.ble.lbs;

import java.util.UUID;

public class BleDefinedUUIDs {
	
	public static class Service {
		//final static public UUID HEART_RATE               = UUID.fromString("0000180d-0000-1000-8000-00805f9b34fb");
		final static public UUID HEART_RATE  = UUID.fromString("00001800-0000-1000-8000-00805f9b34fb");
	};
	
	public static class LbsStrings {
        final static public String Lbs             = "00001523-1212-efde-1523-785feabcd123";
        final static public String LbsButton       = "00001524-1212-efde-1523-785feabcd123";
        final static public String LbsLed          = "00001525-1212-efde-1523-785feabcd123";
      //  final static public String LbsLedNotify    = "00002902-1212-efde-1523-785feabcd123";
        final static public String LbsLedNotify    = "00002902-0000-1000-8000-00805f9b34fb";
    };   
    
	public static class Characteristic {
		final static public UUID HEART_RATE_MEASUREMENT   = UUID.fromString("00002a37-0000-1000-8000-00805f9b34fb");
		final static public UUID MANUFACTURER_STRING      = UUID.fromString("00002a29-0000-1000-8000-00805f9b34fb");
		final static public UUID MODEL_NUMBER_STRING      = UUID.fromString("00002a24-0000-1000-8000-00805f9b34fb");
		final static public UUID FIRMWARE_REVISION_STRING = UUID.fromString("00002a26-0000-1000-8000-00805f9b34fb");
		final static public UUID APPEARANCE               = UUID.fromString("00002a01-0000-1000-8000-00805f9b34fb");
		final static public UUID BODY_SENSOR_LOCATION     = UUID.fromString("00002a38-0000-1000-8000-00805f9b34fb");
		final static public UUID BATTERY_LEVEL            = UUID.fromString("00002a19-0000-1000-8000-00805f9b34fb");
		final static public UUID LBS                      = UUID.fromString(LbsStrings.Lbs);
		final static public UUID LBS_BUTTON               = UUID.fromString(LbsStrings.LbsButton);
		final static public UUID LBS_LED                  = UUID.fromString(LbsStrings.LbsLed);
	}
	
	public static class Descriptor {
		final static public UUID CHAR_CLIENT_CONFIG       = UUID.fromString("00002902-0000-1000-8000-00805f9b34fb");
	}
	
}
