#include <iostream>
using namespace std;

int main()
{
    float sum = 0, i;

    for (i = 1; i <= 95; i += 2)
    {
        sum += i / (i + 2);
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}

