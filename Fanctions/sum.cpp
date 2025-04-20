#include <iostream>
using namespace std;

// without class
// int sum()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     return a + b;
// }

// int main()
// {
//     int result = sum();
//     cout << "The sum is: " << result << endl;
//     return 0;
// }

// with class
class Sum
{
public:       // access specifier
    int a, b; // member variables
    int sum() // member function or method
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        return a + b;
    }
};

int main()
{
    Sum s;                  // object of class
    int result = s.sum();   // calling member function
    cout << "The sum is: " << result << endl;
    return 0;
}