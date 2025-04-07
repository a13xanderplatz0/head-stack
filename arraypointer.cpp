#include <iostream>
using namespace std;

int main() {
    int A[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    cout << "A: " << A << endl;        // Dirección de A[0] (100)
    cout << "*A: " << *A << endl;      // Dirección de A[0][0] (100)
    cout << "*(A + 1): " << *(A + 1) << endl; // Dirección de A[1][0] (112)

    // Acceso a valores:
    cout << "**A: " << **A << endl;    // 1 (A[0][0])
    cout << "*(*(A + 1) + 2): " << *(*(A + 1) + 2) << endl; // 6 (A[1][2])
    
    return 0;
}
