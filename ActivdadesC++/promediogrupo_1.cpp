#include <iostream>
using namespace std;

int main() {
    int cantidad_estudiantes, contador;
    float calificacion, suma_calificaciones, promedio;

    suma_calificaciones = 0;
    contador = 1;

    cout << "Ingresa la cantidad de estudiantes en el grupo: ";
    cin >> cantidad_estudiantes;

    while (contador <= cantidad_estudiantes) {
        cout << "Ingresa la calificacion del estudiante " << contador << ": ";
        cin >> calificacion;
        suma_calificaciones = suma_calificaciones + calificacion;
        contador = contador + 1;
    }

    if (cantidad_estudiantes > 0) {
        promedio = suma_calificaciones / cantidad_estudiantes;
        cout << "El promedio general del grupo es: " << promedio << endl;
    } else {
        cout << "No se ingresaron calificaciones validas" << endl;
    }

    return 0;
}