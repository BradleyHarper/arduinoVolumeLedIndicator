const int ledPin1=11; //specify the
const int ledPin2=12;
const int ledPin3=13;
const int soundPin=A2;
const int limit1=20;
const int limit2=60;
const int limit3=100;
int waitTime=100;

void setup() {  //set up the pins you want to use for all the LED's and the sensor pin
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(soundPin,OUTPUT);
}

void loop() {
  int soundSensor=analogRead(soundPin); //reads the value the sensor is outputting and saves it to a variable
  
  if(soundSensor>=limit1){  //if the sensor produces a value greater than limit1 variable write the led pin high. if not, write low
    digitalWrite(ledPin1,HIGH);
    delay(waitTime);
  }else{
    digitalWrite(ledPin1,LOW);
    }

  if(soundSensor>=limit1 && soundSensor>=limit2){
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    delay(waitTime);
  }else{
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    }

  if(soundSensor>=limit1 && soundSensor>=limit2 && soundSensor>=limit3){
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3,HIGH);
    delay(waitTime);

  }else{
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
  }
}
