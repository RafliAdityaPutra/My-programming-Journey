1 const int buttonPin = 26;

2 void setup() {

3

4

pinMode(buttonPin, INPUT);

Serial.begin(9600);

5}

6 void loop() {

7

8

9

10

11

12

13

int buttonState = digitalRead(buttonPin);

Serial.print("Tombol ditekan: ");

if (buttonState == HIGH) (

Serial.println("YA");

} else {

Serial.println("TIDAK");

delay(100);

14 }