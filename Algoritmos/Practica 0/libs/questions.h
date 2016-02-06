#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Enum MenuOption.
 * Options for the menu.
 */
typedef enum {
  RESERVE,
  CANCEL,
  SHOW_EARNINGS,
  EXIT
} MenuOption;


/**
 * Position.
 * Struct que represena una posicion o asiento en la sala.
 */
typedef struct {
  int column;
  int row;
} Position;


/*********************
 **    FUNCIONES    **
 *********************/

Position askPosition(int max_cols, int max_rows);
MenuOption showMenu();
