#include <stdio.h>
#include "libs/theater.h"

const int ROWS = 10;
const int COLUMNS = 9;

int main()
{
  MenuOption option;
  Error error = NO_ERROR;
  Theater theater = createTheater(COLUMNS, ROWS);
  Position pos;

 /*  Main loop */
  while(option != EXIT) {
    /* Muestra el estado de la aplicacion */
    system("clear");
    showTheater(theater);
    showError(error);

    /* Muestra el menu y obten la respuseta del usuario */
    option = showMenu();

    switch (option) {
      case RESERVE: /* Reserva un asiento */
        pos = askPosition(COLUMNS, ROWS);

        if (isValidSeat(theater, pos)) {
          error = reserveSeat(theater, pos);
        } else {
          error = OFFBOUNDS_ERROR;
        }
        break;

      case CANCEL: /* Cancela un asiento */
        pos = askPosition(COLUMNS, ROWS);

        if (isValidSeat(theater, pos)) {
          error = cancelSeat(theater, pos);
        } else {
          error = OFFBOUNDS_ERROR;
        }
        break;

      case EXIT: /* Sal del programa */
        puts("Bye bye!");
        break;

      default:  /* El usuario no eligio una opcion valida */
        error = OPTION_ERROR;
    }
  }

  /* Clean memory */
  deleteTheater(theater);

  return 0;
}
