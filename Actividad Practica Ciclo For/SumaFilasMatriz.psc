Algoritmo SumaFilasMatriz
	Definir matriz Como Entero;
	Dimension matriz[3,3];
	Definir i, j, sumaFila Como Entero;
	Para i <- 0 Hasta 2 Hacer
		Para j <- 0 Hasta 2 Hacer
			Escribir "Ingresa matriz[", i+1, ",", j+1, "]: ";
			Leer matriz[i,j];
		FinPara
	FinPara
	Escribir "Matriz:";
	Para i <- 0 Hasta 2 Hacer
		sumaFila <- 0;
		Para j <- 0 Hasta 2 Hacer
			Escribir Sin Saltar matriz[i,j], " ";
			sumaFila <- sumaFila + matriz[i,j];
		FinPara
		Escribir "";
		Escribir "La suma total de la fila ", i+1, " es: ", sumaFila;
	FinPara
FinAlgoritmo 
