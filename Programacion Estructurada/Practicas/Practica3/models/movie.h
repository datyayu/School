#ifndef MOVIE_H
#define MOVIE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pelicula - Movie */
typedef struct Movies{
    char *title;
    char *director;
    char **actors;
    int numActors;
    int year;
    int id;
} Movie;

/* Catalogo de peliculas - MovieCollection */
typedef struct {
    Movie *movies;	// Arreglo de peliculas.
    int size;		// Numero de peliculas guardadas.
} MovieCollection;


void movie__extendMovieCollection(MovieCollection *catalog, int movie);
void movie__freeMovie(Movie *movie);

#endif // MOVIE_H
