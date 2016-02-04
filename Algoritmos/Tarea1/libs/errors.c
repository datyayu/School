#include "errors.h"


void showError(Error error)
{
  if (error == NO_ERROR) return;

  switch (error)
  {
    case RESERVED_ERROR: // x
      puts("\nThe seat was already reserved!\n");
      break;

    case AVAILABLE_ERROR: // x
      puts("\nThe requested seat is already available");
      break;

    case OPTION_ERROR: // x
      puts("\nWrong! Please enter a correct input.");
      break;

    case OFFBOUNDS_ERROR:
      puts("\nThe seat doesn't exist, please enter a correct one");
      break;

    default:
      puts("\nIM NOT SURE WTF HAPPENED BOY");
  }
}
