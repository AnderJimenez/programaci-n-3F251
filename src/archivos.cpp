#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivoSalida("archivo.txt");
    if(!archivoSalida){
        cerr << "Error al leer archivo " << endl;
    return 1; //Finalizar con error
    }

    cout << "Escribiendo archivo" << endl;
    archivoSalida << "Hola mundo este es mi primer archivo" << endl;

    archivoSalida.close();
    cout << "Archivo cerrado" << endl;

    // Lectura archivo
    ifstream archivoEntrada("archivo.txt");
    if(!archivoEntrada)
    {
        cerr << "Error al abrir el archivo" << endl;
        return 1;
    }
    cout << "Leyendo el archivo" << endl;
    string linea;
    while (getline(archivoEntrada, linea)){
        cout << linea << endl;
    }
    archivoEntrada.close();
    
    return 0;
}