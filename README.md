# 🎲 Arduino Guess The Number Game

A fun and interactive **number guessing game built using Arduino UNO**, where the user tries to guess a randomly generated number between 1 and 100 through the Serial Monitor. The Arduino responds with hints until the correct number is guessed.

---

## 🧩 Project Overview

This beginner-friendly project helps users understand **serial communication**, **random number generation**, and **user input handling** in Arduino. It acts as a console game powered by microcontroller logic instead of a PC!

The sketch:
- Randomly generates a number between 1 and 100 at the start.
- Prompts the user to input their guess via the Serial Monitor.
- Provides feedback whether the guess is **too high**, **too low**, or **correct**.
- Resets with a new number once the correct guess is made.

---

## 🛠️ Hardware Requirements

- ✅ Arduino UNO (or compatible board)
- ✅ USB Cable (to connect with PC)
- ✅ Computer with Arduino IDE installed
- ✅ Serial Monitor (built into IDE)

---

## 📂 File Structure

| File Name                  | Description                        |
|---------------------------|------------------------------------|
| `ex.2_guess_the_number.ino` | Main Arduino sketch with full logic |

---

## 🚀 Getting Started

Follow these steps to run the project:

### 1. Upload the Sketch

- Open the Arduino IDE.
- Connect your Arduino UNO via USB.
- Open `ex.2_guess_the_number.ino`.
- Click **Upload** (→) to transfer the code to your board.

### 2. Start the Game

- Go to **Tools → Serial Monitor** or press `Ctrl + Shift + M`.
- Set **baud rate** to `9600`.
- Type your guess (a number between 1 and 100) and press Enter.
- The Arduino will respond with:
  - `"Too high!"`
  - `"Too low!"`
  - `"Congratulations! You guessed it!"`
- After guessing correctly, a new number is generated automatically.

---

## 💡 Concepts & Features

- `Serial.begin()` for serial communication setup
- `Serial.readStringUntil()` for reading typed inputs
- `random()` function to generate unpredictable numbers
- Conditional logic (`if-else`) to compare guesses
- Automatic game reset with new random number

---

## 🔧 Example Output (Serial Monitor)

```plaintext
Welcome to the Guess the Number Game!
Enter a number between 1 and 100:
> 50
Too high! Try again:
> 30
Too low! Try again:
> 42
Congratulations! You guessed it!
