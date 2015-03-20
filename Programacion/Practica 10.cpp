#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validar(char cad[]);
void capturaCadena(char pass[]);

int main()
{
    int contrasenaCorrecta = 0;
    while(contrasenaCorrecta != 1)
    {
        system("cls");
        char cad1[100];
        char cad2[100];
        puts("Capture su contrasena:");
        capturaCadena(cad1); //llamada a funcion captura cadena, se le envia como parametro el arreglo declarado
        while(validar(cad1)!= 1)
        {
            printf("\nError, la contrasena debe de tener 7 caracteres");
            printf(" y por lo menos tener un numero,una letra mayuscula y una minuscula");
            printf("\nCapture de nuevo: \n");
            capturaCadena(cad1);
        }
        printf("\nCapture otra vez su contrasena: \n");
        capturaCadena(cad2);
        if(strcmp(cad1,cad2)==0)
        {
            printf("\nContrasena registrada!!\n");
            contrasenaCorrecta = 1;
            system("pause");
        }
        else
        {
            printf("\nContrasena incorrecta! Intentelo de nuevo. \n");
                    system("pause");
        }
    }

    return 0;
}

void capturaCadena(char pass[])
{
    char tecla, ENTER = 13, bs = 8;
    int cont = 0;
    while (true)
    {
        tecla=_getch();
        if(tecla==ENTER)
        {
            break;
        }
        else if(tecla != bs)
        {
            pass[cont]=tecla; //se asigna el caracter capturado a una posicion del arreglo
            printf("%c",'*');//imprime el caracter capturado
            cont++;
        }
        else
        {
            if(cont > 0)
            {
                cont--;
                printf("\b \b");
            }
            pass[cont] = '\0';
        }
    }
}

int validar(char cad[])
{
    int len = 0, num = 0, low = 0, upp = 0;
    if(strlen(cad) == 7)
    {
        len=1;
    }
    for(int i = 0; i < 7; i++)
    {
        if(isupper(cad[i]))
        {
            upp = 1;
        }
        else if(islower(cad[i]))
        {
            low = 1;
        }
        else if(isdigit(cad[i]))
        {
            num = 1;
        }
    }
    if(len == 1 && num == 1 && low == 1 && upp == 1)
        return 1;
    else
        return 0;
}
