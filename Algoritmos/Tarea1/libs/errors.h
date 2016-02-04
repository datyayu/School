typedef enum {
  NO_ERROR,
  RESERVED_ERROR,
  AVAILABLE_ERROR,
  OPTION_ERROR,
  OFFBOUNDS_ERROR,
  INTERNAL_ERROR
} Error;


void showError(Error error);
