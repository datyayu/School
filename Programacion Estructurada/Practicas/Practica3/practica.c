#include "./practica.h"


/** getString
 * Captura un string con el input del usuario de n caracteres y
 * limpia el newline.
 * @param  	int 	size 	Numero de caracters que contendra el 
 *               			string. Toma en cuenta el '\0'.
 * @return	char*	      	Puntero en memoria dinamica del string 
 *                      	guardado.
 */
char* getString(int size)
{
	char *tempStr;
	
	/* Captura el input del usuario */
	tempStr = (char*) malloc(size*sizeof(char));
	fflush(stdin);
	fgets(tempStr, size,stdin);
	cleanStr(tempStr);
	
	return tempStr;
}


/** getNumber
 * Captura un numero introducido desde el usuario.
 * @param  int 		digits 	Numero de digitos del numero a capturar.
 * @return     				Numero introducido por el usuario.
 */
int getNumber(int digits)
{
	int tempNumber;
	char *tempStr;
	
	tempStr = getString(digits+1);
	sscanf(tempStr, "%d", &tempNumber);
	free(tempStr);

	return tempNumber;
}


/** cleanStr
 * Remueve el newline ('\n') al final de un string.
 *
 * @param	char*	str 	String a limpiar.
 */
void cleanStr(char *str)
{
	int strEnd = strlen(str) - 1; //Evita el '\0'

    if(str[strEnd] == '\n') str[strEnd] = '\0';
}
