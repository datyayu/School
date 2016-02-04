/**
 * Enum Error.
 * Enum utilizado para desplegar los errores, cada valor
 * corresponde a un tipo de error diferente, o NO_ERROR
 * para indicar que todo salió bien.
 */
 typedef enum {
  NO_ERROR,
  RESERVED_ERROR,
  AVAILABLE_ERROR,
  OPTION_ERROR,
  OFFBOUNDS_ERROR,
  INTERNAL_ERROR
} Error;



/*********************
 **    FUNCIONES    **
 *********************/
 
 void showError(Error error);
