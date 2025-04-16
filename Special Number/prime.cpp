// find if a number is prime or not

#include <iostream>
using namespace std;

class Prime {
    public:
    int n, i, count = 0;

    void input() {
        cout << "Enter a number: ";
        cin >> n;
    }

    void checkPrime() {
        if (n < 2) {
            cout << n << " is not a prime number." << endl;
            return;
        }
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }
};

int main() {
    Prime p;
    p.input();
    p.checkPrime();
    return 0;
}