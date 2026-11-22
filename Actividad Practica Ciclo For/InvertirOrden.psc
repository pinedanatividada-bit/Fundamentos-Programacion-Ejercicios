Algoritmo InvertirOrden
	Definir nombres Como Caracter;
	Dimension nombres[5];
	Definir i Como Entero;
	Para i <- 0 Hasta 4 Hacer
		Escribir "Ingresa el nombre ", i+1, ": ";
		Leer nombres[i];
	FinPara
	Escribir "Los nombres en orden inverso son:";
	Para i <- 4 Hasta 0 Con Paso -1 Hacer
		Escribir nombres[i];
	FinPara
FinAlgoritmo