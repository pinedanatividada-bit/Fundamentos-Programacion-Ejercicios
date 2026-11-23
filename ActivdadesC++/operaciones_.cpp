#include <iostream> // Es para poder usar cout y cin
using namespace std; // Es para no escribir std:: a cada rato

int main() { // Aqui es donde empieza el programa

    int opcion; // Aqui guardo mi opcion, es para numeros enteros sin punto decimal
    float num1, num2, resultado; // Aqui guardo los numeros con punto decimal, num1 y num2 son los que me das, resultado es la respuesta

    // Aqui muestra el menu
    cout << "===== MENU DE OPERACIONES =====" << endl; // Muestra esto: el titulo del menu
    cout << "1. Suma" << endl; // Muestra esto: la opcion 1, que es la suma
    cout << "2. Resta" << endl; // Muestra esto: la opcion 2, que es la resta
    cout << "3. Multiplicacion" << endl; // Muestra esto: la opcion 3, que es la multiplicacion
    cout << "4. Division" << endl; // Muestra esto: la opcion 4, que es la division
    cout << "5. Salir" << endl; // Muestra esto: la opcion 5, que es salir

    cout << "\nSelecciona una opcion: "; // Muestra esto: la pregunta de que elijas una opcion
    cin >> opcion; // Aqui pide esto: tu opcion y la guarda en opcion

    switch (opcion) { // Es para hacer una estructura de control, revisa que opcion elegiste

        case 1: // Es si elijo el 1, que es la suma
            cout << "Ingresa el primer numero: "; // Muestra esto: pide el primer numero para sumar esto
            cin >> num1; // Aqui pide esto: el primer numero y lo guarda en num1
            cout << "Ingresa el segundo numero: "; // Muestra esto: pide el segundo numero para sumar esto
            cin >> num2; // Aqui pide esto: el segundo numero y lo guarda en num2
            resultado = num1 + num2; // Aqui suma esto: num1 + num2
            cout << "El resultado de la suma es: " << resultado << endl; // Muestra esto: el resultado de suma esto
            break; // Aqui ya acabo, salte del switch

        case 2: // Es si elijo el 2, que es la resta
            cout << "Ingresa el primer numero: "; // Muestra esto: pide el primer numero para restar esto
            cin >> num1; // Aqui pide esto: el primer numero y lo guarda en num1
            cout << "Ingresa el segundo numero: "; // Muestra esto: pide el segundo numero para restar esto
            cin >> num2; // Aqui pide esto: el segundo numero y lo guarda en num2
            resultado = num1 - num2; // Aqui resta esto: num1 - num2
            cout << "El resultado de la resta es: " << resultado << endl; // Muestra esto: el resultado de resta esto
            break; // Aqui ya acabo, salte

        case 3: // Es si elijo el 3, que es la multiplicacion
            cout << "Ingresa el primer numero: "; // Muestra esto: pide el primer numero para multiplicar esto
            cin >> num1; // Aqui pide esto: el primer numero y lo guarda en num1
            cout << "Ingresa el segundo numero: "; // Muestra esto: pide el segundo numero para multiplicar esto
            cin >> num2; // Aqui pide esto: el segundo numero y lo guarda en num2
            resultado = num1 * num2; // Aqui multiplica esto: num1 * num2
            cout << "El resultado de la multiplicacion es: " << resultado << endl; // Muestra esto: el resultado de multiplicar esto
            break; // Aqui ya acabo, salte

        case 4: // Es si elijo el 4, que es la division
            cout << "Ingresa el primer numero: "; // Muestra esto: pide el primer numero para dividir esto
            cin >> num1; // Aqui pide esto: el primer numero y lo guarda en num1
            cout << "Ingresa el segundo numero: "; // Muestra esto: pide el segundo numero para dividir esto
            cin >> num2; // Aqui pide esto: el segundo numero y lo guarda en num2
            if (num2 != 0) { // Aqui pregunta: si el segundo numero es diferente de cero
                resultado = num1 / num2; // Si si es diferente, aqui divide esto: num1 / num2
                cout << "El resultado de la division es: " << resultado << endl; // Muestra esto: el resultado de dividir esto
            }
            else { // Si el segundo numero si es cero, entra aqui
                cout << "Error: No se puede dividir entre cero." << endl; // Muestra esto: el error de que no se puede dividir entre cero
            }
            break; // Aqui ya acabo, salte

        case 5: // Es si elijo el 5, que es salir
            cout << "Gracias por utilizar el programa." << endl; // Muestra esto: el mensaje de gracias
            break; // Aqui ya acabo, salte

        default: // Es si elijo otro numero que no existe, como un 9
            cout << "Opcion no valida. Intenta nuevamente." << endl; // Muestra esto: que esa opcion no existe
    } // Aqui se cierra el switch

    return 0; // Aqui le dice a la compu que el programa termino bien
} // Aqui se cierra el programa