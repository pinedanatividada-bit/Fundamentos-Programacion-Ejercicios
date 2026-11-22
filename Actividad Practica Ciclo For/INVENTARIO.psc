Algoritmo INVENTARIO
	Definir nombres Como Caracter;
	Dimension nombres[4];
	Definir precios Como Real;
	Dimension precios[4];
	Definir i Como Entero;
	Definir total Como Real;
	total <- 0;
	Para i <- 0 Hasta 3 Hacer
		Escribir "Ingresa nombre del producto ", i+1, ":";
		Leer nombres[i];
		Escribir "Ingresa precio de ", nombres[i], ":";
		Leer precios[i];
	FinPara
	Escribir "Productos con precio mayor a $50:";
	Para i <- 0 Hasta 3 Hacer
		Si precios[i] > 50 Entonces
			Escribir nombres[i], " $", precios[i];
			total <- total + precios[i];
		FinSi
	FinPara
	Escribir "Total de productos mayores a $50: $", total;
FinAlgoritmo