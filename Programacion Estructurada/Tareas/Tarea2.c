#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Constantes booleanas. 
#define FALSE 0
#define TRUE 1
// Constantes para facilitar el uso de un array para tratar los datos.
#define NOMBRE 0
#define APELLIDOPATERNO 1
#define APELLIDOMATERNO 2
#define GENERO 3
#define ANO 4
#define MES 5
#define DIA 6
#define ENTIDAD 7

// Funciones Base.
void capturarDatos(char **preguntas, char **datos, int numDatos);
void calcularRFC(char *rfc, char **datos);
void calcularCurp(char *curp, char **datos);

// Utilidades.
void limpiarStr(char *str);
char primeraLetraInterna(char *str, int vocal);
char strInverso(char *str, int n);


int main()
{
	int numDatos = 8;	
	// Placeholders para los datos del usuario.
	char curp[17], rfc[11];
	char nombre[20], apellidoPaterno[20], apellidoMaterno[20],
		 genero[20],  ano[20], mes[20], dia[20], entidad[20];
	// Array para facilitar el manejo de los datos.
	char *datos[] = {
		nombre,
		apellidoPaterno,
		apellidoMaterno,
		genero,
		ano,
		mes,
		dia,
		entidad
	};
	// Array de strings de preguntas al usuario.
	char *preguntas[] = {
		"Introduzca su(s) nombre(s):",
		"Introduzca su apellido paterno:",
		"Introduzca su apellido materno:",
		"Introduzca la letra de su genero (H:Hombre / M:Mujer):",
		"Introduzca el año de su fecha de nacimiento:",
		"Introduzca el mes de su fecha de nacimiento (dos digitos):",
		"Introduzca el dia de su fecha de nacimiento (dos digitos):",
		"Introduzca su entidad federativa natal (2 caracteres): "
	};

	capturarDatos(preguntas, datos, numDatos);
	calcularCurp(curp, datos);
	calcularRFC(rfc, datos);

	printf("Su RFC es: %s + su homoclave\n", rfc);
	printf("Su CURP es: %s + su homoclave\n", curp);

	return 0;
}

/** capturarDatos
 * Funcion para capturar datos del usuario.
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

/** calcularRFC
 * Calcula el RFC para personas fisicas en base a los criterios proveidos en:
 * http://losimpuestos.com.mx/calcular-rfc/
 * 
 * @param	char* 	curp	String donde se desea guardar el RFC.
 * @param	char**	datos 	Array que incluya los datos necesarios para poder
 *               			generar el RFC en el siguiente orden:
 *               			nombre, nombre, apellidoPaterno, apellidoMaterno, 
 *               			genero (o algun valor nulo), ano, mes y dia de 
 *               			nacimiento.
 */
void calcularRFC(char *rfc, char **datos)
{
	// Primera letra del apellido paterno.
	rfc[0] = datos[APELLIDOPATERNO][0];
	// Primera vocal interna del apellido paterno.
	rfc[1] = primeraLetraInterna(datos[APELLIDOPATERNO], TRUE);
	// Primera letra del apellido materno.
	rfc[2] = datos[APELLIDOMATERNO][0];
	// Primera letra del nombre.
	rfc[3] = datos[NOMBRE][0];
	// Ano de nacimiento. 
	rfc[4] = strInverso(datos[ANO], 2);
	rfc[5] = strInverso(datos[ANO], 1);
	//Mes de Nacimiento.
	rfc[6] = strlen(datos[MES]) > 1 ? datos[MES][0] : '0';
	rfc[7] = strInverso(datos[MES], 1);
	//Dia de Nacimiento.
	rfc[8] = strlen(datos[DIA]) > 1 ? datos[DIA][0] : '0';
	rfc[9] = strInverso(datos[DIA], 1);

	// Transforma los valores agregados al RFC a mayusculas.
	int i;
	for(i = 0; i < 10; i++)
	{
		rfc[i] = toupper(rfc[i]);
	}

	// Convierte el array de caracteres en un string valido.
	rfc[10] = '\0';
}

/** calcularCurp
 * Calcula la curp en base a los criterios proveidos en la pagina oficial:
 * http://consultas.curp.gob.mx/CurpSP/html/informacionecurpPS.html.
 * 
 * @param	char* 	curp	String donde se desea guardar la curp.
 * @param	char**	datos 	Array que incluya los datos necesarios para poder
 *               			generar la curp en el siguiente orden:
 *               			nombre, nombre, apellidoPaterno, apellidoMaterno,
 *               			genero, ano, mes, dia y entidad de nacimiento.
 */
void calcularCurp(char *curp, char **datos)
{
	// Calcula primero el RFC, puesto que la primera parte de la curp es la
	// misma que la del RFC.
	calcularRFC(curp, datos);

	//Genero.
	curp[10] = datos[GENERO][0];

	//Entidad Federatova
	curp[11] = datos[ENTIDAD][0];
	curp[12] = datos[ENTIDAD][1];
	
	// Primera consonante interna del primer apellido.
	curp[13] = primeraLetraInterna(datos[APELLIDOPATERNO], FALSE);
	// Primera consonante interna del segundo apellido.
	curp[14] = primeraLetraInterna(datos[APELLIDOMATERNO], FALSE);
	// Primera consonante interna del nombre.
	curp[15] = primeraLetraInterna(datos[NOMBRE], FALSE);

	// Transforma los valores agregados al RFC a mayusculas.
	int i;
	for(i = 10; i < 16; i++)
	{
		curp[i] = toupper(curp[i]);
	}

	// Convierte el array de caracteres en un string valido.
	curp[16] = '\0'; 
}

/** limpiarStr
 * Remueve el newline ('\n') de un string.
 * 
 * @param	char*	str 	String a limpiar.
 */
void limpiarStr(char *str)
{
	//TODO: Remover tambien whitespaces.
	int strEnd = strlen(str) - 1;

    if(str[strEnd] == '\n')
    {
    	str[strEnd] = '\0';
    }
}

/** primeraLetraInterna
 * Obtiene la primera concurrencia de una vocal o una consonante en un string,
 * sin tomar en cuenta la primera posicion.
 * @param	char*	str   	String a evaluar.
 * @param  	int  	vocal 	El equivalente entero a un booleano para indicar si
 *                			se desea encontrar una vocal o una consonante 
 *                			(TRUE = vocal, FALSE = consonante).
 * @return					El primer caracter encontrado, o '\0' en caso de no
 *                			haber encontrado ninguno.
 */
char primeraLetraInterna(char *str, int vocal)
{
	int i;

	if(vocal)
	{
		for(i = 1; str != '\0'; i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
				str[i] == 'o' || str[i] == 'u')
			{
				return str[i];
			}
		}
	}
	else
	{
		for(i = 1; str != '\0'; i++)
		{
			if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && 
				str[i] != 'o' && str[i] != 'u')
			{
				return str[i];
			}
		}
	}

	return '\0';
}

/** strInverso
 * Permite obtener el caracter en una posicion determinada del string, pero
 * recorriendola de fin a principio (similar al a[-n] de otros lenguajes).
 * @param	char*	str 	String a recorrer.
 * @param	int 	pos		Numero de lugares a desplazarse desde el final 
 *             				(contando el '\0' al final del string como la
 *             				posicion 0).
 * @return char      		Caracter encontrado en la posicion especificada.
 */
char strInverso(char *str, int pos)
{
	int i;
    for(i = 0; str[i] != '\0'; i++); // Obtiene el tamano del string.

    return str[i - pos];
}