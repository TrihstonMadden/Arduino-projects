
//This includes everything. Not generally recommended.
//It's better to include only the parts of library you really need.
//But for this example it's quick and easy. See "comboDump" example
//for a more efficient way.
#include "IRLibAll.h"

IRrecvPCI myReceiver(2); //create receiver and pass pin number
IRdecode myDecoder;   //create decoder

void setup() {
  Serial.begin(9600);
  delay(1500); while (!Serial); //delay for Leonardo
  myReceiver.enableIRIn(); // Start the receiver
  Serial.println(F("Ready to receive IR signals"));
}

void loop() {
  //Continue looping until you get a complete signal received
  if (myReceiver.getResults()) {
    myDecoder.decode();           //Decode it
    myDecoder.dumpResults(true);  //Now print results. Use false for less detail
    myReceiver.enableIRIn();      //Restart receiver
  }
}

