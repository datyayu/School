#include "notifications.h"
#include "colors.h"



/**
 * Muestra un error pasado como argumento.
 * @param err a mostrar.
 */
void showError(Notification notification, int earnings)
{
  if (notification == NO_ERROR) return;

  switch (notification)
  {
    case EARNINGS:
      printf(KGRN "\nGanancias actuales: %d\n"  RESET, earnings);
      break;

    case RESERVED_ERROR:
      printf(KRED "\n¡El asiento ya esta ocupado!\n\n"  RESET);
      break;

    case AVAILABLE_ERROR:
      printf("\nEl asiento ya estaba disponible.\n");
      break;

    case OPTION_ERROR:
      printf(KRED "\n¡Error! Introduzca una opcion valida.\n" RESET);
      break;

    case OFFBOUNDS_ERROR:
      printf(KRED "\nEl asiento que pidio no existe :( Intente de nuevo.\n" RESET);
      break;

    default: /* Internal error :P */
      printf(KRED "\nESTO NO DEBERIA ESTAR PASANDO!!\n" RESET);
  }
}
