#include "./movie.h"


/** movie__extendMovieCollection
 * Extiende un catalogo y realoca su posicion en memoria de acuerdo al 
 * nuevo taman_o.
 * @param  	MovieCollection 	catalog 	Catalogo a extender.
 * @param 	int 				movies 		Numero de entradas a 
 *                 							extender el catalogo.
 */
void movie__extendMovieCollection(MovieCollection *catalog, int movies)
{
	catalog->size = (catalog->size) + movies;
	catalog->movies = (Movie*) realloc(
		catalog->movies,
		sizeof(Movie)*(catalog->size)
	);
}


/** movie__freeMovie
 * Libera la memoria almacenada por las cadenas de texto en un struct
 * de tipo Movie.
 * @param 	Movie 				movie 		Struct Movie a liberar.
 */
void movie__freeMovie(Movie *movie)
{
    int i;

	free(movie->title);
	free(movie->director);

	for(i = 0; i < (movie->numActors); i++)
	{
		free(movie->actors[i]);
	}

	free(movie->actors);
}
