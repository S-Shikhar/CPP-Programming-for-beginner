#include <iostream>
using namespace std;

class Account
{
public:
    int acno;
    float balance;
    
    Account(int a, float b)
    {
        acno = a;
        balance = b;
    }
    void withdraw(int w)
    {
        balance -= w;
    }
    void deposit(int d)
    {
        balance += d;
    }
};

class Calculate : public Account
{
public:
    int r, t;
    float si, amt;

    // Constructor for Calculate class
    Calculate(int a, float b) : Account(a, b)
    {
        r = 0;
        t = 0;
        si = 0;
        amt = 0;
    }

    void accept(int x, int y)
    {
        r = x;
        t = y;
        amt = 0;
    }
    void compute()
    {
        si = (balance * r * t) / 100;
        amt = balance + si;
    }
    void display()
    {
        cout << "Account No: " << acno << "\nBalance: " << balance
             << "\nInterest: " << si << "\nAmount: " << amt << endl;
    }
};
int main()
{
    Calculate c(12345, 10000);
    c.withdraw(1000);
    c.deposit(2000);
    c.accept(5, 2);
    c.compute();
    c.display();
    return 0;
}