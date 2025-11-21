#include <iostream>
using namespace std;

int main() {
    const char* days[3] = {"Mon", "Tue", "Wed"};

    const char** ptr = days;

    for (int i = 0; i < 3; i++) {
        cout << *(*(ptr + i) + 1) << " ";
    }

    cout << endl;
}
