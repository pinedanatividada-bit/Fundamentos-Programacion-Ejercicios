#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        cout << "\n===== MENU DE OPERACIONES =====" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Salir" << endl;

        cout << "\nSelecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = num1 + num2;
                cout << "Resultado de la suma: " << resultado << endl;
                break;

            case 2:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "Resultado de la resta: " << resultado << endl;
                break;

            case 3:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                resultado = num1 * num2;
                cout << "Resultado de la multiplicacion: " << resultado << endl;
                break;

            case 4:
                cout << "Ingresa el primer numero: ";
                cin >> num1;
                cout << "Ingresa el segundo numero: ";
                cin >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado de la division: " << resultado << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;

            case 5:
                cout << "Gracias por utilizar el programa. Saliendo..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intenta nuevamente." << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}