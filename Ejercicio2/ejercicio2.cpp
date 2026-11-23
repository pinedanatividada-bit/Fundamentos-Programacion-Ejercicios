#include <iostream>
using namespace std;

int main() {
    int N, contador, suma;
    cout << "Escribe un numero entero positivo: ";
    cin >> N;

    while (N <= 0) {
        cout << "Numero invalido, escribe otro numero: ";
        cin >> N;
    }

    contador = 1;
    suma = 0;

    while (contador <= N) {
        suma = suma + contador;
        contador = contador + 1;
    }

    cout << "La suma es: " << suma << endl;
    return 0;
}