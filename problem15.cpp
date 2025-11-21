#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from greet()" << endl;
}

void bye() {
    cout << "Goodbye from bye()" << endl;
}

int main() {
    void (*fptr)();
    fptr = greet;
    fptr();
    fptr = bye;
    fptr();
}
