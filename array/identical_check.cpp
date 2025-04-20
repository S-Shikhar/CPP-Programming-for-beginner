#include <iostream>
using namespace std;

int main()
{
    int X[5], Y[5];

    cout << "Enter 5 elements for Array X:\n";
    for (int i = 0; i < 5; i++)
        cin >> X[i];

    cout << "Enter 5 elements for Array Y:\n";
    for (int i = 0; i < 5; i++)
        cin >> Y[i];

    bool identical = true;
    for (int i = 0; i < 5; i++)
    {
        if (X[i] != Y[i])
        {
            identical = false;
            break;
        }
    }

    cout << (identical ? "Arrays are identical." : "Arrays are not identical.");
    return 0;
}
