#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    
    // Puntero simple (nuevo nombre: "ptrEntero")
    int* ptrEntero = &numero;  
    
    // Referencia a puntero (nuevo nombre: "refPuntero")
    int*& refPuntero = ptrEntero;  
    
    // Puntero a puntero (nuevo nombre: "ptrAPuntero")
    int** ptrAPuntero = &ptrEntero;  
    
    // Puntero triple (nuevo nombre: "ptrTriple")
    int*** ptrTriple = &ptrAPuntero;  

    // Acceso a los valores
    cout << "Valor original: " << numero << endl;
    cout << "Acceso con ptrEntero: " << *ptrEntero << endl;
    cout << "Acceso con refPuntero: " << *refPuntero << endl;
    cout << "Acceso con ptrAPuntero: " << **ptrAPuntero << endl;
    cout << "Acceso con ptrTriple: " << ***ptrTriple << endl;

    return 0;
}
