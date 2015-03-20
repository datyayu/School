#include <stdio.h>
#include "array.h"


int main ()
{
    float *array = NULL; // Balance a tratar.
    int arraySize;       // Tamano del arreglo.
    double average;      // Promedio del balance.

    // Recibe el input del usuario.
    puts("Capture el numero de elementos que desea");
    scanf("%d", &arraySize);

    // Crea un nuevo array en memoria dinamica.
    array = array_newArray(arraySize);

    if(array != NULL)
    {
        // Captura, promedia y muestra el promedio.
        array_captureArray(array, arraySize);
        array_getAverage(array, arraySize, &average);
        printf("El valor promedio es: %.2lf\n\n", average);

        //Cambia el tamano y vuelve a promediar.
        array_modifyArray(array, &arraySize, &average);
        printf("El nuevo valor promedio es: %.2lf\n\n", average);

        //Libera el espacio en memoria.
        free(array);
    }
    else
    {
        puts("Error al guardar el arreglo.");
    }
    
    return 0;
}
