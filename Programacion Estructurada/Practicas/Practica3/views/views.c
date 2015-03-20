#include "./views.h"


/** views__renderMenu
 * Muestra el menu principal del programa y dirige a otras
 * vistas basado en el input del usuario
 * @param	char*				str 		String a limpiar.
 * @param  	MovieCollection 	catalog 	Catalogo a tratar.
 * @return	int                             0: Salir del programa.
 *             				      	        1: Continua con el programa.
 */
int views__renderMenu(MovieCollection *catalog)
{
	char option = '3'; // 3 <- Some random number != {0,1,2}

	/* Menu */
	while(option != '0' && option != '1' && option != '2')
	{
		printf("\n\nFICHEROS PARA PELICULAS\n");
		printf("Seleccione una opcion: \n");
		printf("0) Salir\n");
		printf("1) Agregar Fichero\n");
		printf("2) Mostrar Fichero\n");
		printf("\nEscriba su opcion: ");
		scanf(" %c", &option);
		if(option != '0' && option != '1' && option != '2')
			printf("ERROR! Seleccion incorrecta\n");
	}

	/* Salida */
	if(option == '0') return 0;

	/* Ejecuta la vista seleccionada */
	else if (option == '1') views__addMovie(catalog);
	else if (option == '2') views__movieCollectionView(catalog);

	/* Exito */
	return 1;
}


/** views__addMovie
 * Muestra la vista para capturar una nueva entrada.
 * @param 	MovieCollection 	catalog 	Catalogo en el cual se va a
 *                         					guardar la nueva entrada.
 */
void views__addMovie(MovieCollection *catalog)
{
    int i; // Iterador
	int id = catalog->size; //Posicion de la nueva pelicula

	/* fflush y fgets no funcionaron, THIS FUNC HERE IS DA REAL MVP. */
	getchar(); // NECESARIAMENTE INNECESARIA ( no jk :) )

	/* Extiende el catalogo por una pelicula*/
	movie__extendMovieCollection(catalog, 1);


	/* Captura los datos del nuevo fichero */
	printf("\nNUEVO FICHERO\n");

	/* ID */
	catalog->movies[id].id = catalog->size; 

	/* Titulo */
	printf("Nombre de la pelicula: ");
	catalog->movies[id].title = getString(50);
	
	/* Director */
	printf("Nombre del director: ");
	catalog->movies[id].director = getString(50);

	/* An_o */
	printf("An_o de publicacion: ");
	catalog->movies[id].year = getNumber(50);

	/* numero de actores */
	printf("Numero de actores: ");
	catalog->movies[id].numActors = getNumber(50);

	/* Actores */
	catalog->movies[id].actors    = (char**) calloc (catalog->movies[id].numActors, sizeof(char*));
	for(i = 0; i < catalog->movies[id].numActors; i++)
	{
		printf("Nombre del actor %.2d: ", (i+1));
		catalog->movies[id].actors[i] = getString(50);
	}


	printf("Fichero Guardado!\n");	
}


/** views__movieCollectionView
 * Muestra los titulos almacenadados en un catalogo y sus IDs.
 * @param 	MovieCollection 	catalog 	Catalogo a mostrar.
 */
void views__movieCollectionView(MovieCollection *catalog)
{
	printf("\nPeliculas guardadas: \n");
	printf("\n*****************************************\n");

	if( (catalog->size) > 0 ) // Si tiene peliculas guardadas
	{
		int i;		// Iterador
		int option; // Seleccion del usuario.

		for (i = 0; i < (catalog->size); i++)
		{
			printf( "\t %.3d %s \n", (catalog->movies[i].id),
									 	(catalog->movies[i].title) );
		}
		printf("*****************************************\n");
		printf("Seleccione el numero de fichero: ");
		scanf(" %d", &option);

		/* Muestra la informacion de la pelicula seleccionada */
		views__movieView( &(catalog->movies[option-1]) ); // -1 -> desface por pos[0]
	}
	else // Si no se han guardados peliculas
	{
		printf("No se encontraron peliculas\n");
		printf("*****************************************\n");
	}
}


/** views__movieView
 * Muestra la informacion dentro de un struct de tipo Movie.
 * @param 	Movie 				movie 		Pelicula cuya info se
 *                   						quiere mostrar.
 */
void views__movieView(Movie *movie)
{
	int i;

	printf("\n*****************************************\n");

	printf("ID:       \t %.3d \n", movie->id);
	printf("Titulo:   \t %s \n", movie->title);
	printf("Director: \t %s \n", movie->director);
	printf("An_o:     \t %d \n", movie->year);
	printf("Actores:  \n");

	if((movie->numActors) > 0) // Si hay actores
    {
        /* Foreach loop en actores, imprime cada uno */
        for (i = 0; i < (movie->numActors); ++i)
        {
            printf( "\tActor #%.2d: %s \n", (i+1), (movie->actors[i]) );
        }
    }
	else
	{
		printf("\tNo se encontraron actores\n");
	}

	printf("*****************************************\n");
}
