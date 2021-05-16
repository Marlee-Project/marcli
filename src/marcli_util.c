#include "marcli.h"
#include "marcli_util.h"

#ifdef PLATFORM_UNIX
#define CLEAR_STRING "clear"
#else
#define CLEAR_STRING "cls"
#endif


void marcli_clear_screen() {
  system(CLEAR_STRING);
}
