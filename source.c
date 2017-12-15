//Detecting the OverFlow of Water from the Sump using AURDINO //

/*
REQUIREMENTS For the Project:
1.)AURDINO UNO R3
2.)Raindrop Sensor
3.)10K-Ohm Resistor
4.)Push Button/Toggle Switch
5.)Un-interrupted Power Source
*/

int buttonState = 0;
const int buttonPin = 2;

void setup() {
Serial.begin(9600);
pinMode(buttonPin, INPUT);
}

void loop() {
  int values[10],values2[5];
  int i=0,j=0,avgValue,sum=0,sum2=0,avgValue2=10;
  for(i=0;i<10 values[i]=analogRead(A0); xss=removed xss=removed>=450){
    Serial.println("BUZZER OFF");
    analogWrite(A5,0);
    buttonState = LOW;
  }
  else{
       while (buttonState == LOW) {
        buttonState = digitalRead(buttonPin);
          Serial.println("BUZZER ON");
          analogWrite(A5,255);
       }
          Serial.println("BUZZER OFF");
          analogWrite(A5,0);
  }
}
