#include <iostream>
using namespace std;

int main()
{
    int i;
    float arr[5];

    cout << "Enter the elements of the array: ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        arr[i] = arr[i] / 60;
    }

    cout << "The converted values are: ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}