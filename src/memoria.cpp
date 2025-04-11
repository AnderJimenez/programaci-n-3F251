#include <iostream>
using namespace std;

int main(int argc, char const *arv[])
{
    cout << "Tamaños de tipos de datos" <<endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long:" << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) <<endl;
    cout << "long double: " << sizeof(long double) <<endl;
    cout << "bool: " << sizeof(bool) <<endl;

    cout <<"-------------------------------------------" << endl;
    cout << "Direccciones de memoria" <<endl;
    cout <<"-------------------------------------------" << endl;
    int a = 10;
    int b = 20;
    cout << "a: " << a << "b: " << b << endl;
    cout << "a: " << &a << "b: " << &b << endl;
    cout <<"-------------------------------------------" << endl;
    cout <<"Punteros" << endl;
    cout <<"-------------------------------------------" << endl;
    int* p = &a; //Puntero
    cout << "p: " << p << endl;
    cout << "p: " << *p << endl; //Indirección
    cout << "p: " << &p << endl; //Direccion
    cout <<"-------------------------------------------" << endl;
    cout << "Memoria Dinámica (Como declarar variables en ejecución)" << endl;
    cout <<"-------------------------------------------" << endl;
    cout << "Dirección dinamica" << malloc(4) << endl;
    cout << "Dirección dinamica" << malloc(sizeof(int)) << endl;
    //POSIX <> Informmatica Forense <>

    
    
    
    
    
    return 0;
}