#include <iostream>
using namespace std;

int main() {
    int A[5], B[5];

    cout << "Enter 5 elements for Array A:\n";
    for(int i = 0; i < 5; i++) {
        cin >> A[i];
        B[i] = A[i] + 5;
    }

    cout << "Array B:\n";
    for(int i = 0; i < 5; i++) {
        cout << B[i] << " ";
    }
    
    return 0;
}
