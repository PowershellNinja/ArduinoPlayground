// These variables store the flash pattern
// and the current state of the LED

int ledPin1 =  8;      // the number of the LED pin
int ledPin2 = 7;
int ledPin3 = 6;
int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated
long OnTime = 250;           // milliseconds of on-time
long OffTime = 750;          // milliseconds of off-time
long OnTime2 = 1000;
long OffTime2 = 1500;
int ledState2 = LOW;

void setup()
{
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop()
{
  // check to see if it's time to change the state of the LED
  unsigned long currentMillis = millis();
 
  if((ledState == HIGH) && (currentMillis - previousMillis >= OnTime))
  {
    ledState = LOW;  // Turn it off
    previousMillis = currentMillis;  // Remember the time
  }
  else if ((ledState == LOW) && (currentMillis - previousMillis >= OffTime))
  {
    ledState = HIGH;  // turn it on
    previousMillis = currentMillis;   // Remember the time

  }

    if((ledState2 == HIGH) && (currentMillis - previousMillis >= OnTime2))
  {
    ledState2 = LOW;  // Turn it off
    previousMillis = currentMillis;  // Remember the time
  }
  else if ((ledState2 == LOW) && (currentMillis - previousMillis >= OffTime2))
  {
    ledState2 = HIGH;  // turn it on
    previousMillis = currentMillis;   // Remember the time

  }

  digitalWrite(ledPin1, ledState);    // Update the actual LED
  digitalWrite(ledPin2, ledState2);
  //digitalWrite(ledPin3, ledState);
}
