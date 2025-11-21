#include <iostream>
using namespace std;

int main(){

    int arr[5] = {45,23,19,32,2};
    int* pt = arr;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++){
        pt = arr;
        for (int j = 0; j < len-i-1; j++){
            int temp = 0;
            if (*pt > *(pt+1)){
                temp = *pt;
                *pt = *(pt+1);
                *(pt+1) = temp;
            }
            pt++;
        }
    }
    for (int i = 0; i<len; i++){
        cout << *pt << " ";
        pt++;
    }
}