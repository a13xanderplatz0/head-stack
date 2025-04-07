#include <iostream>
int main(){


    int a{13};
    int b{15};
    int* p;
    p=&a;
    std::cout<<"direccion de memoria de a es : "<<p<<std::endl;
    std::cout<<"el valor de a es: "<<a<<std::endl;
    std::cout<<"el valor de b es: "<<b<<std::endl;
    std::cout<<"direccion de memoria de b es; "<<&b<<std::endl;

    /*---------------------------------------------------------------*/
    /*pointer con array*/
    int A[]={1,2,3,4}; 

    std::cout<<"imprime el valor de A[0]: "<<*A<<std::endl;
    std::cout<<"imprime el valor de A[1]: "<<*(A+1)<<std::endl;
    std::cout<<"imprime el valor de A[2]: "<<*(A+2)<<std::endl;
    std::cout<<"imprime el valor de A[3]: "<<*(A+3)<<std::endl;
    for(int i=0;i<4;i++)
    {
        std::cout<<A[i]<< " ";
    }

    /*como la memoria es estatica int A[]={1,2,3,4}no necesita un delete a menos que use una 
    memoria dinamica int A[]=new  */
    return 0;
}
