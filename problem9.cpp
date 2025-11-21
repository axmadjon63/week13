#include <iostream>
using namespace std;

int main(){
    cout << "Enter the three integers: ";
    int a,b,c;
    cin >> a >> b >> c;
    int* ptrs[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++){
        cout << *(ptrs[i]) << " ";
    }
}