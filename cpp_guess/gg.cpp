#include <iostream>
#include <ctime>
#include <cstdlib>


using std::cout;
using std::endl;
using std::cin;

int main() {
    int min{1};
    int max{};


    // Gets the maximum number that's above 100
    bool active = true;
    do {
        cout << "What's the number you can guess upto? " << endl;
        cin >> max;

        if (max <= 100) {
            cout << "Oh... really??? Please choose higher" << endl;
            continue;
        } else {
            active = false;
        }

    } while(active);


    // Generating a random number int the range of 1 and user given number
    int num{};
    int mi {};
    int ma {max};
    
    srand(time(nullptr));

    num = rand() % ma + mi;


    // Deciding and displaying the number of chances that's to be given to the player
    int chance{};
    int n{5};
    int x{15};

    chance = rand() % x + n;
    cout << "You get to guess the number in the range of " << min << " and " << max << " in " << chance << " chances" << endl;


    for (int i = 1; i <= chance; i++) {
        int guess;
        cout << "Your guess: ";
        cin >> guess;

        if (guess == num) {
            cout << "Great you guessed the number..." << endl;
            break;
        } else {
            if (guess > num && i != chance) {
                cout << "Lo⬇️" << endl;
                cout << "\n-------------------------" << endl;
            } else if (guess < num && i != chance) {
                cout << "Hi⬆️" << endl;
                cout << "\n-------------------------" << endl;
            }
        }
        if (i == chance) {
            cout << "HaHa... You loose... BTW the number was " << num << endl;
        }
    }

    return 0;
}