// sum of square of numbers from n to 100

#include <iostream>
using namespace std;

class SquareUptoN {
    public:
    int n, sum = 0;

    void input() {
        cout << "Enter a number: ";
        cin >> n;
    }

    void calculateSquareSum() {
        for (int i = n; i <= 100; i++) {
            sum += i * i;
        }
    }

    void displayResult() {
        cout << "The sum of squares from " << n << " to 100 is: " << sum << endl;
    }
};

int main() {
    SquareUptoN squareSum;
    squareSum.input();
    squareSum.calculateSquareSum();
    squareSum.displayResult();
    return 0;
}
