/*
Usa delete/delete[] solo si antes usaste new/new[].

Memoria estática (stack): Nunca uses delete no se usa new par crear memoria.

Memoria dinámica (heap): Siempre usa delete para evitar fugas cuadno se usa new.*/

#include <iostream>
int main(){-->memoria dinamica para arrays

int* arr = new int[5];  // Array dinámico de 5 enteros
arr[0] = 10;            // Asigna valores
arr[1] = 20;
// ...
delete[] arr;           // Libera el array completo (usa delete[])

//-->inicializacion directa 

int* arr = new int[5]{1, 2, 3, 4, 5};  // Inicializado con valores
for (int i = 0; i < 5; i++) {
    std::cout << arr[i] << " ";  // Imprime: 1 2 3 4 5
}
delete[] arr;  // Libera memoria

//-->reserva memoria para un int 

int* ptr = new int;   // Reserva espacio para un entero
*ptr = 42;            // Asigna un valor
std::cout << *ptr;    // Imprime: 42
delete ptr;           // Libera la memoria (¡IMPORTANTE!)

//-->reserva he inicializa en un solo paso 

int* ptr = new int(100);  // Reserva e inicializa con 100
std::cout << *ptr;        // Imprime: 100
delete ptr;               // Libera memoria
}
