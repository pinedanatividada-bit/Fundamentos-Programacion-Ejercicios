#include <iostream>
using namespace std;

int main() {

    int opcion;
    string nombre;

    cout << "===== MENU DE TALLERES =====" << endl;
    cout << "1. Hacking Etico" << endl;
    cout << "2. Ciberseguridad" << endl;
    cout << "3. Programacion de videojuegos" << endl;
    cout << "4. Diseno digital" << endl;

    cout << "\nIngresa tu nombre: ";
    cin >> nombre;

    cout << "Digita el numero que te corresponde: ";
    cin >> opcion;

    switch (opcion) {

        case 1:
            cout << nombre << ", tu taller es Hacking Etico" << endl;
            break;

        case 2:
            cout << nombre << ", tu taller es Ciberseguridad" << endl;
            break;

        case 3:
            cout << nombre << ", tu taller es Programacion de videojuegos" << endl;
            break;

        case 4:
            cout << nombre << ", tu taller es Diseno digital" << endl;
            break;

        default:
            cout << "Numero incorrecto" << endl;
    }

    return 0;
}