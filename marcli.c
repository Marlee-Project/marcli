// #include<stdio.h>
// #include <termios.h>            //termios, TCSANOW, ECHO, ICANON
// #include <unistd.h>     //STDIN_FILENO
//
// char getC()
// {
//   static struct termios oldt, newt;
//   tcgetattr(STDIN_FILENO, &oldt);
//   newt = oldt;
//   newt.c_lflag &= ~(ICANON);
//   tcsetattr( STDIN_FILENO, TCSANOW, &newt);
//   char c = getchar();
//   tcsetattr( STDIN_FILENO, TCSANOW, &oldt);
//   return c;
// }
//
// int main(void){
//
//     char c;
//     while((c = getC()) != 'e') {
//       printf("%c\n", c);
//     }
//
//     return 0;
// }
#include "marcli.h"
#ifdef PLATFORM_UNIX
#include <termios.h>
#endif

int main(int argc, char const *argv[]) {
  marcli_platform_test();
  printf("Lol\n");
  return 0;
}
