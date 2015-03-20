#include "array.h"

/** array_newArray
 * Crea un nuevo array en memoria dinamica.
 * 
 * @param 	 int	arraySize 	Tamano del array a crear.
 * @return   float*				En exito, devuelve un puntero a la
 *                     			direccion en memoria del array. De 
 *                     			lo contrario, retorna un NULL.
 */
float* array_newArray(int arraySize)
{
	if (arraySize > 0)
	{ 
		return (float*) malloc(arraySize*sizeof(float));
	}
	else
	{
		return NULL;
	}
}

/** array_captureArray
 * Captura los valores de un array de n tamano.
 * 
 * @param	float*	array 		Array a capturar.
 * @param 	int		arraySize 	Tamano del array a capturar.
 */
void array_captureArray(float *array, int arraySize) 
{
	int i;

	for(i = 0; i < arraySize; i++)
	{
		printf("Capture el valor deseado \n");
		scanf("%f", &(array[i]));
	}
}

/** array_extendArray
 * Cambia el tamano de un array ya inicializado.
 * 
 * @param	float* 	array   	Array a modificar.
 * @param	int		newSize 	Nuevo tamano del array.
 */
void array_extendArray(float *array, int newSize)
{
	array = (float*) realloc(array, newSize*sizeof(float));
}

/** array_getAverage
 * Obtiene el promedio de los valores en un array y los almacena en una
 * direccion determinada.
 * 
 * @param	float*	array     	Array con los valores a promediar.
 * @param	int		arraySize 	Tamano del array.
 * @param	double*	pAverage  	Puntero a la variable donde se desea 
 *                			  	almacenar el promedio.
 */
void array_getAverage(float *array, int arraySize, double *pAverage) 
{
	int i;
	float sum = 0;

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
 * @param	float*	array 	  	Array a imprimir. 
 * @param	int		arraySize 	Tamano del array a imprimir.
 */
void array_printArray(float *array, int arraySize)
{
	int i;

    for(i = 0; i < arraySize; i++) 
    {
    	printf("%.2lf\n", array[i]);
    }
}

/** array_modifyArray
 * Extiende/modifica el tamano del array y recalcula el promedio.
 * 
 * @param	float*	array 		Array a modificar.
 * @param 	int*    arraySize 	Puntero a una variable conteniendo el tamano
 *                			  	del array previo a su modificacion.
 * @param 	double*	average   	Puntero a una variable donde almacenar el
 *                          	promedio.
 */
void array_modifyArray(float *array, int *arraySize, double *average) 
{
    int newArraySize;
    int sizeDifference;

    // Captura el nuevo tamano.
    puts("Capture el nuevo tamano del array");
    scanf("%d", &newArraySize);
    sizeDifference = newArraySize - *arraySize;

    if(sizeDifference > 0)
    {
        // Extiende el array.
        array_extendArray(array, newArraySize);
        // Captura solo los valores que no han sido capturados.
        array_captureArray((&array[*arraySize]), sizeDifference);
        // Obten el promedio de nuevo.
        array_getAverage(array, newArraySize, average);

    }
    else
    {
        // Obten el promedio del nuevo array, ignorando los excentes.
        array_getAverage(array, ((*arraySize)+sizeDifference), average);
    }
    
    // Asigna el tamano nuevo a la variable original. 
    *arraySize = newArraySize; 
}
