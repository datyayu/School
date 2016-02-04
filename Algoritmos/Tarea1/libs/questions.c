#include "questions.h"

struct Position askPosition(int max_cols, int max_rows)
{
  struct Position pos;
  char posCol;
  int posRow;

  printf("\nEnter your seat column (A-%c): ", ('A' + max_cols - 1));
  scanf(" %c", &posCol);
  fflush(stdin);
  printf("Enter your seat row (1-%d): ", max_rows);
  scanf("%d", &posRow);

  pos.column = toupper(posCol) - 'A';
  pos.row = posRow - 1; // Off-by-one fix.

  return pos;
}


MenuOption showMenu()
{
  MenuOption userAnswer;

  puts("\nWelcome to ALGOS theater.");
  puts("1) Reserve seat");
  puts("2) Cancel seat");
  puts("3) EXIT");

  printf("Select an option: ");
  scanf("%d", &userAnswer);

  return userAnswer - 1; // Off-by-one fix.
}
