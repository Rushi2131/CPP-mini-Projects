#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    srand(time(0));
    int choice = rand() % 3;
    switch (choice) {
        case 0: return "Rock";
        case 1: return "Paper";
        case 2: return "Scissors";
        default: return "Rock";
    }
}

string getUserChoice() {
    int choice;
    cout << "Choose (1) Rock, (2) Paper, or (3) Scissors: ";
    cin >> choice;

    switch (choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Rock";
    }
}

void determineWinner(string userChoice, string computerChoice) {
    cout << "You choose: " << userChoice << endl;
    cout << "Computer choose: " << computerChoice << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "Rock" && computerChoice == "Scissors") ||
               (userChoice == "Scissors" && computerChoice == "Paper") ||
               (userChoice == "Paper" && computerChoice == "Rock")) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);
    return 0;
}

