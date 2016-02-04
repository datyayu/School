#include <stdio.h>
#include <stdlib.h>

/* Custom modules */
#include "colors.h"
#include "questions.h"
#include "errors.h"

/* Custom keywords */
#define RESERVED 1
#define AVAILABLE 0
#define FALSE 0
#define TRUE 1
typedef int bool;

/**
 * Theater.
 * Modelo de la sala.
 */
typedef struct {
  int** seats;
  int columns;
  int rows;
} Theater;


/*********************
 **    FUNCIONES    **
 *********************/

/* Interfaz con Theater */
Theater createTheater(int columns, int rows);
void showTheater(Theater theater);
void deleteTheater(Theater theater);

/* Validaciones */
bool isSeatAvailable(Theater theater, Position pos);
bool isValidSeat(Theater theater, Position pos);

/* Mutaciones */
Error reserveSeat(Theater theater, Position pos);
Error cancelSeat(Theater theater, Position pos);
