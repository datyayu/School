#include <stdio.h>
#include "libs/array.h"
#include "examen.h"


int main() 
{	
	/* Valores persistentes */
	int *ventasTotales = array_newArray(1);
	int dias = 1;
	char ans = ' ';

	/* Agrega un valor inicial */
	agregarVenta(ventasTotales, dias);

	while(ans != '0')
	{
		puts("\nSeleccione lo que desea hacer: ");
		puts("[0] Salir");
		puts("[1] Agregar ventas del dia.");
		puts("[2] Calcular promedio actual.");
		puts("[3] Mostrar venta minima.");
		puts("[4] Mostrar venta maxima.");
		scanf(" %c", &ans);

		//if(ans==0) sale del loop
		if(ans == '1') //Agrega un nuevo dia.
		{
			dias++;
			agregarVenta(ventasTotales, dias);
		}
		else if(ans == '2') mostrarPromedio(ventasTotales, dias);
		else if(ans == '3') mostrarMinimo(ventasTotales, dias);
		else if(ans == '4') mostrarMaximo(ventasTotales, dias);
		else if(ans != '0')
		{
			puts("Error, seleccione una opcion valida\n");
		}
	}
	
	free(ventasTotales);
	return 0;
}
