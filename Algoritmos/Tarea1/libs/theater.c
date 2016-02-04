#include "theater.h"


struct Theater createTheater(int columns, int rows)
{
    int col, row;
    struct Theater theater;

    // Set up Theater.
    theater.seats  = (int**) malloc((columns*rows)*sizeof(int));
    theater.columns = columns;
    theater.rows    = rows;

    // Allocate each row.
    for (col = 0; col < columns; col++) {
      // Alocate row.
      theater.seats[col] = (int*) calloc(rows, sizeof(int));
    }

    return theater;
}


void showTheater(struct Theater theater)
{
  if (theater.seats == NULL) return;

  int col, row;

  printf("   ");
  for (col = 0; col < theater.columns; col++) {
    printf(" %c ", 'A' + col);
  }
  printf("\n");

  for (row = 0; row < theater.rows; row++) {
    printf("%2d ", (1 + row));

    for (col = 0; col < theater.columns; col++) {
      if (theater.seats[col][row] == RESERVED) {
        printf(KRED "[X]" RESET);
      } else {
        printf(KGRN "[ ]" RESET);
      }
    }
    putchar('\n');

  }
}


void deleteTheater(struct Theater theater)
{
  if (theater.seats == NULL)  return;

  int cols;

  // Clean each column.
  for (cols = 0; cols < theater.columns; cols++) {
    free(theater.seats[cols]);
  }

  free(theater.seats);
}

bool isValidSeat(struct Theater theater, struct Position pos)
{
  if (theater.seats == NULL) return FALSE;

  if (
    pos.row >= theater.rows ||       // Position over the avaible rows.
    pos.row < 0 ||                  // Negative position.
    pos.column >= theater.columns || // Position over the avaible rows.
    pos.column < 0                  // Negative position.
  ) {
    return FALSE;
  } else {
    return TRUE;

  }
}



bool isSeatAvailable(struct Theater theater, struct Position pos)
{
  if (theater.seats == NULL) return FALSE;

  if (theater.seats[pos.column][pos.row] == AVAILABLE) {
    return TRUE;
  } else {
    return FALSE;
  }
}


Error reserveSeat(struct Theater theater, struct Position pos)
{
  if (theater.seats == NULL) return INTERNAL_ERROR;

  if (isSeatAvailable(theater, pos)) {
    theater.seats[pos.column][pos.row] = RESERVED;
    return NO_ERROR;
  } else {
    return RESERVED_ERROR;
  }
}


Error cancelSeat(struct Theater theater, struct Position pos)
{
  if (theater.seats == NULL) return INTERNAL_ERROR;

  if (isSeatAvailable(theater, pos) == FALSE) {
    theater.seats[pos.column][pos.row] = AVAILABLE;
    return NO_ERROR;
  } else {
    return AVAILABLE_ERROR;
  }
}
