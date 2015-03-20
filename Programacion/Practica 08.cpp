#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

void menuPrincipal();

/******  PROTOTIPOS UNIDAD II  *********/
   void menuUnidadII();
   void switchUnidadII();
   void calRectangulo();
   void calTriangulo();
/******  FIN PROTOTIPOS UNIDAD II *****/

/******  PROTOTIPOS UNIDAD III  *********/
   void switchUnidadIII();
   void menuUnidadIII();
   float calculaImpuesto10(float precio);
   double potencia2(int numero);
/******  PROTOTIPOS UNIDAD III *********/

/*****      FUNCION PRINCIPAL       *****/
int main(){
   int opcion;
do{
   system("cls");        //LIMPIAR PANTALLA
   system("color 0A");   //DAR COLOR AL FONDO Y TEXTO
   menuPrincipal();
   opcion=_getch();
      switch(opcion){
			case 'a': switchUnidadII();
						 break;
			case 'b': switchUnidadIII();
						 break;
			case 27:  printf("\n\n\rSALIDA DEL PROGRAMA...\n\r");  //EL NUMERO 27, ES EL CÓDIGO ASCII DE LA TECLA [ESC]
						 break;
			default:  printf("\n\n\rOPCION NO VALIDA\n\r");
                   system("pause");    //DETIENE EL PROGRAMA HASTA QUE SE PRESIONE UNA TECLA
						 break;
      }
}while (opcion!=27); //HARÁ LO ANTERIOR MIENTRAS NO SE PRESIONE LA TECLA [ESC]
   return 0;
}
/*****     FIN DE LA FUNCION PRINCIPAL      *****/

void menuPrincipal(){
   printf("\t*** PROGRAMACION ***");
   printf("\n\n\r[a] UNIDAD II  - PROGRAMACION BASICA");
   printf("\n\r[b] UNIDAD III - FUNCIONES");
   printf("\n\r[ESC] SALIR");
   printf("\n\n\rSELECCIONE UNA OPCION: ");
}

/********************** FUNCIONES DE LA UNIDAD II **********************/

void menuUnidadII(){
   printf("\t*** UNIDAD II  - PROGRAMACION BASICA ***");
   printf("\n\n\r[a] CALCULAR EL AREA DE UN RECTANGULO");
   printf("\n\r[b] CALCULAR EL AREA DE UN TRIANGULO");
   printf("\n\r[ESC] REGRESAR A MENU PRINCIPAL");
   printf("\n\n\rSELECCIONE UNA OPCION: ");
}

void switchUnidadII(){
char opcion;
do{
   system("cls");
   system("color 0B");// color background,texto
   menuUnidadII();
   opcion=_getch();
      switch(opcion){
			case 'a': system("cls");
			          calRectangulo();
						 break;
			case 'b': system("cls");
			          calTriangulo();
						 break;
			case 27:  printf("\n\n\rREGRESANDO AL MENU PRINCIPAL...\n\r");
						 break;
			default:  printf("\n\n\rOPCION NO VALIDA\n\r");
						 break;
      }
   system("pause");
}while (opcion!=27);
}

void calRectangulo(){         //FUNCION PARA CALCULAR EL AREA DE UN RECTANGULO
	int base,altura,area;
        printf("CAPTURA LA BASE DEL RECTANGULO: ");
        scanf("%d",&base);
        printf("CAPTURA LA ALTURA DEL RECTANGULO: ");
        scanf("%d",&altura);
        area=base*altura;
        printf("\n\rEL AREA DEL RECTANGULO ES = %d\n\r",area);
}
void calTriangulo(){          //FUNCION PARA CALCULAR EL AREA DE UN TRIANGULO
	float base,altura,area;
      printf("CAPTURA LA BASE DEL TRIANGULO:");
      scanf("%f",&base);
		printf("CAPTURA LA ALTURA DEL TRIANGULO:");
		scanf("%f",&altura);
		area=base*altura/2;
		printf("\n\rEL AREA DEL TRIANGULO ES = %f\n\r",area);
}
/********************** FIN DE FUNCIONES DE LA UNIDAD II **********************/

/********************** FUNCIONES DE LA UNIDAD III **********************/
void menuUnidadIII(){
   printf("\t*** UNIDAD III  - FUNCIONES ***");
   printf("\n\n\r[a] RECIBE PRECIO, LE APLICA EL 10% DE IMPUESTO Y DEVUELVE EL RESULTADO");
   printf("\n\r[b] RECIBE UN NUMERO ENTERO, LO ELEVA AL CUADRADO Y DEVUELVE EL RESULTADO");
   printf("\n\r[ESC] REGRESAR A MENU PRINCIPAL");
   printf("\n\n\rSELECCIONE UNA OPCION: ");
}

void switchUnidadIII(){
char opcion;
do{
   system("cls");
   system("color 0C");// color background,texto
   menuUnidadIII();
   opcion=_getch();
      switch(opcion){
			case 'a': system("cls");
			          float precio,total;
			          printf("CAPTURA EL PRECIO DEL PRODUCTO: ");
                   scanf("%f",&precio);
                   total=calculaImpuesto10(precio);
                   printf("\n\rEL PRECIO TOTAL ES DE: %.2f\n\r",total);
						 break;

			case 'b': system("cls");
			          int numero;
			          double resultado;
                   printf("CAPTURA NUMERO: ");
                   scanf("%d",&numero);
                   resultado=potencia2(numero);
                   printf("\n\rEL CUADRADO DE %d ES = %g\n\r",numero,resultado);
						 break;

			case 27:  printf("\n\n\rREGRESANDO AL MENU PRINCIPAL...\n\r");
						 break;

			default:  printf("\n\n\rOPCION NO VALIDA\n\r");
						 break;
      }
   system("pause");
}while (opcion!=27);
}

 float calculaImpuesto10(float precio){  //FUNCION PARA CALCULAR EL 10% DE IMPUESTO
   float total;
      total=precio*1.1;
   return total;
}

double potencia2(int numero){           //FUNCION PARA ELEVAR AL CUADRADO UN NUMERO
	double resultado;
      resultado=pow(numero,2);
   return resultado;
}
/********************** FIN DE FUNCIONES DE LA UNIDAD III **********************/

