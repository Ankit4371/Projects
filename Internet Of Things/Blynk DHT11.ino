/* Using Blynk App for data transmission Of DHT Transfer via IOT
 *
 *  Created by Ankit
*/

#define BLYNK_PRINT Serial    
#include <SPI.h>			//https://www.arduino.cc/en/Reference/SPI
#include <ESP8266WiFi.h>			
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>		//https://playground.arduino.cc/Code/SimpleTimer
#include <DHT.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth_key[] = "Enter the Auth code which was send by Blink"; 

// WiFi credentials.
char ssid[] = "name_of_your_WIFI";  
char pass[] = "your_WIFI_password"; 
// Quick Tip : Set password to "" for open networks.

#define DHTPIN 2          // Digital pin 4
// You can use in digital pin here,I'm using pin 4

#define DHTTYPE DHT11     // DHT 11

DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V5, h);  //V5 is for Humidity
  Blynk.virtualWrite(V6, t);  //V6 is for Temperature
	// virtualWrite is similiar to digitalWrite or serialWrite except it writes value to blynk server 
}

void setup()
{
  Serial.begin(9600); // On Serial Monitor, reading will be showm at 9600 band
	
  Blynk.begin(auth_key, ssid, pass);

  dht.begin();

  // It's a function to be called every second
  timer.setInterval(1000L, sendSensor);
/* 	setInterval(long d, timer_callback f)
* Call function f every d milliseconds. The callback function must be declared as void f().

* void SendSensor() {
    // take values from dht of humidity and temperature then upload it to blynk server
* }

*timerId = timer.setInterval(1000, sendSensor);
}
*/

void loop()
{
  Blynk.run(); // Initiates Blynk
  timer.run(); // Initiates SimpleTimer
}
