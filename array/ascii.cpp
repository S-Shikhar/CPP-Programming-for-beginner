#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    char arr[n];
    cout << "Enter " << n << " characters:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "ASCII values of the characters:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " : " << (int)arr[i] << endl;
    }
}