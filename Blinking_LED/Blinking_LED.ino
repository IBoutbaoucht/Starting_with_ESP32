// Define the GPIO pin for the LED
#define LED_PIN 3

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);
  delay(10000); // Wait for 10 second

  // Turn the LED off
  digitalWrite(LED_PIN, LOW);
  delay(1000); // Wait for 1 second
}
