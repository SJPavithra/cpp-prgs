#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1, guess, attempts = 0;

    do {
        cout << "Guess a number (1-100): ";
        cin >> guess;
        attempts++;
        if (guess < num)
            cout << "Too low!" << endl;
        else if (guess > num)
            cout << "Too high!" << endl;
    } while (guess != num);

    cout << "You guessed it in " << attempts << " attempts!" << endl;
    return 0;
}
