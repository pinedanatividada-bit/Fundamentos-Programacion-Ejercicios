#include <iostream> 
using namespace std; 

int main()
{ 
    int numeros[6]; 
    int mayor;
    for (int i = 0; i < 6; i++) 
    {
        cout << "Ingresa el numero " << i+1 << ": "; 
        cin >> numeros[i];
    } 
    mayor = numeros[0]; 
    for (int i = 1; i < 6; i++) 
    { 
        if (numeros[i] > mayor) 
        { 
            mayor = numeros[i];
        } 
    } 
    cout << "El numero mayor ingresado es: " << mayor;
    return 0; 
}