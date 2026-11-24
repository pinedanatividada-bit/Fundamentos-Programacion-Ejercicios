Algoritmo Ejercicio2
	Definir N, contador, suma Como Entero;
	Escribir "Escribe un numero entero positivo:";
	Leer N;
	Mientras N <= 0 Hacer
		Escribir "Numero invalido, escribe otro numero:";
		Leer N;
	FinMientras
	contador <- 1;
	suma <- 0;
	Mientras contador <= N Hacer
		suma <- suma + contador;
		contador <- contador + 1;
	FinMientras
	Escribir "La suma es: ", suma;
FinAlgoritmo
	
