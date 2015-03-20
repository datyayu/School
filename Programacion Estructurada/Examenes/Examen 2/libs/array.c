#include "array.h"


/** array_newArray
 * Crea un nuevo array en memoria dinamica.
 * 
 * @param 	 int	arraySize 	Tamano del array a crear.
 * @return   int*				En exito, devuelve un puntero a la
 *                     			direccion en memoria del array. De 
 *                     			lo contrario, retorna un NULL.
 */
int* array_newArray(int arraySize)
{
	if (arraySize > 0)
	{ 
		return (int*) calloc(arraySize, sizeof(int));
	}
	else
	{
		return NULL;
	}
}

/** array_extendArray
 * Cambia el tamano de un array ya inicializado.
 * 
 * @param	int* 	array   	Array a modificar.
 * @param	int		newSize 	Nuevo tamano del array.
 */
void array_extendArray(int *array, int newSize)
{
	array = (int*) realloc(array, newSize*sizeof(int));
}

/** array_getAverage
 * Obtiene el promedio de los valores en un array y los almacena en una
 * direccion determinada.
 * 
 * @param	int*	array     	Array con los valores a promediar.
 * @param	int		arraySize 	Tamano del array.
 * @param	double*	pAverage  	Puntero a la variable donde se desea 
 *                			  	almacenar el promedio.
 */
void array_getAverage(int *array, int arraySize, double *pAverage) 
{
	int i;
	int sum = 0;

	for(i = 0; i < arraySize; i++)
	{
		sum = sum + array[i];
	}

	// Almacena el promedio en el direccion del puntero pAverage.
	*pAverage = (double) sum / (arraySize);
}

/** array_printArray
 * Imprime un array de n tamano.
 * 
 * @param	int*	array 	  	Array a imprimir. 
 * @param	int		arraySize 	Tamano del array a imprimir.
 */
void array_printArray(int *array, int arraySize)
{
	int i;

    for(i = 0; i < arraySize; i++) 
    {
    	printf("%d\n", array[i]);
    }
}

/** array_ascendingSort
 * Acomoda un array de menor a mayor usando bubble sort.
 * @param   int*    array       Array a ordenar.
 * @param   int     arraySize   Tamano del array.
 */
void array_ascendingSort(int *array, int arraySize)
{
    int temp;

    for (int i = 0; i < (arraySize-1); i++)
    {
        for(int j = 1; j < (arraySize-i); j++)
        {
            if(array[j] < array[j-1])
            {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}