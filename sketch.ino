#define LED 2 // LED on pin 5
#define BUTTON 5 // Button on pin 5
#define POT A0 // Potentiometer on pin A0

void setup() {
  // put your setup code here, to run once:

  // Define whether the pins are inputs or outputs
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(POT, INPUT);

  // Turn on the LED
  digitalWrite(LED, HIGH);

  // Start the serial monitor for printing
  // 9600 baud rate (speed) is sufficient
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Read the BUTTON and POT values
  int buttonStatus = digitalRead(BUTTON);
  int potStatus = analogRead(POT);

  // Read and print the POT reading
  Serial.println("Button and Pot status:");
  Serial.println(buttonStatus);
  Serial.println(potStatus);

  // Delay in milliseconds
  // 200 ms; loop runs ~5 times/sec
  // button may feel a little inconsistent
  // due to this delay; click quickly
  

  if (potStatus < 400) {
    digitalWrite(2, HIGH);
    delay(10000);
    digitalWrite(2, LOW);
    delay(10000);
  } else {
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);
  }
}



