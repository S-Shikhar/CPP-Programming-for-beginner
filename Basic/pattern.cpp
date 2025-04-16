/*
#####
$$$$
***
&&
! 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6 - i; j++)
        {
            if (i == 1)
                cout << "#";
            else if (i == 2)
                cout << "$";
            else if (i == 3)
                cout << "*";
            else if (i == 4)
                cout << "&";
            else
                cout << "!";
        }
        cout << endl;
    }
    return 0;
}