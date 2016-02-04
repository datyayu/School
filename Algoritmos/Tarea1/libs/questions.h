#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {RESERVE, CANCEL, EXIT} MenuOption;

struct Position {
  int column;
  int row;
};


struct Position askPosition(int max_cols, int max_rows);
MenuOption showMenu();
