#include <Arduino.h>
#include <pins_arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>
#include <Wire.h>
//#### Screen SETUP ######
#include "SPI.h"
#include <TFT_eSPI.h>
#define BACKLIGHT_CHANNEL   ((uint8_t)1)
#define TFT_BL              12
TFT_eSPI tft = TFT_eSPI();   // Invoke library
//########################

bool button_status() {
  	bool status;
  	if(digitalRead(21) == 0) {
  		status = true;
  	} else {
  		status = false;
  	}
  	return status;
  }

void setup()
{
  SPI.begin(TFT_SCLK, TFT_MISO, TFT_MOSI, -1); 

  ledcAttachPin(TFT_BL, 1);
  ledcSetup(BACKLIGHT_CHANNEL, 12000, 8);
  ledcWrite(BACKLIGHT_CHANNEL, 255);

  tft.init();
  tft.fillScreen(0xFFFF);
  tft.setRotation(0);
  tft.setTextSize(1);
  tft.setSwapBytes(true);

  pinMode(21, INPUT_PULLUP);
  Serial.begin(115200);

}
void loop()
{
    if (button_status()
  ) {
    delay(200);
    Serial.println(((String("Button Press"))));
    tft.fillScreen(0xffff);
  } else {
    tft.fillScreen(0x0);
  }
}
