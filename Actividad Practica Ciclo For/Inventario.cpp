#include <iostream> 
#include <string> 
using namespace std; 

int main()
{ 
    string nombres[4]; 
    float precios[4]; 
    float total = 0;
    for (int i = 0; i < 4; i++) 
    { 
        cout << "Ingresa nombre del producto " << i+1 << ": "; 
        cin.ignore(); 
        getline(cin, nombres[i]); 
        cout << "Ingresa precio de " << nombres[i] << ": "; 
        cin >> precios[i];
    } 
    cout << "Productos con precio mayor a $50:" << endl;
    for (int i = 0; i < 4; i++) 
    { 
        if (precios[i] > 50) 
        { 
            cout << nombres[i] << " - $" << precios[i] << endl;
            total += precios[i]; 
        }
    } 
    cout << "Total a pagar por productos mayores a $50 pesos: $" << total << endl;
    return 0; 
} 