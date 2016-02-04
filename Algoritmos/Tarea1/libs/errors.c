#include "errors.h"
#include "colors.h"



/**
 * Muestra un error pasado como argumento.
 * @param error Error de tipo enum/Error a mostrar.
 */
void showError(Error error)
{
  if (error == NO_ERROR) return;

  switch (error)
  {
    case RESERVED_ERROR:
      printf(KRED "\n¡El asiento ya está reservado!\n\n"  RESET);
      break;

    case AVAILABLE_ERROR:
      printf(KRED "\nEl asiento ya estaba disponible.\n" RESET);
      break;

    case OPTION_ERROR:
      printf(KRED "\n¡Error! Introduzca una opcion valida.\n" RESET);
      break;

    case OFFBOUNDS_ERROR:
      printf(KRED "\nEl asiento que pidió no existe :(. Intente de nuevo.\n" RESET);
      break;

    default: /* Internal error :P */
      printf(KRED "\nESTO NO DEBERIA ESTAR PASANDO!!\n" RESET);
  }
}
