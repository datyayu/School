#include <stdio.h>
#include <stdlib.h>

#include "./models/movie.h"
#include "./views/views.h"


int main()
{
	int i;
	int status = 1; // Status del programa

	/* Collecion de peliculas */
	MovieCollection* catalog; 
	catalog = (MovieCollection*) malloc(sizeof(MovieCollection));
	catalog->movies = (Movie*) malloc(sizeof(Movie));
	catalog->size = 0;

	/* Muestra el programa */
	while(status == 1)
	{
		status = views__renderMenu(catalog);
	}

	/* Limpia la memoria */
	for(i = 0; i < catalog->size; i++) // Limpia pelicula por pelicula.
	{
		movie__freeMovie(&(catalog->movies[i]));
	}
	free(catalog->movies);
	free(catalog);

	return 0;
}
