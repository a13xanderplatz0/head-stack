#include <iostream>
int main() {
    int a = 3;
    char* pc;
    void* p;
    
    p = &a;        // Correcto: void* puede apuntar a cualquier tipo
    //pc = &a;     // Error: tipo incompatible (int* a char*)
    pc = (char*)&a; // Corrección con casteo estilo C
    
    char* pc2 = reinterpret_cast<char*>(&a); // Casteo explícito estilo C++ (usando un nombre diferente)
    
    // Uso seguro de pc:
    for (size_t i = 0; i < sizeof(int); ++i) {
        std::cout << "Byte " << i << ": " << static_cast<int>(pc[i]) << std::endl;
    }
}
