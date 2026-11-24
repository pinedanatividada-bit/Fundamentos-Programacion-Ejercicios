#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float calif1, calif2, calif3, calif4;
    float resultado_promedio;

    cout << "Ingresa el Nombre del Alumno: ";
    getline(cin, nombre);

    cout << "Ingresa calificacion 1: ";
    cin >> calif1;

    cout << "Ingresa calificacion 2: ";
    cin >> calif2;

    cout << "Ingresa calificacion 3: ";
    cin >> calif3;

    cout << "Ingresa calificacion 4: ";
    cin >> calif4;

    resultado_promedio = (calif1 + calif2 + calif3 + calif4) / 4;

    cout << "Alumno: " << nombre << endl;
    cout << "Promedio: " << resultado_promedio << endl;

    if (resultado_promedio >= 7) {
        cout << "Aprobado" << endl;
    }
    else {
        cout << "Reprobado" << endl;
    }

    return 0;
}




