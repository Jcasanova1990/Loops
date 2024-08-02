#include <iostream>
using namespace std;

int main () {

    int count = 5;
    while (count > 0) {
        cout << "This is Whiled. LOL" << endl;
        count--;
    }

// game example
     int lives = 3;  // Starting number of lives
    bool gameOver = false;

    while (!gameOver) {
        cout << "You have " << lives << " lives remaining.\n";

        // Simulate losing a life (you can replace this with actual game logic)
        cout << "Do you want to continue? (y/n): ";
        char input;
        cin >> input;

        if (input == 'y' || input == 'Y') {
            --lives;  // Decrease the number of lives

            if (lives <= 0) {
                gameOver = true;  // End the game if no lives are left
            }
        } else {
            cout << "Continuing game...\n";
        }
    }

    cout << "Game Over! You have no lives left.\n";

    return 0;
}