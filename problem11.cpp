#include <iostream>
using namespace std;

int main(){

    string arr[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string* pt = arr;
    for (int i = 0; i<4; i++){
        cout << *pt << " ";
        pt+=1;
    }

    cout << endl;
}