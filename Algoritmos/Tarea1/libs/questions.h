#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Enum MenuOption.
 * Options for the menu.
 */
typedef enum {
  RESERVE,
  CANCEL,
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
