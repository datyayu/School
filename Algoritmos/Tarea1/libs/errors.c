#include "errors.h"


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
      puts("\n¡El asiento ya está reservado!\n");
      break;

    case AVAILABLE_ERROR:
      puts("\n!El asiento ya estaba disponible.");
      break;

    case OPTION_ERROR:
      puts("\nErro! Introduzca una opcion valida.");
      break;

    case OFFBOUNDS_ERROR:
      puts("\nEl asiento que pidió no existe :(. Intente de nuevo.");
      break;

    default:
      puts("\nESTO NO DEBERIA ESTAR PASANDO!!");
  }
}
