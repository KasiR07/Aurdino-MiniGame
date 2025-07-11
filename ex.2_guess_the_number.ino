int ledPinRed = 4;
int ledPinGreen = 3;
int ledPinYellow = 2;
int secretNumber;
int userGuess;

void setup() {
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  Serial.begin(9600);             // Start serial communication
  while (!Serial);
  randomSeed(analogRead(0));     // Randomize seed using analog pin noise
  secretNumber = random(1, 101);  // Random number between 1 and 100
  Serial.println("Guess a number between 1 and 100:");
}

void loop() {
   while (!Serial.available()) {
    delay(100);
   }
    userGuess = Serial.parseInt();
    if (userGuess != 0) {
      Serial.println("Guess again:");
      Serial.print("You entered: ");
      Serial.println(userGuess);
      if (userGuess == secretNumber) {
         Serial.println("Correct! 🎉");
         blinkLED(100, 2, ledPinGreen);  // Fast blinks (2 times)
         // Generate a new number after each guess
         secretNumber = random(1, 101);
         Serial.println("Guess a new number:");
      } else if (userGuess < secretNumber) {
         Serial.println("Too low.");
         blinkLED(100, 2, ledPinRed); // Fast blinks (2 times)
      } else {
         Serial.println("Too high.");
         blinkLED(100, 2, ledPinYellow); // Fast blinks (2 times)
        }
    }

    
   
}

void blinkLED(int delayTime, int count, int ledPin) {
  for (int i = 0; i < count; i++) {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
  }
  delay(1000);
}
