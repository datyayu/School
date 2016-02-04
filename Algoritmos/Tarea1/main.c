#include <stdio.h>
#include "libs/theater.h"

const int ROWS = 10;
const int COLUMNS = 12;

int main()
{
  MenuOption option;
  Error error = NO_ERROR;
  struct Theater theater = createTheater(COLUMNS, ROWS);
  struct Position pos;


  while(option != EXIT)
  {
    system("clear");

    showTheater(theater);
    showError(error);
    option = showMenu();

    if (option == RESERVE) {
      pos = askPosition(COLUMNS, ROWS);

      if (isValidSeat(theater, pos)) {
        error = reserveSeat(theater, pos);
      } else {
        error = OFFBOUNDS_ERROR;
      }
    } else if (option == CANCEL) {
      pos = askPosition(COLUMNS, ROWS);

      if (isValidSeat(theater, pos)) {
        error = cancelSeat(theater, pos);
      } else {
        error = OFFBOUNDS_ERROR;
      }
    } else if (option == EXIT) {
      puts("Bye bye!");
    } else {
      error = OPTION_ERROR;
    }
  }

  deleteTheater(theater);

  return 0;
}
