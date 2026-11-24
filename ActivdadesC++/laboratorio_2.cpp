#include <iostream>
using namespace std;

int main() {

    int opcion;

    cout << "===== MENU DE TALLERES =====" << endl;
    cout << "1. Ciberseguridad" << endl;
    cout << "2. Diseno digital" << endl;
    cout << "3. Redes digitales" << endl;
    cout << "4. Programacion" << endl;

    cout << "\nIngresa el numero de tu taller: ";
    cin >> opcion;

    switch (opcion) {

        case 1:
            cout << "Tu taller es en el laboratorio Ciberseguridad" << endl;
            break;

        case 2:
            cout << "Tu taller es en el laboratorio Diseno digital" << endl;
            break;

        case 3:
            cout << "Tu taller es en el laboratorio Redes digitales" << endl;
            break;

        case 4:
            cout << "Tu taller es en el laboratorio Programacion" << endl;
            break;

        default:
            cout << "Numero incorrecto" << endl;
    }

    return 0;
}