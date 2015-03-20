#include "examen.h"


/** agregarVenta
 * Captura el numero de bolis vendidos de cada sabor y obtiene el
 * total de ellos. Este es almacenado en un array externo pasado
 * como parametro, el cual crecera de manera dinamica.
 * @param 	int*	ventasTotales 		Array donde guardar los totales.
 * @param 	int 	dias          		Tamano del array nuevo/Numero de 
 *              						dias que han pasado.
 */
void agregarVenta(int *ventasTotales, int dias)
{
	/* Sabores */
	char *sabores[] = {
		"Vainilla",
		"Fresa",
		"Tamarindo",
		"Rompope",
		"Uva"
	};
	int numSabores = 5;
	int *ventasDiarias = array_newArray(numSabores);
	int totalDiario = 0; //Total vendido por dia.
	int i;

	/* Obtiene el input del usuario */
	puts("Capture sus ventas: ");
	for(i = 0; i < numSabores; i++)
	{
		printf("%s : ", sabores[i]);
		scanf(" %d", &ventasDiarias[i]);
		totalDiario += ventasDiarias[i];
	}

	/* Aloja el nuevo valor diario en una nueva posicion del array. */
	array_extendArray(ventasTotales, dias);
	ventasTotales[dias - 1] = totalDiario; // Desfase por la pos 0.
	
	/* Libera la memoria del array diario */
	free(ventasDiarias);
}

/** mostrarPromedio
 * Calcula el promedio actual de las ventas y las muestra al usuario.
 * @param 	int*	ventasTotales 		Array con las ventas.
 * @param 	int 	dias         		Tamano del array / Numero de 
 *              						dias que han pasado.
 */
void mostrarPromedio(int *ventasTotales, int dias)
{
	double promedio;
	array_getAverage(ventasTotales, dias, &promedio); 

	printf("Su promedio actual se de %.2lf ventas por dia\n", promedio);
}

/** mostrarMaximo
 * Acomoda el array de datos de menor a mayor y muestra el ultimo 
 * elemento, el cual corresponde al mayor del mismo.
 * @param 	int*	ventasTotales 		Array con las ventas.
 * @param 	int 	dias         		Tamano del array / Numero de
 *              						dias que han pasado.
 */

void mostrarMaximo(int *ventasTotales, int dias)
{
	array_ascendingSort(ventasTotales, dias);
	printf("La venta maxima ha sido de %d bolis por dia.\n", ventasTotales[dias-1]);
}

/** mostrarMinimo
 * Acomoda el array de datos de menor a mayor y muestra el primer 
 * elemento, el cual corresponde al menor del mismo.
 * @param 	int*	ventasTotales 		Array con las ventas.
 * @param 	int 	dias         		Tamano del array / Numero de
 *              						dias que han pasado.
 */

void mostrarMinimo(int *ventasTotales, int dias)
{
	array_ascendingSort(ventasTotales, dias);
	printf("La venta minima ha sido de %d bolis por dia.\n", ventasTotales[0]);
}
