#include <iostream> // Incluye la libreria para usar cout y cin
using namespace std; // Para no tener que poner std:: en cada linea

int main() // Funcion principal donde empieza el programa
{ // Abre el cuerpo del programa
    int matriz[2][3]; // Crea una matriz de 2 filas y 3 columnas para guardar 6 numeros

    // 1. Llenar la matriz
    for (int fila = 0; fila < 2; fila++) // Ciclo para recorrer las 2 filas
    { // Abre el ciclo de filas
        for (int col = 0; col < 3; col++) // Ciclo para recorrer las 3 columnas
        { // Abre el ciclo de columnas
            cout << "Ingrese el numero para la fila " << endl; // Muestra el mensaje para pedir el numero
            cin >> matriz[fila][col]; // Guarda el numero que escribe el usuario en esa posicion
        } // Cierra el ciclo de columnas
    } // Cierra el ciclo de filas

    // 2. Mostrar la matriz en forma de tabla
    cout << "\nLa matriz ingresada es:" << endl; // Muestra el titulo antes de mostrar la matriz
    for (int fila = 0; fila < 2; fila++) // Ciclo para recorrer otra vez las 2 filas para mostrar
    { // Abre el ciclo de filas para mostrar
        for (int col = 0; col < 3; col++) // Ciclo para recorrer las 3 columnas para mostrar
        { // Abre el ciclo de columnas para mostrar
            cout << matriz[fila][col] << "\t"; // Muestra el numero guardado y pone un espacio de tabulacion
        } // Cierra el ciclo de columnas
        cout << endl; // Salto de linea al terminar cada fila para que se vea como tabla
    } // Cierra el ciclo de filas

    return 0; // Indica que el programa termino sin errores
} // Cierra el programa