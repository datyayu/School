#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int numeroCaracteres(char arreglo[]);
void convertirCadena();
void convertirCType(char arreglo[]);
int validar(char arreglo[]);

/*Funcion Principal*/
int main()
{
    char opcion;
    do
    {
        system("cls");
        printf("Seleccione una opcion:\n\r");
        printf("[a] Numero de caracteres en un arreglo\n\r");
        printf("[b] Convetir cadena a *'s\n\r");
        printf("[c] Cambiar mayusculas y minusculas, numeros por %c y signos por %c\n\r",1,184);
        printf("[esc] Salir del programa");
        opcion = _getch();

        switch(opcion)
        {
            case 'a':
                system("cls");
                int n;
                char str[20];
                printf("Capture un arreglo menor o igual a 10 caracteres\n\r");
                gets(str);
                while(validar(str) != 1) //Si la cadena es mayor a 10 caracteres
                {
                    printf("\n\rError. Capture de nuevo\n\r");
                    gets(str);
                }
                n = numeroCaracteres(str);
                printf("\n\r\n\rNumero de caracteres = %d\n\r", n);
                printf("\n\r\n\r");
                break;

            case 'b':
                system("cls");
                convertirCadena();
                printf("\n\r\n\r");
                break;

            case 'c':
                system("cls");
                char st[20];
                printf("Capture un arreglo menor o igual a 10 caracteres\n\r");
                gets(st);
                while(validar(st) != 1) //Si la cadena es mayor a 10 caracteres
                {
                    printf("\n\rError. Capture de nuevo\n\r");
                    gets(st);
                }
                convertirCType(st);
                printf("\n\r\n\r");
                break;


            case 27: //Esc
                printf("\n\rSaliendo del programa...\n\r");
                break;

            default: 
                printf("\n\rError");
                printf("\n\r\n\r");
                break;
        }
        system("pause");
    }
    while(opcion!=27); //Mientras no presione esc en el menu principal

    return 0;
}

/*Funcion para contar el numero de caracteres en un Arreglo*/
int numeroCaracteres(char arreglo[])
{
    int i;
    for(i = 0; arreglo[i] != '\0'; i++); //Contar hasta que termine la cadena
    return i;
}

/*Funcion para convertir una cadena a asteriscos ('*')*/
void convertirCadena()
{
    char str[20];
    printf("Capture un arreglo menor o igual a 10 caracteres\n\r");
    gets(str);
    while(validar(str) != 1) //Si la cadena es mayor a 10 caracteres
    {
        printf("\n\rError. Capture de nuevo\n\r");
        gets(str);
    }
    for(int i = 0; str[i]!='\0'; i++) //Remplaza cada elemento en la cadena por '*'
    {
        str[i] = '*';
    }
    puts(str);
}


/*Funcion para convertir una cadena de acuerdo a reglas especificas*/
void convertirCType(char arreglo[])
{
    for(int i = 0; arreglo[i] != '\0'; i++)
    {
        if(isupper(arreglo[i]))                  //Si es una mayusculas
            arreglo[i] = tolower(arreglo[i]);    //-->Minusculas
        else if(islower(arreglo[i]))             //Si es una minusculas
            arreglo[i] = toupper(arreglo[i]);    //-->Mayusculas
        else if(isdigit(arreglo[i]))             //Si es un digito
            arreglo[i] = 1;                      //-->☺
        else if(ispunct(arreglo[i]))             //Si es un signo de puntuacion
            arreglo[i] = 184;                    //-->╕
    }
    puts(arreglo);
}

/*Funcion para validar si una cadena es menor o igual a 10 elementos*/
int validar(char arreglo[])
{
    int n=0;
    for(int i = 0; arreglo[i]!='\0'; i++)
    {
        n++;
    }
    if(n < 11)
        return 1;
    else
        return 0;
}
