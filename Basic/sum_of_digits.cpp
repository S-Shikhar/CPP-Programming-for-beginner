#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, digit;

    cout << "Enter the number: ";
    cin >> n;

    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}