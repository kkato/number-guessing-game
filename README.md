# Number Guessing Game

This is a simple number guessing game created in C language. The program generates a random number between 1 and 100, and the user has to guess the number. The program provides hints on whether the guess is too high or too low and repeats until the correct answer is guessed.

## 機能

- The program generates a random number between 1 and 100.
- The user makes a guess, and the program provides feedback on whether the guess is too high, too low, or correct.
- The game continues until the user guesses the correct number.

## How to Run

1. **Clone the repository**:

    ```bash
    git clone https://github.com/kkato/number-guessing-game.git
    cd number-guessing-game
    ```

2. **Compile the program**:

    ```bash
    gcc -o number-guessing-game main.c
    ```

3. **Run the program**:

    ```bash
    ./number-guessing-game
    ```

4. **Game Flow**:
   - The program prompts you to guess a number between 1 and 100.
   - After entering a number, the program tells you if your guess is too high, too low, or correct.
   - Keep guessing until you find the correct number.

## 実行例

```
Guess a number between 1 and 100.
Enter your guess: 50
Too high.
Enter your guess: 25
Too low.
Enter your guess: 30
Correct!
```
