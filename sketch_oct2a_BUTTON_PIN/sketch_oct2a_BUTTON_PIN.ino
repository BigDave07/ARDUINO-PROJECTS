

int ledPin = 12;  //Variable that stores the value of the LED pin
int buttonPin = 2; //Variable that stores the value of the Button Pin

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);     
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == HIGH){  //If button is pressed, lights should come on
      digitalWrite(ledPin, HIGH);
    } 
  else {
      digitalWrite(ledPin, LOW);
  }

}
