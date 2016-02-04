#include "theater.h"


/**
 * Crea un nueva sala (Theater) del tamaño especificado.
 * @param columns Un int indicando el numero de columnas de la sala.
 * @param row Un int indicando el numero de filas de la sala.
 * @return Un nuevo Theater con la info especificada.
 */
Theater createTheater(int columns, int rows)
{
    int col, row;
    Theater theater;

    /* Setup */
    theater.seats  = (int**) malloc((columns*rows)*sizeof(int));
    theater.columns = columns;
    theater.rows    = rows;

    /* Aloja cada columna */
    for (col = 0; col < columns; col++) {
      /* Aloja cada fila e inicializa en 0 (AVAILABLE) cada asiento */
      theater.seats[col] = (int*) calloc(rows, sizeof(int));
    }

    return theater;
}


/**
 * Muestra los asientos de una sala y su disponibilidad.
 * @param theater Sala a mostrar.
 */
void showTheater(Theater theater)
{
  if (theater.seats == NULL) return;

  int col, row;

  /* Muestra los letras de las columnas */
  printf("   ");
  for (col = 0; col < theater.columns; col++) {
    printf(" %c ", 'A' + col);
  }
  printf("\n");

  /* Muestra cada fila */
  for (row = 0; row < theater.rows; row++) {
    printf("%2d ", (1 + row)); /* Muestra el numero de fila */

    /* Muestra cada asiento */
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


/**
 * Libera el espacio en memoria de una sala.
 * @param theater Sala a liberar.
 */
void deleteTheater(Theater theater)
{
  if (theater.seats == NULL)  return;

  int cols;

  /* Limpia cada columna columna. */
  for (cols = 0; cols < theater.columns; cols++) {
    free(theater.seats[cols]);
  }

  free(theater.seats);
}


/**
 * Valida que el espacio solicitado se encuentre dentro de los limites
 * de la sala.
 * @param theater Sala a checar.
 * @param pos Posicion del lugar.
 * @return TRUE si el lugar es valido en la sala, FALSE de lo contrario.
 */
bool isValidSeat(Theater theater, Position pos)
{
  if (theater.seats == NULL) return FALSE;

  if (
    pos.row >= theater.rows ||       /* Lugar inexistente */
    pos.row < 0 ||                   /* Valor negativo */
    pos.column >= theater.columns || /* Lugar inexistente */
    pos.column < 0                   /* Valor negativo */
  ) {
    return FALSE;
  } else {
    return TRUE;

  }
}


/**
 * Valida que el espacio solicitado este disponible.
 * @param theater Sala a checar.
 * @param pos Posicion del lugar.
 * @return TRUE si el lugar esta disponible, FALSE de lo contrario.
 */
bool isSeatAvailable(Theater theater, Position pos)
{
  if (theater.seats == NULL) return FALSE;

  if (theater.seats[pos.column][pos.row] == AVAILABLE) {
    return TRUE;
  } else {
    return FALSE;
  }
}


/**
 * Reserva un asiento en una sala.
 * @param theater Sala a checar.
 * @param pos Posicion del lugar a reservar.
 * @return NO_ERROR si se reservo correctamente.
 *         RESERVED_ERROR si el lugar ya estaba reservado.
 */
Error reserveSeat(Theater theater, Position pos)
{
  if (theater.seats == NULL) return INTERNAL_ERROR;

  if (isSeatAvailable(theater, pos)) {
    theater.seats[pos.column][pos.row] = RESERVED;
    return NO_ERROR;
  } else {
    return RESERVED_ERROR;
  }
}


/**
 * Cancela la reservacion de un asiento en una sala.
 * @param theater Sala a checar.
 * @param pos Posicion del lugar a cancelar.
 * @return NO_ERROR si se cancelo correctamente.
 *         AVAILABLE_ERROR si el lugar no estaba reservado.
 */
Error cancelSeat(Theater theater, Position pos)
{
  if (theater.seats == NULL) return INTERNAL_ERROR;

  if (isSeatAvailable(theater, pos) == FALSE) {
    theater.seats[pos.column][pos.row] = AVAILABLE;
    return NO_ERROR;
  } else {
    return AVAILABLE_ERROR;
  }
}
