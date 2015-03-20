#include <stdio.h>
#include <stdlib.h>


/* Acciones de matrices */
double** Matrix_createMatrix(int rows, int columns);
void Matrix_deleteMatrix(double** matrix, int rows);
void Matrix_fillMatrix(double** matrix, int rows, int columns);
void Matrix_print(double** matrix, int rows, int columns);

/* Operaciones Aritmeticas */
double** Matrix_sum(double** matrix1, int rows1, int columns1,
					double** matrix2, int rows2, int columns2);
double** Matrix_difference(double** matrix1, int rows1, int columns1, 
						   double** matrix2, int rows2, int columns2);
double** Matrix_multiply(double** matrix1, int rows1, int columns1,
						 double** matrix2, int rows2, int columns2);
