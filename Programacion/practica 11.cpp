#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define MAX 10

/*Prototipos*/
void capturarLista(int lista[]);
void generarLista(int lista[]);
void imprimirLista(int lista[]);
void ordenarAscendente(int lista[]);
void ordenarDescendente(int lista[]);
void suma(int lista[]);
void promedio(int lista[]);

int main(){
	int lista[MAX] = {0,0,0,0,0,0,0,0,0,0};
	char key; //Opcion seleccionada por el usuario.

	do{
		system("cls");
		/*Menu principal*/
		puts("Seleccione una opcion: ");
		puts("[1] Capturar lista desde el teclado.");
		puts("[2] Llenar lista con numeros aleatorios en el rango de 0 al 100.");
		puts("[3] Imprimir lista en pantalla.");
		puts("[4] Ordenar lista de menor a mayor.");
		puts("[5] Ordenar lista de mayor a menor.");
		puts("[6] Calcular la suma de la lista.");
		puts("[7] Calcular el promedio de la lista.");
		puts("[8] Salir.");
		key = _getch();

		//Funciones del programa 
		system("cls");
		switch(key)
		{
			case '1': //Capturar Lista
				capturarLista(lista);
				break;

			case '2': //Llenar lista aleatoriamente
				generarLista(lista);
				break;

			case '3': //Imprimir lista
				imprimirLista(lista);
				break;

			case '4': //Ordena la lista de menor a mayor
				ordenarAscendente(lista);
				break;

			case '5': //Ordena la lista de mayor a menor
				ordenarDescendente(lista); 
				break;

			case '6': //Calcula e imprime el acumulado de la lista
				suma(lista);
				break;

			case '7': //Calcula el promedio de los elementos de la lista
				promedio(lista);
				break;

			case '8': //Salir del programa
				puts("Saliendo...");
				break;

			default: //error
				puts("Opcion incorrecta!!");
				break;
		}

		system("pause");

	} while(key != '8');

	return 0;
}

/*Captura luna lista*/
void capturarLista(int lista[])
{
	for(int i = 0; i < MAX; i++)
	{
		printf("capture el elemento #%d :", i);
		scanf("%d", &lista[i]);
	}

	puts("Lista capturada!!");
}

/*Genera una lista de numeros 0-100 aleatoriamente*/
void generarLista(int lista[])
{
	srand(time(NULL));
	for(int i = 0; i < MAX; i++)
	{
		lista[i] = rand()%101;
	}
	puts("Lista generada!!");
}

/*Imprime la lista actual*/
void imprimirLista(int lista[])
{
	puts("Elementos en la lista:");
	for(int i = 0; i < MAX; i++)
	{
		printf("%d\n", lista[i]);
	}
}

/*Ordena una lista de MAX numeros de menor a mayor*/
void ordenarAscendente(int lista[])
{
	int temp;

	for (int i = 0; i < (MAX-1); i++)
	{
		for(int j = 1; j < (MAX-i); j++)
		{
			if(lista[j] < lista[j-1])
			{
				temp = lista[j];
				lista[j] = lista[j-1];
				lista[j-1] = temp;
			}
		}
	}

	puts("Lista ordenada!");
}

/*Ordena una lista de MAX numeros de mayor a menor*/
void ordenarDescendente(int lista[])
{
	int temp;

	for (int i = 0; i < (MAX-1); i++)
	{
		for(int j = 1; j < (MAX-i); j++)
		{
			if(lista[j] > lista[j-1])
			{
				temp = lista[j];
				lista[j] = lista[j-1];
				lista[j-1] = temp;
			}
		}
	}
	puts("Lista ordenada!");
}

/*Calcula e imprime el acumulado de la lista*/
void suma(int lista[])
{
	int sumatoria = 0;
	for(int i = 0; i < MAX; i++)
	{
		sumatoria += lista[i];
	}
	printf("La suma de los elementos es: %d\n", sumatoria);
}

/*Calcula el promedio de los elementos de la lista*/
void promedio(int lista[])
{
	int sumatoria = 0;

	for(int i = 0; i < MAX; i++)
	{
		sumatoria += lista[i];
	}
	float prom = (float) sumatoria/MAX;
	printf("La suma total es igual a %.2f\n", prom);
}
