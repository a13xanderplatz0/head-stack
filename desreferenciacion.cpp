#include <iostream>

int main() {
    int valor = 5;
    
    // Puntero simple a int
    int* p = &valor;
    
    // Referencia a un puntero int* (debe inicializarse)
    int*& refe = p;
    
    // Puntero a puntero (doble indirección)
    int** pp = &p;
    
    // Otra referencia a puntero (inicializada con p)
    int*& refe1 = p;
    
    // Puntero a puntero a puntero (triple indirección)
    int*** c = &pp;
    
    // Tercera referencia a puntero (inicializada con p)
    int*& refe2 = p;
    
    // Demostración de uso
    std::cout << "Valor original: " << valor << std::endl;
    std::cout << "Acceso mediante p: " << *p << std::endl;
    std::cout << "Acceso mediante refe: " << *refe << std::endl;
    std::cout << "Acceso mediante pp: " << **pp << std::endl;
    std::cout << "Acceso mediante refe1: " << *refe1 << std::endl;
    std::cout << "Acceso mediante c: " << ***c << std::endl;
    std::cout << "Acceso mediante refe2: " << *refe2 << std::endl;
    
    return 0;
}
