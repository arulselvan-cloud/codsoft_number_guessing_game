#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main() {
    // 1. Seed the random number generator with current time
    srand(time(0));

    // 2. Generate a random number between 1 and 100
    int secret = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "🎯 Guess the number (1–100)!\n";

    // 3. Keep looping until the user guesses correctly
    while (true) {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secret) {
            cout << "📉 Too low! Try higher.\n";
        } else if (guess > secret) {
            cout << "📈 Too high! Try lower.\n";
        } else {
            cout << "✅ Correct! You got it in " << attempts << " attempts!\n";
            break; // Exit the loop
        }
    }

    return 0;
}
