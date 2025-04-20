#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter size of Array A: ";
    cin >> m;
    int A[m];

    cout << "Enter elements of Array A:\n";
    for(int i = 0; i < m; i++) cin >> A[i];

    cout << "Enter size of Array B: ";
    cin >> n;
    int B[n];

    cout << "Enter elements of Array B:\n";
    for(int i = 0; i < n; i++) cin >> B[i];

    int C[m + n];
    for(int i = 0; i < m; i++) C[i] = A[i];
    for(int i = 0; i < n; i++) C[m + i] = B[i];

    cout << "Merged Array C:\n";
    for(int i = 0; i < m + n; i++) cout << C[i] << " ";
    return 0;
}
