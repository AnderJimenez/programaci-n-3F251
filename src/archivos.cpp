#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona
{
    char nombre[12];
    int edad;
};

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
    //--------------------------------------------
    //Escritura de archivos Binarios
    ofstream archivoSalidaBinario("archivo.bin", ios::binary);
    if(!archivoSalidaBinario){
        cerr<<"Error al leer archivo" << endl;
        return 1;//Finalizar con error
    }
    Persona p1 = {"Juan", 20};
    Persona p2 = {"Pedro", 30};
    Persona p3 = {"Maria", 40};

    archivoSalidaBinario.write((char*)(&p1), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p2), sizeof(Persona));
    archivoSalidaBinario.write((char*)(&p3), sizeof(Persona));
    //Esteganografía
    archivoSalidaBinario.close();
    return 0;
}