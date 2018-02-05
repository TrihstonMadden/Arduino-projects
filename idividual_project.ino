char incomingByte = 0;   // for incoming serial data
int Range [ 2 ];

void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte);
               
      int condition=1; //conditionis int type
      if(condition==1){
      int first =Serial.read(); //first is char type
      if (first=="R"){
      condition=0;
      Range[0]=Serial.read();
      Range[1]=Serial.read();
      Range[2]=Serial.read();
      int i;
         for ( i = 0; i < 23; i++)
      if(Range[i] == "R"){

        
      }
      Serial.println(Range[0]);
        }
       }
      }
}
