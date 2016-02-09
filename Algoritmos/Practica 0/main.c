/**
  * Practica 0. Arreglo bidimensionales.
  * Descripcion: Simula una cine  y la venta de boletos
  *              para los asientos.
  * Author: Jesus Arturo Coronel Chavez.
  * Fecha: 3 de febrero del 2015.
  * Grupo: 551 (Miercoles).
  */

#include <stdio.h>
#include "libs/theater.h"

const int ROWS = 10;
const int COLUMNS = 9;

int getEarnings(Theater theater);


int main()
{
  MenuOption option = NO_OPTION_SELECTED;
  Notification notification = NO_ERROR;
  Theater theater = createTheater(COLUMNS, ROWS);
  Position pos;
  int earnings;

 /*  Main loop */
  while(option != EXIT) {
    /* Muestra el estado de la aplicacion */
    system("clear"); /* Cambiar por  "cls" para windows  */
    showTheater(theater);
    showNotifications(notification, earnings);
    earnings = 0;

    /* Muestra el menu y obten la respuseta del usuario */
    option = showMenu();

    switch (option) {
      case RESERVE: /* Reserva un asiento */
        pos = askPosition(COLUMNS, ROWS);

        if (isValidSeat(theater, pos)) {
          notification = reserveSeat(theater, pos);
        } else {
          notification = OFFBOUNDS_ERROR;
        }

        break;

      case CANCEL: /* Cancela un asiento */
        pos = askPosition(COLUMNS, ROWS);

        if (isValidSeat(theater, pos)) {
          notification = cancelSeat(theater, pos);
        } else {
          notification = OFFBOUNDS_ERROR;
        }

        break;

      case SHOW_EARNINGS: /* Muestra ganancias */
        notification = EARNINGS;
        earnings = getEarnings(theater);
        break;

      case EXIT: /* Sal del programa */
        puts("\nBye bye!");
        break;

      default:  /* El usuario no eligio una opcion valida */
        notification = OPTION_ERROR;
    }
  }

  /* Limpia la memoria */
  deleteTheater(theater);

  return 0;
}


/**
 * Calcula los ganancias totales de una sala.
 * @param theater Sala a medir.
 * @return La cantidad de ganancias actuales como un int.
 */
int getEarnings(Theater theater)
{
  int row, earnings;

  earnings = 0;

  earnings += getReservedPerRow(theater, 1) * 1000; /* Fila 1 */
  earnings += getReservedPerRow(theater, 2) * 750;  /* Fila 2 */
  earnings += getReservedPerRow(theater, 3) * 500;  /* Fila 3 */

  /* Filas 4+ */
  for (row = 4; row <= theater.rows; row++) {
    earnings += getReservedPerRow(theater, row) * 300;
  }

  return earnings;
}
