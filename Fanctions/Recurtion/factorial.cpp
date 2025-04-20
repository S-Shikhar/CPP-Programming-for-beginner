#include <iostream>
using namespace std;

class Factorial
{
public:
    int fact(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * fact(n - 1); // recursive call
    }
};


int main()
{
    Factorial f; // object of class
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = f.fact(n); // calling member function
    cout << "The factorial of " << n << " is: " << result << endl;
    return 0;
}