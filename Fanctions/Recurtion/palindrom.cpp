#include <iostream>
using namespace std;

class isPalindrome
{
public:
    int checkPalindrome(int n, int rev = 0)
    {
        if (n == 0)
            return rev;
        else
            return checkPalindrome(n / 10, rev * 10 + n % 10); // recursive call
    }
};

int main()
{
    isPalindrome p; // object of class
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = p.checkPalindrome(n); // calling member function
    if (n == rev)
        cout << n << " is a palindrome number." << endl;
    else
        cout << n << " is not a palindrome number." << endl;
    return 0;
}