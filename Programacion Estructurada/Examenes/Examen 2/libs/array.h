#include <stdio.h>
#include <stdlib.h>


/* Manejo de arrays */
int* array_newArray(int arraySize);
void array_printArray(int *array, int arraySize);
void array_extendArray(int *array, int newSize);
void array_getAverage(int *array, int arraySize, double *pAverage); 
void array_ascendingSort(int *array, int arraySize);