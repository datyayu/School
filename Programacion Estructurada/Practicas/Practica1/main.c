#include <stdio.h>
#include <string.h>


void capturarDatos(char **preguntas, char **datos, int numDatos);
void limpiarStr(char *str);
void imprimir(char **etiquetas, char **valores, int numEtiquetas);

int main()
{
    int numDatos = 5;
    char marca[20], modelo[20], subModelo[20], ano[20], precio[20];
    char *etiquetas[] = {
        "Marca    ",
        "Modelo   ",
        "Submodelo",
        "Ano      ",
        "Precio   "
    };
    char *datos[] = {
        marca,
        modelo,
        subModelo,
        ano,
        precio
    };
    char *preguntas[] = {
        "Ingrese la marca del auto:",
        "Ingrese el modelo del auto:",
        "Ingrese el submodelo del auto:",
        "Ingrese el ano del auto:",
        "Ingrese el precio del auto:"
    };

    capturarDatos(preguntas, datos, numDatos);
    puts("\n\nLos datos de su auto son: ");
    imprimir(etiquetas, datos, numDatos);

    return 0;
}

/** capturarDatos
 * Captura datos desde el usuario.
 *
 * @param	char**	preguntas	Array de strings conteniendo las preguntas en
 *               				el orden en que se le mostraran al usuario.
 * @param	char**	datos 		Array de strings en el cual se desea guardar
 *               		   		los datos.
 * @param	int    	numDatos	Numero entero de datos a preguntar.
 */
void capturarDatos(char **preguntas, char **datos, int numDatos)
{
	//Captura cada par [dato-pregunta].
	int i;
	for (i = 0; i < numDatos; ++i)
	{
		puts(preguntas[i]);
		fflush(stdin);
		fgets(datos[i], 20, stdin);
		limpiarStr(datos[i]); // Limpia el newline de fgets.
	}
}

/** limpiarStr
 * Remueve el newline ('\n') al final de un string.
 *
 * @param	char*	str 	String a limpiar.
 */
void limpiarStr(char *str)
{
	int strEnd = strlen(str) - 1; //Evita el '\0'

    if(str[strEnd] == '\n')
    {
    	str[strEnd] = '\0';
    }
}

/** capturarDatos
 * Imprime los datos del usuario.
 *
 * @param	char**	etiquetas	Array de strings conteniendo las etiquetas a
 *                              mostrar.
 * @param	char**	datos 		Valores especificos del usuario corresponidentes
 *                              a las etiquetas.
 * @param	int    	numDatos	Numero entero de datos a imprimir.
 */
void imprimir(char **etiquetas, char **datos, int numEtiquetas)
{
    int i;

    for (i = 0; i < numEtiquetas; i++)
    {
        printf("%s: \t %s \n", *(etiquetas+i), *(datos+i));
    }
}
