
// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLxxxxxx"
#define BLYNK_DEVICE_NAME           "Device"
#define BLYNK_AUTH_TOKEN            "bwzljmcAJPkgYhAgidhVaV8U9xaY_TTK"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <SoftwareSerial.h>
SoftwareSerial SerialBLE(2, 3); // RX, TX

#include <BlynkSimpleSerialBLE.h>

char auth[] = BLYNK_AUTH_TOKEN;
int PinR = 5;
int PinB = 6;
int PinG = 9;
int Pinn = 10;

void setup()
{
  // Debug console
  Serial.begin(9600);

  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE, auth);

  Serial.println("Waiting for connections...");
  pinMode(PinR, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinG, OUTPUT);
  pinMode(Pinn, OUTPUT);

}

void loop()
{
  Blynk.run();

}
