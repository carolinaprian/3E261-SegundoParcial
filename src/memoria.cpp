#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    int a=5;
    //cout << &a << endl;
    /*cout << "Int: " << sizeof(int) << endl;
    cout << "Char: " << sizeof(char) << endl;
    cout << "Booleano: " << sizeof(bool) << endl;
    cout << "Long: " << sizeof(long) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;*/
    //cout << a << endl;
    //cout << *(&a) << endl;
    /*cout << "Int: " << sizeof(int*) << endl;
    cout << "Char: " << sizeof(char*) << endl;
    cout << "Booleano: " << sizeof(bool*) << endl;
    cout << "Long: " << sizeof(long*) << endl;
    cout << "Float: " << sizeof(float*) << endl;
    cout << "Double: " << sizeof(double*) << endl;*/
    //offset no. de bytes
    int* direccion;

    cout << direccion << endl;// valor de la direccion ej, coordenada
    cout << &direccion << endl; // donde esta guardada la coordenada
    cout << *direccion << endl; // valor de la  coordenada, o sea la direccion, ej. Calle 123
    return 0;
}