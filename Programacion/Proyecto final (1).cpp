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
int factorial(int);
int sumaPares();
int random20();
float promRandom(int);
int sumaMayor0(int, int);
int suma100(int, int);
void promX();
void promCalif();
void cronometro();

/*Unidad 6*/
void unidad6();
void ultimaMayuscula();
void asteriscos(char cad[]);
void cadenaMayuscula(char cad[]);
void letrasA(char cad[]);
void contenidoCadena(char cad[]);
void practica11(); //Incluye varias funciones
void transpuesta();
void matrizUnos();
void sumaColumnas(int arr[5][5]);
void imprimirMatriz(int arr[5][5]);

/*Practica 11*/
void capturarLista(int lista[]);
void generarLista(int lista[]);
void imprimirLista(int lista[]);
void ordenarAscendente(int lista[]);
void ordenarDescendente(int lista[]);
void suma(int lista[]);
void promedio(int lista[]);


/*************************************************************
*****                   MENU PRINCIPAL                   *****
**************************************************************/
/*Funcion principal*/
int main()
{
	int key; //Tecla presionada por el usuario

	do
	{
		printf("Seleccione una unidad:\n\n");
		printf("[1] Unidad 2 - Programacion Basica.\n\n");
		printf("[2] Unidad 3 - Funciones.\n\n");
		printf("[3] Unidad 4 - Estructuras de control de seleccion.\n\n");
		printf("[4] Unidad 5 - Estructuras de control de iteracion.\n\n");
		printf("[5] Unidad 6 - Cadenas, Arreglos y Matrices");
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
			case '5':
			    unidad6();
			    break;
			case ESC:
				break;
			default:
				printf("Error!\n Su seleccion no corresponde a una unidad!\n");
				printf("Intentelo de nuevo \n");
				system("pause");
				system("cls");
				break;
		}
	}while(key != ESC);

	puts("Saliendo del programa... ");
	system("pause");
	
	return 0;
}


/*************************************************************
*****                      GLOBALES                      *****
**************************************************************/
void errorCaptura()
{
	puts("Error! Su seleccion no corresponde a una funcion.");
	puts("Intentelo de nuevo");
}
/*
	@TODO:  Anadir practica 11.
    @TODO:  Cambiar el tipo de dato de key a char para ahorrar
            memoria.
*/


/*************************************************************
*****                      UNIDAD 2                      *****
**************************************************************/
/*Menu de la unidad 2*/
void unidad2()
{
	int key; //Tecla presionada por el usuario

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

		if(key != ESC) system("pause");
		
		system("cls");
		
	}while(key != ESC);
}

/*Calcula el area de un rectangulo*/
void areaRectangulo()
{
	float base, altura; //Datos especificados por el usuario
	float area; //Area total del rectangulo
	
	puts("Capture la base del rectangulo: ");
	scanf("%f", &base);
	puts("Capture la altura del rectangulo: ");
	scanf("%f", &altura);
	
	area = (float) base*altura;
	printf("El area del rectangulo es igual a: %.2f\n", area);
}

/*Calcula el area de un triangulo*/
void areaTriangulo()
{
	float base, altura; //Datos especificados por el usuario
	float area; //Valor total del area del triangulo
	
	puts("Capture la base del triangulo: ");
	scanf("%f", &base);
	puts("Capture la altura del triangulo: ");
	scanf("%f", &altura);
	
	area = (float) (base*altura)/2;
	printf("El area del triangulo es igual a: %.2f\n", area);
}

/*Calcula el area de un circulo*/
void areaCirculo()
{
	float radio; //Radio especificado por el usuario
	float area; //Area total del circulo
	
	puts("Capture el radio del circulo: ");
	scanf("%f", &radio);
	
	area = (float) M_PI * (radio * radio);
	printf("El area del circulo es igual a: %.2f\n", area);
}

/*Calcula la hipotenusa de un triangulo*/
void calcHipotenusa()
{
	float a, b; //Catetos del triangulo especificados por el usuario
	float c; //Valor de la hipotenusa
	
	puts("Introduzca el valor del cateto a");
	scanf("%f", &a);
	puts("Introduzca el valor del cateto b");
	scanf("%f", &b);
	
	c = (float) sqrt( (a*a) + (b*b) );
	printf("El valor de la hipotenusa: %.2f\n", c);
}

/*Calcula el volumen de un cilindro*/
void volCilindro()
{
	float radio, altura; //Datos especificados por el usuario
    float vol; //Volumn total del cilindro
    
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
/*Menu de la Unidad 3*/
void unidad3()
{
	int key; //Tecla presionada por el usuario

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
		fflush(stdin);

		switch(key)
		{
			case '1':
				float precio; //Precio Original
				float total; //Precio con el IVA aplicado
				
				puts("Ingrese el precio: ");
				scanf("%f", &precio);
				
				total = impuesto10(precio);
				printf("Su total es: %.2f\n", total);
				break;
			case '2':
				float num; //Numero Introducido por el usuario
				float cuadrado; //num elevado al cuadrado
				
				puts("Ingrese un numero para ser elevado al cuadrado");
				scanf("%f", &num);
				
				cuadrado = nCuadrado(num);
				printf("%.2f al cuadrado = %.2f\n", num, total);
				break;
			case '3':
				float grad; //Valor en grados
				float rads; //Valor en radianes
				
				puts("Ingrese un valor en grados");
				scanf("%f", &grad);
				
				rads = gradosRadianes(grad);
				printf("%.2f grados = %.2f radianes\n", grad, rads);
				break;
			case '4':
				int a, b; //Numeros enteros a comparar
				int n; //Almacena el numero mayor
				
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
				float calif1, calif2, calif3; //Calificaciones del usuario
				float prom; //Promedio de las tres calificaciones
				
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

		if(key != ESC) system("pause");
		
		system("cls");
	}while(key != ESC);
}

/*Aplica el 10% de impuesto a un precio*/
float impuesto10(float precio)
{
	float total; //Precio con el IVA aplicado
	total = precio * 1.1;
	return total;
}

/*Eleva un numero al cuadrado*/
float nCuadrado(float num)
{
	float n2; //Valor de elevar num al cuadrado
	n2 = num*num;
	return n2;
}

/*Convierte de grados a radianes*/
float gradosRadianes(float grad)
{
	float rad; //Valor en radianes
	rad = (float) (M_PI*grad)/180;
	return rad;
}

/*Regresa el numero mayor entre 'a' y 'b'; o 'a' si son iguales*/
int numMayor(int a, int b)
{
	if(a >= b)
		return a;
	else
		return b;
}

/*Obtiene el promedio de 3 calificaciones*/
float promedioAprobatorio(int calif1, int calif2, int calif3)
{
	float prom; //Promedio de las 3 calificaciones
	prom = (float) (calif1 + calif2 + calif3)/3;
	return prom;
}


/*************************************************************
*****                      UNIDAD 4                      *****
**************************************************************/
/*Menu de la unidad 4*/
void unidad4()
{
	int key; //Tecla presionada por el usuario

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
        
        int numFunc; //Valores regresados por una funcion
        int num, num1, num2, num3; //Valores a enviar a una funcion
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
				system("color 07"); //Regresa el color de la consola al estandar
		    	break;
		    case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC) system("pause");
		
		system("cls");

	} while(key != ESC);
}

/*Regresa 1 si (X >= 0), o 0 si no lo es*/
int validacion0(int num)
{
	if(num >= 0)
		return 1;
	else
		return 0;
}

/*Regresa 1 si (0 <= X <= 100), o 0 si no lo es*/
int validacion100(int num)
{
	if(num >= 0 && num <= 100)
		return 1;
	else
		return 0;
}

/*Regresa el numero mayor entre 'a' y 'b'; o 'b' si son iguales*/
int mayorDos(int num1, int num2)
{
	if(num1 > num2)
		return num1;
	else
		return num2;
}

/*Regresa 1 si X es par o 0 si no lo es*/
int validacionPar(int num)
{
	if(num % 2 == 0)
		return 1;
	else
		return 0;
}

/*Regresa 1 si X es multiplo de tres o 0 si no lo es*/
int validacionMultiploTres(int num)
{
	if(num % 3 == 0)
		return 1;
	else
		return 0;
}

/*Regresa el menor de 3 numeros o el 3ro si son iguales*/
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

/*Regresa X^2 si X es par, o X^3 si no lo es*/
int cuadradoCubo(int num)
{
	if(validacionPar(num) == 1)
		return num * num;
	else
		return num * num * num;
}

/*Recibe 3 lados y regresa:
    0 si no forman un triangulo.
    1 si es triangulo equilatero.
    2 si es triangulo escaleno.
    3 si es triangulo isoceles.
*/
int tipoTriangulo(int lado1, int lado2, int lado3)
{
    //La suma de dos lados debe ser mayor al lado restante para ser un triangulo
	if( (lado1 + lado2) > lado3 && (lado2 + lado3) > lado1 && (lado3 + lado1) > lado2)
	{
		if(lado1 == lado2 && lado1 == lado3) //Equilatero
			return 1;
		else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)//Isosceles
			return 2;
		else //Escaleno
			return 3;
	}
	else //No es un triangulo
		return 0;
}

/*Cambia el color del texto en la consola en base a la seleccion del usuario*/
void colores()
{
	int color; //Color seleccionado por el usuario
	int n = 0; //Numero de ciclo
	
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
		
		if(n == 0) //Realiza una captura inical
		{
			scanf("%d", &color);
			n++;
		}
        
        //Cambia los colores de la consola
		switch(color)
		{
			case 1:
				system("color 70");
				puts("Negro");
				break;
			case 2:
				system("color 01");
				puts("Azul");
				break;
			case 3:
				system("color 02");
				puts("Verde");
				break;
			case 4:
				system("color 03");
				puts("Aqua");
				break;
			case 5:
				system("color 04");
				puts("Rojo");
				break;
			case 6:
				system("color 05");
				puts("Purpura");
				break;
			case 7:
				system("color 06");
				puts("Amarillo");
				break;
			case 8:
				system("color 07");
				puts("Blanco");
				break;
			case 9:
				system("color 08");
				puts("Gris");
				break;
			case 10:
				system("color 09");
				puts("Azul claro");
				break;
			case 11:
				system("color 0A");
				puts("Verde claro");
				break;
			case 12:
				system("color 0B");
				puts("Aqua claro");
				break;
			case 13:
				system("color 0C");
				puts("Rojo claro");
				break;
			case 14:
				system("color 0D");
				puts("Purpura claro");
				break;
			case 15:
				system("color 0E");
				puts("Amarillo claro");
				break;
			case 16:
				system("color 0F");
				puts("Blanco brillante");
				break;
			case 0: //ESC
				break;
			default:
				puts("Error! Su seleccion no corresponde a un triangulo!");
				puts("Intentelo de nuevo.");
				break;
		}

		if(color != 0) //Mientras no presiones ESC
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
/*Menu de la unidad 5*/
void unidad5()
{
	int key; //Tecla presionada por el usuario

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
		fflush(stdin);
		
		int num1, num2; //Numeros capturados por el usuario.
		int total; //Total regresado por las funciones
		
		switch(key)
		{
			case '1':
				secuenciaNumerica();
				break;
			case '2':
			    int fact; //Valor factorial de n
			    
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
		        float prom; //Promedio de los numeros generados al azar
		        
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

		if(key != ESC) system("pause");
		
		system("cls");

	}while(key != ESC);
}

/*Imprime la secuencia [1-3-6-10-15-21-28-36-45-55]*/
void secuenciaNumerica()
{
	int sum = 0;//Acumulado
	
	for(int i = 1; i < 11 ;i++)
	{
		sum += i;
		printf("%d \n", sum);
	}
}

/*Regresa el factorial del numero que recibe*/
int factorial(int num)
{
	/*Validacion*/
	while(validacion0(num) == 0) //while(num < 0)
	{
		errorCaptura();
		scanf("%d", &num);
	}

	/*Factorial*/
	int fact = 1; //Valor del factorial
	
	if(num < 2)//Para 1! y 0!
		fact = 1;
	else
	{
		for(int i = num; i > 1; i--) //(1!) = 1; no tiene punto en multiplicar por 1.
		{
			fact *= i;
		}
	}

	return fact;
}

/*Suma 5 numeros pares*/
int sumaPares()
{
	int sum = 0; //Suma total
	int num; //Numero capturado por el usuario
	
	for(int i = 0; i < 5; i++)
	{
		printf("Introduzca el valor par #%d a sumar\n", i+1);
		scanf("%d", &num);

		while(validacionPar(num) == 0) //while(n%2 != 0)
		{
			errorCaptura();
			scanf("%d", &num);
		}

		sum += num;
	}

	printf("Total = %d\n", sum);
}

/*Imprime 20 numeros al azar en el rango [500 <= X <= 1000]*/
int random20()
{
	int num; //numero generado
	
	srand(time(NULL)); //Random seed
	for(int i = 0; i < 20; i++)
	{
		num = rand()%501 + 500; //Rango [500 <= X <= 1000]
		printf("[(%.2d)] Numero generado = %d\n", i+1, num);
	}
}

/*Genera n numeros al azar en el rango [0 <= X <= 100] y obtiene su promedio*/
float promRandom(int val)
{
	int num; //Numero generado al azar
	int sum = 0; //Acumulado de los numeros generados
	float prom; //Promedio de los numeros generados
	
	srand(time(NULL)); //Random seed
	for(int i = 0; i < val; i++)
	{
		num = rand()%101; //Rango [0 <= X <= 100]
		printf("[%.2d] Numero generado = %d\n", i+1, num);
		sum += num;
	}

	prom = (float) sum / val;
	return prom;
}

/*Suma dos numeros mayores o iguales a 0*/
int sumaMayor0(int a, int b)
{
	while(validacion0(a) == 0 || validacion0(b) == 0) //while(a < 0 || b < 0)
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

/*Suma dos numeros mayores o iguales a 0 y menores o iguales que 100*/
int suma100(int a, int b)
{
	while(validacion100(a) == 0 || validacion100(b) == 0) //while(a<0 || a>100 || b<0 || b>100)
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

/*Captura n numeros y obtiene su promedio*/
void promX()
{
    int num; //Numero capturado por el usuario
    int i = 0; //Cantidad de numeros capturados
    int sum = 0; //Suma de los numeros capturados
    float prom; //Promedio de los numeros capturados
    char key; //Tecla presionada por el usuario
    
    do{
        puts("Capture un numero entero a acumular: ");
        scanf("%d", &num);
        
        sum+=num;
        i++;
      
        puts("Presione [s] para seguir sumando u otra tecla para obtener el promedio.");
        key = _getch();
        puts(""); // \n
    }while(key == 's' || key == 'S');
   
    prom = (float) sum/i;
    printf("\nPromedio = %.2f\n", prom);
}

/*Captura n calificaciones y obtiene su promedio*/
void promCalif()
{
    int calif; //Calificacion capturada por el usuario
    int i = 0; //Cantidad de calificaciones capturadas
    int sum = 0; //Suma de las calificaciones capturadas
    float prom; //Promedio de las calificaciones capturadas
    char key; //Tecla presionada por el usuario
    
    do{
        puts("Capture una calificacion entre 0 y 100 para acumular: ");
        scanf("%d", &calif);
        
        while(validacion100(calif) == 0) //while(calif < 0 || calif > 100)
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
        puts("");// \n
    }while(key == 's' || key == 'S');
   
    prom = (float) sum/i;
    printf("\nPromedio = %.2f\n", prom);
}

/*Cronometro con formato HH:MM:SS. Marca el tiempo hasta que el usuario presiona ESC.*/
void cronometro()
{
    int key = 0; //Tecla presionada oir el usuario
	int hr = 0; //Horas
	int min = 0; //Minutos
	int seg = 0; //Segundos
	int ms = 0; //Milisegundos
	
	while(key != ESC) //Ciclo infinito hasta que se presione ESC
	{
		hr = 0; //Reinicia horas
		
		while(key != ESC && hr < 24)
		{
			min = 0; //Reinicia minutos
			
			while(key != ESC && min < 60)
			{
				seg = 0; //Reinicia segundos
				
				while(key != ESC && seg < 60)
				{
					ms = 0; //Reinicia millis
					
					//Reducir o aumentar la precision en la captura de ESC puede causar bugs.
					while(key != ESC && ms < 100)
					{
					    //Imprime el cronometro actual.
						printf("\r%.2d:%.2d:%.2d",hr,min,seg);
						
						//Si se presiona una tecla, verifica cual fue.
						if(_kbhit())
							key = _getch();
							
						Sleep(10); //100 ciclos  x 10ms = 1000ms = 1Seg
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


/*************************************************************
*****                      UNIDAD 5                      *****
**************************************************************/
/*Menu de la unidad 6*/
void unidad6()
{
	int key; //Tecla presionada por el usuario

	do
	{
		printf("Seleccione una programa: \n\n");
		printf("[1] Captura una cadena y cambia su ultima letra por mayuscula.\n\n");
		printf("[2] Recibe una cadena de maximo 30 elementos y los cambia por *'s. \n\n");
		printf("[3] Recibe una cadena de maximo 30 elementos y la convierte a mayusculas.  \n\n");
		printf("[4] Recibe un arreglo de maximo 50 elementos e imprime el numero de letras, \n");
		printf("y cuantas son A's.\n\n");
		printf("[5] Recibe arreglo de maximo 50 elementos, e imprime el numero de letras,\n");
		printf("espacios en blanco, signos de puntuacion y cuantas letras son 'e'. \n\n");
		printf("[6] Practica no. 11.\n\n");
		printf("[7] Imprime una matriz y su transpuesta.\n\n");
		printf("[8] Crea una matriz con diagonal superior de 1's y el resto de -1's. (. \n\n");
		printf("[9] Recibe una matriz de enteros de 5x5 e imprime la suma de sus columnas. \n\n");
		printf("[ESC] Regresar al menu principial. \n\n");
		
		key = _getch();
		system("cls");
		fflush(stdin);
		
		int num1, num2; //Numeros capturados por el usuario.
		int total; //Total regresado por las funciones
		
		switch(key)
		{
			case '1':
			    ultimaMayuscula();
				break;
			case '2':
			    char cad[20];
			    printf("Capture una cadena:\n");
			    gets(cad);
			    asteriscos(cad);
			    puts(cad);
				break;
			case '3':
			    char cad1[20];
			    printf("Capture una cadena:\n");
			    gets(cad1);
			    cadenaMayuscula(cad1);
			    puts(cad1);
				break;
			case '4':
			    char cad2[20];
			    printf("Capture una cadena:\n");
			    gets(cad2);
			    letrasA(cad2);
				break;
			case '5':
			    char cad3[20];
			    printf("Capture una cadena:\n");
			    gets(cad3);
			    contenidoCadena(cad3);
			    break;
			case '6':
			    practica11();
				break;
			case '7':
			    transpuesta();
				break;
			case '8':
			    matrizUnos();
				break;
			case '9':
			    int arr[5][5];
			    for(int i = 0; i < 5; i++)
			    {
			        for(int j = 0; j < 5; j++)
			        {
			            printf("Capture el valor en [%d][%d]: ", i, j);
			            scanf("%d", &arr[i][j]);
			        }
			    }
			    system("cls");
			    imprimirMatriz(arr);
			    printf("\n\n");
			    sumaColumnas(arr);
				break;
			case ESC:
				break;
			default:
				errorCaptura();
				break;
		}

		if(key != ESC) system("pause");
		
		system("cls");

	}while(key != ESC);
}

void ultimaMayuscula()
{
    char cad[20];
    int i;
    
    puts("Capture una cadena de max. 20 caracteres");
    gets(cad);
    for(i = 0; cad[i] != '\0'; i++);
    i--;
    
   
    while(isupper(cad[i]) == 0) //Mientras el ultimo elemento no sea mayuscula
    {
   		if(isalpha(cad[i]) && islower(cad[i])) //Si es una letra, y si es minuscula.
        	cad[i] = toupper(cad[i]);
        else //Recorre hacia atras la cadena, hasta que encuentre una letra.
        	i--;
   	}

    puts(cad);
}

void asteriscos(char cad[])
{
    for(int i = 0; cad[i] != '\0'; i++)
    {
        cad[i] = '*';
    }
}

void cadenaMayuscula(char cad[])
{
    for(int i = 0; cad[i] != '\0'; i++)
    {
        cad[i] = toupper(cad[i]);
    }
}

void letrasA(char cad[])
{
    int letras = 0;
    int a = 0;
    
    for(int i = 0; cad[i] != '\0'; i++)
    {
        if(isalpha(cad[i]))
        {
            letras++;
            if(cad[i] == 'a' || cad[i] == 'A')
                a++;
        }
    }
    
    printf("La cadena contiene %d letras y %d son a's\n", letras, a);
}

void contenidoCadena(char cad[])
{
    int i;
    int letras = 0;
    int e = 0;
    int espacios = 0;
    int puntuacion = 0;
    
    for(i = 0; cad[i] != '\0'; i++)
    {
        if(isalpha(cad[i]))
        {
        	letras++;
        	if(cad[i] == 'e' || cad[i] == 'E')
            	e++;
        }
        else if(cad[i] == ' ')
            espacios++;
        else if(ispunct(cad[i]))
            puntuacion++;
    }
    
    printf("La cadena contiene:\n");
    printf("\t%d letras\n", letras);
    printf("\t%d espacios en blanco\n", espacios);
    printf("\t%d signos de puntuadcion\n", puntuacion);
    printf("\t%d letras 'e'\n", e);
}

void transpuesta()
{
    int arr[5][5] = {   { 45, -2,  -3,   6,  41},
                        { 33,  7,  53,  73,  11},
                        { -3, 15, -80,  95, -56},
                        {  9,  5,  22,  32,  54},
                        {-45, 99,  12, -61, -33}
                    };
    int temp; 
    
    //Imprime la matriz
    imprimirMatriz(arr);
    
    //Cambia la matriz por su transpuesta
    for(int i = 1; i < 5; i++)
    {
        for(int j = 0; j < i; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n\n\nTranspuesta:\n\n");
    imprimirMatriz(arr);
}

void matrizUnos()
{
    int arr[50][50];
    
    //Produce matriz de 50x50
    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 50; j++)
        {
            if(j >= i)
                arr[i][j] = 1;
            else
                arr[i][j] = -1;
        }
    }   

    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 50; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

void sumaColumnas(int arr[5][5])
{
    for(int j = 0; j < 5; j++)
    {
        int suma = 0;
        for(int i = 0; i < 5; i++)
        {
            suma += arr[i][j];
        }
        printf("La suma en la columa %d = %d\n", j, suma);
    }
}

void imprimirMatriz(int arr[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("[%d]\t", arr[i][j]);
        }
        printf("\n");
    }
}


/*************************************************************
*****           Funciones de la practica 11              *****
**************************************************************/
void practica11()
{
	int lista[10] = {0,0,0,0,0,0,0,0,0,0};
	char key; //Opcion seleccionada por el usuario.

	do{
		system("cls");
		/*Menu principal*/
		puts("Seleccione una opcion: \n");
		puts("[1] Capturar lista desde el teclado.\n");
		puts("[2] Llenar lista con numeros aleatorios en el rango de 0 al 100.\n");
		puts("[3] Imprimir lista en pantalla.\n");
		puts("[4] Ordenar lista de menor a mayor.\n");
		puts("[5] Ordenar lista de mayor a menor.\n");
		puts("[6] Calcular la suma de la lista.\n");
		puts("[7] Calcular el promedio de la lista.\n");
		puts("[ESC] Salir.\n");
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

			case ESC: //Salir del programa
				break;

			default: //error
				puts("Opcion incorrecta!!");
				break;
		}
		
		if(key != ESC)
			system("pause");

	} while(key != ESC);
}

/*Captura luna lista*/
void capturarLista(int lista[])
{
	for(int i = 0; i < 10; i++)
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
	for(int i = 0; i < 10; i++)
	{
		lista[i] = rand()%101;
	}
	puts("Lista generada!!");
}

/*Imprime la lista actual*/
void imprimirLista(int lista[])
{
	puts("Elementos en la lista:");
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", lista[i]);
	}
}

/*Ordena una lista de 10 numeros de menor a mayor*/
void ordenarAscendente(int lista[])
{
	int temp;

	for (int i = 0; i < (10-1); i++)
	{
		for(int j = 1; j < (10-i); j++)
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

/*Ordena una lista de 10 numeros de mayor a menor*/
void ordenarDescendente(int lista[])
{
	int temp;

	for (int i = 0; i < (10-1); i++)
	{
		for(int j = 1; j < (10-i); j++)
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
	for(int i = 0; i < 10; i++)
	{
		sumatoria += lista[i];
	}
	printf("La suma de los elementos es: %d\n", sumatoria);
}

/*Calcula el promedio de los elementos de la lista*/
void promedio(int lista[])
{
	int sumatoria = 0;

	for(int i = 0; i < 10; i++)
	{
		sumatoria += lista[i];
	}
	float prom = (float) sumatoria/10;
	printf("La suma total es igual a %.2f\n", prom);
}
