#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GuessingGame {
private:
    int secretNumber;  // The number to be guessed
    int maxAttempts;   // Maximum attempts allowed

public:
    // Constructor to initialize game settings
    GuessingGame(int range, int attempts) : maxAttempts(attempts) {
        srand(time(0));  // Seed for random number generation
        secretNumber = rand() % range + 1;  // Random number in range 1 to 'range'
    }

    // Function to start the game
    void play() {
        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Guess the secret number between 1 and " << secretNumber << "." << endl;

        // Game loop
        while (attempts < maxAttempts) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You've guessed the number in " << attempts << " attempts!" << endl;
                return;
            } else if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Too high! Try again." << endl;
            }
        }

        // If attempts are exhausted
        cout << "Sorry, you've used all " << maxAttempts << " attempts. The secret number was " << secretNumber << "." << endl;
    }
};

int main() {
    int range, maxAttempts;

    cout << "Enter the range for the number (1 to range): ";
    cin >> range;
    cout << "Enter the maximum number of attempts: ";
    cin >> maxAttempts;

    // Initialize and play the game
    GuessingGame game(range, maxAttempts);
    game.play();

    return 0;
}
