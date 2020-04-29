
 /*************************************************************
  This example runs directly on ESP8266 chip.
  
  Please be sure to select the right ESP8266 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266_SSL.h>

// You should get Auth Token in the Blynk App. Generally it is emailed to your registered account
// Go to the Project Settings (nut icon).
char auth[] = "Your Authentication Token";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "WiFi SSID";
char pass[] = "WiFi Password";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
