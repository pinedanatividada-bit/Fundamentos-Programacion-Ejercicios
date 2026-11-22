#include <iostream> 
using namespace std;

int main() 
{ 
    int suma = 0;
    for (int i = 2; i <= 100; i += 2)  
    { 
        suma += i; 
    } 
    cout << "La suma de los numeros pares del 1 al 100 es: " << suma << endl; 
    return 0; 
} 