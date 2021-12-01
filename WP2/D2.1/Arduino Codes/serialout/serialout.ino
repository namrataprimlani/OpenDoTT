

int ledPin = 5;



void setup() {

 Serial.begin(9600);
  // put your setup code here, to run once:



}

void loop() {
  // put your main code here, to run repeatedly:


  for(int x=0; x<255; x=x+1)
  {
    
  Serial.println(x);
  analogWrite(ledPin,x);
  delay(20);
  
  }


  for(int x=255;x>255;x=x-1)

  {

    Serial.println(x);
    analogWrite(ledPin,x);
    delay(20);
  }

}
