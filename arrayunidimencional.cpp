#include <iostream>
using namespace std;

int main()
{
    int numeros[5];

    // 1. Llenar el arreglo
    for (int i = 0; i <5; i++)
    {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // 2. Mostrar los datos guardados
    cout << "\nLos numeros guardados son: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Posicion " << i + 1 << ": " << numeros[i] << endl;
    }
    return 0;
}