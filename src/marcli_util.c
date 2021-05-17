#include "marcli.h"
#include "marcli_util.h"

#ifdef PLATFORM_UNIX
#define CLEAR_STRING "clear"
#else
#define CLEAR_STRING "cls"
#endif


void marcli_platform_test() {
  #ifdef PLATFORM_UNIX
    printf("Hello Unix\n");
  #elif PLATFORM_WIN
    printf("Hello Win\n");
  #endif

  printf("marlci_platform_test\n");

}

void marcli_clear_screen() {
  system(CLEAR_STRING);
}
