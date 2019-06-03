const int ledPin1=11; //specify the pin locations on the arduino micro crontroller
const int ledPin2=12; //
const int ledPin3=13; //
const int soundPin=A2; //same thing here, just on the other side of the arduino, A stands for analog
const int limit1=20; //this is the limit that i've chosen for the first led. the value that is stored is going to be compared to raw data from the sound sensor itself
const int limit2=60; //this one has a higher threshold
const int limit3=100;//this one has the highest threshold
const int waitTime=100; //establish a 100 millisecond wait time for later use.

void setup() {  //set up the pins you want to use for all the LED's and the sensor pin
  pinMode(ledPin1,OUTPUT); //all of these pins are going to OUTPUT some kind of value, we're going to use digitalWrite to write HIGH (5v) to a specified pin!
  pinMode(ledPin2,OUTPUT); //
  pinMode(ledPin3,OUTPUT); //
  pinMode(soundPin,OUTPUT); //
}

void loop() {
  int soundSensor=analogRead(soundPin); //reads the value the sensor is outputting and assigns it to a variable. ideally you'd want to create a simple equation to convert the raw data from the sensor to a tangible set of numbers, but in this case the raw data from the sensor is very managable.
  
  if(soundSensor>=limit1){  //if the sensor produces a value greater than limit1 variable write the led pin high. if not, write low
    digitalWrite(ledPin1,HIGH);
    delay(waitTime);
  }else{
    digitalWrite(ledPin1,LOW);
    }

  if(soundSensor>=limit1 && soundSensor>=limit2){ //same as the if statement above, but both of the values in the if statement need to be true for the rest of the code to execute
    digitalWrite(ledPin1,HIGH);
    digitalWrite(ledPin2,HIGH);
    delay(waitTime);
  }else{
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    }

  if(soundSensor>=limit1 && soundSensor>=limit2 && soundSensor>=limit3){ //same as the if statement above, but now 3 values need to be met to execute the rest of the code
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

//thats pretty much it, untill further refactoring this aught to give you a good base to tinker with, thank you!
