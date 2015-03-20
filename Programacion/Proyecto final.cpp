#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

/*Constantes*/
#define ESC 27 //ASCII para escape

/*************************************************************
*****               PROTOTIPOS DE FUNCIONES              *****
**************************************************************/
/*Global*/
void errorCaptura();

/*Unidad 2*/
void unidad2();
void areaRectangulo();
void areaTriangulo();
void areaCirculo();
void calcHipotenusa();
void volCilindro();

/*Unidad 3*/
void unidad3();
float impuesto10(float);
float nCuadrado(float);
float gradosRadianes(float);
int numMayor(int, int);
float promedioAprobatorio(int, int, int);

/*Unidad 4*/
void unidad4();
int validacion0(int);
int validacion100(int);
int mayorDos(int, int);
int validacionPar(int);
int validacionMultiploTres(int);
int menorTres(int, int, int);
int cuadradoCubo(int);
int tipoTriangulo(int, int, int);
void colores();

/*Unidad 5*/
void unidad5();
void secuenciaNumerica();
unsigned long int  factorial(int);
int sumaPares();
int random20();
float promRandom(int);
int sumaMayor0(int, int);
int suma100(int, int);
void promX();
void promCalif();
void cronometro();


/*************************************************************
*****                   MENU PRINCIPAL                   *****
**************************************************************/
int main()
{
	int key;
	do
	{
		printf("Seleccione una unidad:\n\n");
		printf("[1] Unidad 2 - Programacion Basica.\n\n");
		printf("[2] Unidad 3 - Funciones.\n\n");
		printf("[3] Unidad 4 - Estructuras de control de seleccion.\n\n");
		printf("[4] Unidad 5 - Estructuras de control de iteracion.\n\n");
		printf("[ESC] Salir del programa.\n\n");
		key = _getch();
		system("cls");

		switch(key)
		{
			case '1':
				unidad2();
				break;
			case '2':
				unidad3();
				break;
			case '3':
				unidad4();
				break;
			case '4':
				unidad5();
				break;
			case ESC:
				break;
			default:
				errorCaptura();
				system("pause");
				system("cls");
				break;
		}
	}while(key != ESC);

	puts("Saliendo del programa... ");
	system("pause");
}


/*************************************************************
*****                      GLOBALES                      *****
**************************************************************/
void errorCaptura()
{
	puts("Error! Ha capturado un valor incorrecto.");
	puts("Intentelo de nuevo");
}
/*
	@TODO:  Remplazar cada instancia de esta funcion por un
			mensaje personalizado para cada funcion.
*/

/*************************************************************
*****                      UNIDAD 2                      *****
**************************************************************/
void unidad2()
{
	int key;

	do
	{
		printf("Seleccione una programa:  \n\n");
		printf("[1] Calcular el area de un rectangulo\n\n");
		printf("[2] Calcular el area de un triangulo\n\n");
		printf("[3] Calcular el area de un circulo\n\n");
		printf("[4] Calcular la hipotenusa de un triangulo\n\n");
		printf("[5] Calcular el volumen de un cilindro\n\n");
		printf("[ESC] Regresar al menu principial. \n\n");
		key = _getch();
		system("cls");

		switch(key)
		{
			case '1':
				areaRectangulo();
				break;
			case '2':
				areaTriangulo();
				break;
			case '3':
				areaCirculo();
				break;
			case '4':
				calcHipotenusa();
				break;
			case '5':
				volCilindro();
				break;
			case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC)
			system("pause");
		system("cls");

	}while(key != ESC);
}

void areaRectangulo()
{
	float base, altura, area;
	puts("Capture la base del rectangulo: ");
	scanf("%f", &base);
	puts("Capture la altura del rectangulo: ");
	scanf("%f", &altura);
	area = (float) base*altura;
	printf("El area del rectangulo es igual a: %.2f\n", area);
}

void areaTriangulo()
{
	float base, altura, area;
	puts("Capture la base del triangulo: ");
	scanf("%f", &base);
	puts("Capture la altura del triangulo: ");
	scanf("%f", &altura);
	area = (float) (base*altura)/2;
	printf("El area del triangulo es igual a: %.2f\n", area);
}

void areaCirculo()
{
	float radio, area;
	puts("Capture el radio del circulo: ");
	scanf("%f", &radio);
	area = (float) M_PI * (radio * radio);
	printf("El area del circulo es igual a: %.2f\n", area);
}

void calcHipotenusa()
{
	float a, b, c;
	puts("Introduzca el valor del cateto a");
	scanf("%f", &a);
	puts("Introduzca el valor del cateto b");
	scanf("%f", &b);
	c = (float) sqrt( (a*a) + (b*b) );
	printf("El valor de la hipotenusa: %.2f\n", c);
}

void volCilindro()
{
	float vol, radio, altura;
	puts("Capture el radio de la base: ");
	scanf("%f", &radio);
	puts("Capture la altura del cilindro: ");
	scanf("%f", &altura);

	vol = (float) M_PI*(radio*radio)*altura;
	printf("El volumen del cilindro es igual a: %.2f\n", vol);
}


/*************************************************************
*****                      UNIDAD 3                      *****
**************************************************************/
void unidad3()
{
	int key;

	do
	{
		printf("Seleccione una programa: \n\n");
		printf("[1] Recibe el precio, le aplica el 10%% de IVA y regresa el precio total\n\n");
		printf("[2] Recibe un numero entero, lo eleva al cuadrado y regresa el resultado\n\n");
		printf("[3] Transforma de grados a radianes\n\n");
		printf("[4] Captua dos numeros enteros y regresa el mayor\n\n");
		printf("[5] Capura tres calificaciones, las promedia y dice si es aprobatorio o no\n\n");
		printf("[ESC] Regresar al menu principial. \n\n");
		key = _getch();
		system("cls");

		switch(key)
		{
			case '1':
				float precio, total;
				puts("Ingrese el precio: ");
				scanf("%f", &precio);
				total = impuesto10(precio);
				printf("Su total es: %.2f\n", total);
				break;
			case '2':
				float num, cuadrado;
				puts("Ingrese un numero para ser elevado al cuadrado");
				scanf("%f", &num);
				total = nCuadrado(num);
				printf("%.2f al cuadrado = %.2f\n", num, total);
				break;
			case '3':
				float grad, rads;
				puts("Ingrese un valor en grados");
				scanf("%f", &grad);
				rads = gradosRadianes(grad);
				printf("%.2f grados = %.2f radianes\n", grad, rads);
				break;
			case '4':
				int a, b, n;
				puts("Ingrese el primer numero:");
				scanf("%d", &a);
				puts("Ingrese el segundo numero:");
				scanf("%d", &b);
				if( a != b )
				{
					n = numMayor(a, b);
					printf("%d es el numero mayor \n", n);
				}
				else
				{
					puts("Los numeros son iguales");
				}
				break;
			case '5':
				float calif1, calif2, calif3, prom;
				puts("Ingrese la primera calificacion: ");
				scanf("%f", &calif1);
				puts("Ingrese la segunda calificacion: ");
				scanf("%f", &calif2);
				puts("Ingrese la tercera calificacion: ");
				scanf("%f", &calif3);
				prom = promedioAprobatorio(calif1,calif2,calif3);
				printf("Prom = %.2f\n", prom);
				if(prom >= 60)
					puts("Su promedio es aprobatorio. ");
				else
					puts("Su promedio es reprobatorio.");
				break;
			case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC)
			system("pause");
		system("cls");

	}while(key != ESC);
}

float impuesto10(float precio)
{
	float total = precio * 1.1;
	return total;
}

float nCuadrado(float num)
{
	float n2 = num*num;
	return n2;
}

float gradosRadianes(float grad)
{
	float rad = (float) (M_PI*grad)/180;
	return rad;
}

int numMayor(int a, int b)
{
	if(a >= b)
		return a;
	else
		return b;
}

float promedioAprobatorio(int calif1, int calif2, int calif3)
{
	int sum = calif1 + calif2 + calif3;
	return (float) sum/3;
}


/*************************************************************
*****                      UNIDAD 4                      *****
**************************************************************/
void unidad4()
{
	int key;

	do
	{
		printf("Seleccione una programa: \n\n");
		printf("[1] Recibe un numero entero y devuelve un 1 (1>=0 ) o 0 (<=0).\n\n");
		printf("[2] Recibe un numero entero y devuelve un 1 (0<=x<=100) o cero en otro caso.\n\n");
		printf("[3] Recibe dos datos enteros y devuelve el mayor de ellos.\n\n");
		printf("[4] Recibe un numero entero y devuelve un 1 si es par o un cero si no lo es.\n\n");
		printf("[5] Recibe un numero entero y devuelve un 1 si es multiplo de tres o 0 si no \n");
		printf("lo es.\n\n");
		printf("[6] Recibe tres datos enteros y devuelve el menor de ellos.\n\n");
		printf("[7] Recibe un numero entero, lo eleva al cuadrado si es par o al cubo si es \n");           printf("impar.\n\n");
		printf("[8] Recibe tres lados de un triangulo (enteros). Indica que tipo de triangulo\n");
		printf("es.\n\n");
		printf("[9] Seleccionar un color de texto.\n\n");
		printf("[ESC] Regresar al menu principial. \n\n");
		key = _getch();
		system("cls");
		fflush(stdin);
        
        int numFunc, num, num1, num2, num3;
		switch(key)
		{
			case '1':
			    puts("Ingrese un numero entero: ");
			    scanf("%d", &num);
			    numFunc = validacion0(num);
			    if(numFunc == 1)
			    	puts("1. Su numero es mayor o igual a cero. ");
			    else
			    	puts("0. Su numero es menor a cero");
				break;
			case '2':
			    puts("Ingrese un numero entero: ");
			    scanf("%d", &num);
			    numFunc = validacion100(num);
			    if(numFunc == 1)
			    	puts("1. Su numero esta en el rango 0<=X<=100 ");
			    else
			    	puts("0. Su numero no esta en el rango 0<=X<=100");
			    break;
			case '3':
			    puts("Ingrese el primer numero entero: ");
			    scanf("%d", &num1);
			    puts("Ingrese el segundo numero entero: ");
			    scanf("%d", &num2);
			    numFunc = mayorDos(num1, num2);
			    printf("%d es el mayor entre ambos numeros. \n", numFunc);
				break;
			case '4':
				puts("Ingrese un numero entero: ");
				scanf("%d", &num);
				numFunc = validacionPar(num);
				if(numFunc == 1)
					puts("1. Su numero es par. ");
				else
					puts("0. Su numero es impar. ");
				break;
			case '5':
				puts("Ingrese un numero entero: ");
				scanf("%d", &num);
				numFunc = validacionMultiploTres(num);
				if(numFunc == 1)
					puts("1. Su numero es multiplo de tres. ");
				else
					puts("0. Su numero es no es multiplo de tres. ");
				break;
			case '6':
				puts("Ingrese el primer numero entero: ");
			    scanf("%d", &num1);
			    puts("Ingrese el segundo numero entero: ");
			    scanf("%d", &num2);
			    puts("Ingrese el tercer numero entero: ");
			    scanf("%d", &num3);
			    numFunc = menorTres(num1, num2, num3);
			    printf("%d es el menor de los tres numeros. \n", numFunc);
				break;
			case '7':
				puts("Ingrese un numero entero: ");
				scanf("%d", &num);
				numFunc = cuadradoCubo(num);
				if(num%2 == 0)
					printf("Su numero par elevado al cuadrado = %d\n", numFunc);
				else
					printf("Su numero impar elevado al cubo = %d\n", numFunc);
			    break;
			case '8':
				puts("Ingrese el primer lado usando un numero entero: ");
			    scanf("%d", &num1);
			    puts("Ingrese el segundo lado usando un numero entero: ");
			    scanf("%d", &num2);
			    puts("Ingrese el tercer lado usando un numero entero: ");
			    scanf("%d", &num3);
			    numFunc = tipoTriangulo(num1, num2, num3);
			    if(numFunc == 1)
			    	puts("Su triangulo es un equilatero. ");
			    else if(numFunc == 2)
			    	puts("Su triangulo es un isosceless. ");
			    else if(numFunc == 3)
			    	puts("Su triangulo es un escaleno.");
			    else
			    	puts("Error! No son los lados de un triangulo!");
				break;
			case '9':
				colores();
				system("color 07");
		    	break;
		    case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC)
			system("pause");
		system("cls");

	} while(key != ESC);
}

int validacion0(int num)
{
	if(num >= 0)
		return 1;
	else
		return 0;
}

int validacion100(int num)
{
	if(num >= 0 && num <= 100)
		return 1;
	else
		return 0;
}

int mayorDos(int num1, int num2)
{
	if(num1 > num2)
		return num1;
	else
		return num2;
}

int validacionPar(int num)
{
	if(num % 2 == 0)
		return 1;
	else
		return 0;
}

int validacionMultiploTres(int num)
{
	if(num % 3 == 0)
		return 1;
	else
		return 0;
}

int menorTres(int num1, int num2, int num3)
{
	if(num1 < num2)
	{
		if(num1 < num3)
			return num1;
		else
			return num3;
	}
	else
	{
		if(num2 < num3)
			return num2;
		else
			return num3;
	}
}

int cuadradoCubo(int num)
{
	if(validacionPar(num) == 1)
		return num * num;
	else
		return num * num * num;
}

int tipoTriangulo(int lado1, int lado2, int lado3)
{
	if( (lado1 + lado2) > lado3 && (lado2 + lado3) > lado1 && (lado3 + lado1) > lado2)
	{
		if(lado1 == lado2 && lado1 == lado3) //Equilatero
			return 1;
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)//Isosceles
			return 2;
		else //Escaleno
			return 3;
	}
	else
		return 0;
}

void colores()
{
	int color, n = 0;
	do{
		puts("Seleccione una color: ");
		puts("[1] Negro");
		puts("[2] Azul");
		puts("[3] Verde");
		puts("[4] Aqua");
		puts("[5] Rojo");
		puts("[6] Purpura");
		puts("[7] Amarillo");
		puts("[8] Blanco");
		puts("[9] Gris");
		puts("[10] Azul claro");
		puts("[11] Verde claro");
		puts("[12] Aqua claro");
		puts("[13] Rojo claro");
		puts("[14] Purpura claro");
		puts("[15] Amarillo claro");
		puts("[16] Blanco brillante");
		puts("");
		puts("[0] Regresar al menu de unidad. ");
		
		if(n == 0)
		{
			scanf("%d", &color);
			n++;
		}

		switch(color)
		{
			case 1:
				system("color 70");
				puts("\nNegro");
				break;
			case 2:
				system("color 01");
				puts("\nAzul");
				break;
			case 3:
				system("color 02");
				puts("\nVerde");
				break;
			case 4:
				system("color 03");
				puts("\nAqua");
				break;
			case 5:
				system("color 04");
				puts("\nRojo");
				break;
			case 6:
				system("color 05");
				puts("\nPurpura");
				break;
			case 7:
				system("color 06");
				puts("\nAmarillo");
				break;
			case 8:
				system("color 07");
				puts("\nBlanco");
				break;
			case 9:
				system("color 08");
				puts("Gris");
				break;
			case 10:
				system("color 09");
				puts("\nAzul claro");
				break;
			case 11:
				system("color 0A");
				puts("\nVerde claro");
				break;
			case 12:
				system("color 0B");
				puts("\nAqua claro");
				break;
			case 13:
				system("color 0C");
				puts("\nRojo claro");
				break;
			case 14:
				system("color 0D");
				puts("\nPurpura claro");
				break;
			case 15:
				system("color 0E");
				puts("\nAmarillo claro");
				break;
			case 16:
				system("color 0F");
				puts("\nBlanco brillante");
				break;
			case 0:
				break;
			default:
				errorCaptura();
				break;
		}

		if(color != 0)
		{
			puts("Ingrese otro color");
			scanf("%d");
			system("cls");
		}
	} while(color != 0);
}


/*************************************************************
*****                      UNIDAD 5                      *****
**************************************************************/
void unidad5()
{
	int key;

	do
	{
		printf("Seleccione una programa: \n\n");
		printf("[1] Imprime la secuencia numerica [1-3-6-10-15-21-28-36-45-55].\n\n");
		printf("[2] Recibe un numero entero y devuelve su factorial. \n\n");
		printf("[3] Suma 5 numeros pares. \n\n");
		printf("[4] Imprime 20 numeros al azar del 500 al 1000.\n\n");
		printf("[5] Genera X numeros entre 0 y 100, y obtiene su promedio. \n\n");
		printf("[6] Suma dos numeros mayores a 0. \n\n");
		printf("[7] Suma dos numeros entre 0 y 100.\n\n");
		printf("[8] Obtener el promedio de X numeros. \n\n");
		printf("[9] Obtener el promedio de X calificaciones. \n\n");
		printf("[0] Cronometro. \n\n");
		printf("[ESC] Regresar al menu principial. \n\n");
		key = _getch();
		system("cls");

		int num1, num2, total;
		unsigned long int  fact;
		float prom;
		switch(key)
		{
			case '1':
				secuenciaNumerica();
				break;
			case '2':
				puts("Introduzca un numero entero: ");
				scanf("%d", &num1);
				fact = factorial(num1);
				printf("Su factorial es %d\n", fact);
				break;
			case '3':
				sumaPares();
				break;
			case '4':
				random20();
				break;
			case '5':
				puts("Introduzca la cantidad de numeros entre 0 y 100 a generar");
				scanf("%d", &num1);
				prom = promRandom(num1);
				printf("\nSu promedio es %.2f\n", prom);
				break;
			case '6':
				puts("Ingrese el primer numero entero: ");
			    scanf("%d", &num1);
			    puts("Ingrese el segundo numero entero: ");
			    scanf("%d", &num2);
				total = sumaMayor0(num1,num2);
				printf("Suma = %d\n", total);
				break;
			case '7':
				puts("Ingrese el primer numero entero entre 0 y 100: ");
			    scanf("%d", &num1);
			    puts("Ingrese el segundo numero entero 0 y 100: ");
			    scanf("%d", &num2);
				total = suma100(num1, num2);
				printf("Suma = %d\n", total);
				break;
			case '8':
				promX();
				break;
			case '9':
				promCalif();
				break;
			case '0':
				cronometro();
				break;
			case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC)
			system("pause");
		system("cls");

	}while(key != ESC);
}

void secuenciaNumerica()
{
	int sum = 0;
	for(int i = 1; i < 11 ;i++)
	{
		sum += i;
		printf("%d \n", sum);
	}
}

unsigned long int factorial(int num)
{
	/*Validacion*/
	while(validacion0(num) == 0)
	{
		errorCaptura();
		scanf("%d", &num);
	}

	/*Factorial*/
	unsigned long int fact = 1;
	if(num < 2)//1, 0
		fact = 1;
	else
	{
		for(int i = num; i > 1; i--) //1! = 1, no tiene punto en multiplicar por 1.
		{
			fact *= i;
		}
	}

	return fact;
}

int sumaPares()
{
	int sum = 0;
	int num;
	for(int i = 0; i < 5; i++)
	{
		printf("Introduzca el valor par #%d a sumar\n", i+1);
		scanf("%d", &num);

		while(validacionPar(num) == 0)
		{
			errorCaptura();
			scanf("%d", &num);
		}

		sum += num;
	}

	printf("Total = %d\n", sum);
}

int random20()
{
	int num;
	srand(time(NULL));
	for(int i = 0; i < 20; i++)
	{
		num = rand()%501 + 500; //Rango = [500, 1000]
		printf("[(%.2d)] Numero generado = %d\n", i+1, num);
	}
}

float promRandom(int val)
{
	int num;
	float prom;
	int sum = 0;
	srand(time(NULL));
	for(int i = 0; i < val; i++)
	{
		num = rand()%101; //Rango = [0, 100]
		printf("[%.2d] Numero generado = %d\n", i+1, num);
		sum += num;
	}

	prom = (float) sum / val;
	return prom;
}

int sumaMayor0(int a, int b)
{
	while(validacion0(a) == 0 || validacion0(b) == 0)
	{
		puts("Error! Ambos numeros deben de ser mayores a 0.");
		puts("Intentelo de nuevo.");
		puts("Ingrese el primer numero entero: ");
		scanf("%d", &a);
		puts("Ingrese el segundo numero entero: ");
		scanf("%d", &b);
	}

	return a + b;
}

int suma100(int a, int b)
{
	while(validacion100(a) == 0 || validacion100(b) == 0)
	{
		puts("Error! Ambos numeros deben de ser mayores a 0 y menores  o iguales a 100.");
		puts("Intentelo de nuevo.");
		puts("Ingrese el primer numero entero: ");
		scanf("%d", &a);
		puts("Ingrese el segundo numero entero: ");
		scanf("%d", &b);
	}

	return a + b;
}

void promX()
{
    int num, i = 0, sum = 0;
    float prom;
    char key;
    do{
        puts("Capture un numero entero a acumular: ");
        scanf("%d", &num);
        sum+=num;
        i++;
      
        puts("Presione [s] para seguir sumando u otra tecla para obtener el promedio.");
        key = _getch();
        puts("");
    }while(key == 's' || key == 'S');
   
    prom = (float) sum/i;
    printf("\nPromedio = %.2f\n", prom);
}

void promCalif()
{
    int calif, i = 0, sum = 0;
    float prom;
    char key;
    do{
        puts("Capture una calificacion entre 0 y 100 para acumular: ");
        scanf("%d", &calif);
        while(validacion100(calif) == 0)
        {
            errorCaptura();
            puts("");
            puts("Capture una calificacion entre 0 y 100 para acumular: ");
        	scanf("%d", &calif);
        }
        sum+=calif;
        i++;
      
        puts("Presione [s] para seguir sumando u otra tecla para obtener su promedio.");
        key = _getch();
        puts("");
    }while(key == 's' || key == 'S');
   
    prom = (float) sum/i;
    printf("\nPromedio = %.2f\n", prom);
}

void cronometro()
{
    int key = 0;
	int hr = 0;
	int min = 0;
	int seg = 0;
	int ms = 0;
	
	while(key != ESC)
	{
		hr = 0;
		while(key != ESC && hr < 24)
		{
			min = 0;
			while(key != ESC && min < 60)
			{
				seg = 0;
				while(key != ESC && seg < 60)
				{
					ms = 0;
					while(key != ESC && ms < 100)
					{
						printf("\r%.2d:%.2d:%.2d",hr,min,seg);
						if(_kbhit())
							key = _getch();
						Sleep(10);
						ms++;
					}
					seg++;
				}
				min++;
			}
			hr++;
		}
	}
	printf("\n\n CRONOMETRO FINALIZADO!\n");
}