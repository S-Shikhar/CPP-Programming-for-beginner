#include <iostream>
using namespace std;

int main() {
    int arr[5], maxVal, minVal;

    cout << "Enter 5 elements:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    maxVal = minVal = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << "Largest: " << maxVal << "\nSmallest: " << minVal;
    return 0;
}
