Algoritmo NumeroMayor
	Definir numeros Como Entero;
	Dimension numeros[6];
	Definir i, mayor Como Entero;
	Para i <- 0 Hasta 5 Hacer
		Escribir "Ingresa el numero ", i+1, ": ";
		Leer numeros[i];
	FinPara
	mayor <- numeros[0];
	Para i <- 1 Hasta 5 Hacer
		Si numeros[i] > mayor Entonces
			mayor <- numeros[i];
		FinSi
	FinPara
	Escribir "El numero mayor ingresado es: ", mayor;
FinAlgoritmo