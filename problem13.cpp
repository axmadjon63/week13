#include <iostream>
using namespace std;

int main() {
    int deck[4][13] = {0};
    deck[0][0] = 1;
    deck[3][1] = 1;
    const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* faces[13] = {
        "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };
    for (int s = 0; s < 4; s++) {
        for (int f = 0; f < 13; f++) {
            if (deck[s][f] == 1) {
                cout << faces[f] << " of " << suits[s] << endl;
            }
        }
    }

}
