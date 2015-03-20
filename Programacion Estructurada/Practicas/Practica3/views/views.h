#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../models/movie.h"
#include "../practica.h"


int  views__renderMenu(MovieCollection *catalog);
void views__addMovie(MovieCollection *catalog);
void views__movieCollectionView(MovieCollection *catalog);
void views__movieView(Movie *movie);
