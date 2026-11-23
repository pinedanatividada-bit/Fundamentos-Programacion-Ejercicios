#include <iostream> 
using namespace std;

int main() 
{ 
    int matriz[3][3]; 
    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++) 
        { 
            cout << "Ingresa matriz[" << i << "][" << j << "]: "; 
            cin >> matriz[i][j]; 
        } 
    } 
    cout << "Matriz:" << endl; 
    for (int i = 0; i < 3; i++) 
    { 
        int sumaFila = 0; 
        for (int j = 0; j < 3; j++) 
        { 
            cout << matriz[i][j] << " ";
            sumaFila += matriz[i][j]; 
        } 
        cout << endl; 
        cout << "La suma total de la fila " << i+1 << " es: " << sumaFila;
    } 
    return 0; 
} 

 


