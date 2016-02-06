#include "questions.h"

/**
 * Crea un nueva sala (Theater) del tamaño especificado.
 * @param columns Un int indicando el numero de columnas de la sala.
 * @param row Un int indicando el numero de filas de la sala.
 * @return Un nuevo Theater con la info especificada.
 */
Position askPosition(int max_cols, int max_rows)
{
  Position pos;
  char posCol;
  int posRow;

  /* Input del usuario */
  printf("\nIntroduzca la fila que quiere (1-%d): ", max_rows);
  scanf("%d", &posRow);
  printf("Introduzca el asiento deseado (A-%c): ", ('A' + max_cols - 1));
  scanf(" %c", &posCol);

  /* Llena los valores de pos */
  /* HACK: char - char puede ser tomado como un int (bytes-stuff) */
  pos.column = toupper(posCol) - 'A';
  pos.row = posRow - 1; /* Off-by-one fix.*/

  return pos;
}


/*
 * Muestra el menu y permite al usuario eligir una opcion.
 * @return Un valor tipo MenuOption que indica la respuesta del usuario.
 */
MenuOption showMenu()
{
  MenuOption userAnswer;

  /* Muestra el menu */
  puts("\nBienenido al cine de ALGOS.");
  puts("1) Reservar asiento");
  puts("2) Cancelar asiento");
  puts("3) Mostrar ganancias");
  puts("4) Salir");

  /* Obtiene el input del usuario */
  printf("Seleccione una opcion: ");
  scanf("%d", &userAnswer);

  return userAnswer - 1; /* Off-by-one fix.*/
}
