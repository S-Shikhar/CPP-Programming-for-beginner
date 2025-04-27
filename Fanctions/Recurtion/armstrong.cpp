#include <iostream>
#include <cmath> 
using namespace std;

int armstrong(int n, int sum = 0, int digits = 0)
{
    if (digits == 0)
    {
        int temp = n;
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
    }

    if (n == 0)
        return sum;
    else
        return armstrong(n / 10, sum + pow(n % 10, digits), digits);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = armstrong(n);
    if (result == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
    return 0;
}