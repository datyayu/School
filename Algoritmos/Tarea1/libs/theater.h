#include <stdio.h>
#include <stdlib.h>
#include "colors.h"
#include "questions.h"
#include "errors.h"

/* Custom keywords */
#define RESERVED 1
#define AVAILABLE 0
#define FALSE 0
#define TRUE 1
typedef int bool;

struct Theater {
  int** seats;
  int columns;
  int rows;
};

struct Theater createTheater(int columns, int rows);
void showTheater(struct Theater theater);
void deleteTheater(struct Theater theater);
bool isSeatAvailable(struct Theater theater, struct Position pos);
bool isValidSeat(struct Theater theater, struct Position pos);
Error reserveSeat(struct Theater theater, struct Position pos);
Error cancelSeat(struct Theater theater, struct Position pos);
