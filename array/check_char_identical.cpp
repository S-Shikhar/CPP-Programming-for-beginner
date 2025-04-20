#include <iostream>
using namespace std;

int main() {
    char arr1[5], arr2[5];
    cout << "Enter 5 characters for Array 1:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    cout << "Enter 5 characters for Array 2:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }
    
    bool identical = true;
    for(int i = 0; i < 5; i++) {
        if(arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
    
    cout << (identical ? "Arrays are identical." : "Arrays are not identical.");
    return 0;
}