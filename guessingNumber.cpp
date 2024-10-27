#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; 
    int guess = 0;
    int tries = 0;

    cout << "Guess the number between 1 and 100: ";

    while (guess != number) {
        cin >> guess;
        tries++;

        if (guess > number) {
            cout << "Too high! Try again: ";
        } else if (guess < number) {
            cout << "Too low! Try again: ";
        } else {
            cout << "Congratulations! You've guessed the number in " << tries << " tries.\n";
        }
    }

    return 0;
}

