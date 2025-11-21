#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int (*fptr)(int, int);
    int x = 3, y = 5;
    fptr = add;
    cout << "Add: " << fptr(x, y) << endl;
    fptr = multiply;
    cout << "Multiply: " << fptr(x, y) << endl;
}
