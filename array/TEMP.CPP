#include <iostream>
using namespace std;

// int main()
// {
//     const char *p = "Difficult";
//     char c;
//     c = *p++;
//     cout << c;
// }

// void Position(int &C1, int C2 = 3)
// {
//     C1 += 2;
//     C2 += 1;
// }
// int main()
// {
//     int P1 = 20, P2 = 4;

//     Position(P1);
//     cout << P1 << ", " << P2 << endl;

//     Position(P2, P1);
//     cout << P1 << ", " << P2 << endl;
// }

// void Withdef(int HisNum = 30)
// {
//     for (int I = 20; I <= HisNum; I += 5)
//         cout << I << " ";
//     cout << endl;
// }
// void Control(int &MyNum)
// {
//     MyNum += 10;
//     Withdef(MyNum);
// }
// int main()
// {
//     int YourNum = 20;
//     Control(YourNum);
//     Withdef();
//     cout << "Number = " << YourNum << endl;
// }

// void Encode(char Info[], int N);

// int main()
// {
//     char Memo[] = "Justnow";
//     Encode(Memo, 2);
//     cout << Memo << endl;
// }

// void Encode(char Info[], int N)
// {
//     for (int I = 0; Info[I] != '\0'; I++)
//         if (I % 2 == 0)
//             Info[I] = Info[I] - N;
//         else if (islower(Info[I]))
//             Info[I] = toupper(Info[I]);
//         else
//             Info[I] = Info[I] + N;
// }

void ChangeIt(char Text[], char C)
{
    for (int K = 0; Text[K] != '\0'; K++)
    {
        if (Text[K] >= 'F' && Text[K] <= 'L')
            Text[K] = tolower(Text[K]);
        else if (Text[K] == 'E' || Text[K] == 'e')
            Text[K] = C;
        else if (K % 2 == 0)
            Text[K] = toupper(Text[K]);
        else
            Text[K] = Text[K - 1];
    }
}

int main()
{
    char oldText[] = "pOwERALone";
    ChangeIt(oldText, '%');
    cout << "New TEXT:" << oldText << endl;
}