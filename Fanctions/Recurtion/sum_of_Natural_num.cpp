#include <iostream>
using namespace std;

class Sum
{
public:
    int sum(int n) // member function or method
    {
        if (n == 0)
            return 0;
        else
            return n + sum(n - 1); // recursive call
    }
};

int main()
{
    Sum s; // object of class
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = s.sum(n); // calling member function
    cout << "The sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}