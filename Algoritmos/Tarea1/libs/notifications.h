#include <stdio.h>
#include <stdlib.h>

/**
 * Enum Error.
 * Enum utilizado para desplegar los errores, cada valor
 * corresponde a un tipo de error diferente, o NO_ERROR
 * para indicar que todo salió bien.
 */
 typedef enum {
  NO_ERROR,
  EARNINGS,
  RESERVED_ERROR,
  AVAILABLE_ERROR,
  OPTION_ERROR,
  OFFBOUNDS_ERROR
} Notification;



/*********************
 **    FUNCIONES    **
 *********************/

 void showError(Notification notification, int earnings);
