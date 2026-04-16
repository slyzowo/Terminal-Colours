#include <stdio.h>
#include <stdarg.h>

void cprint(int red ,int green, int blue, const char* text){
  printf("\033[38;2;%d;%d;%dm%s\033[0m", red, green, blue, text);
}

void cprintf(int red, int green, int blue, const char *fmt, ...){
  printf("\033[38;2;%d;%d;%dm", red, green, blue);
  va_list args;
  va_start(args, fmt);
  vprintf(fmt, args);
  va_end(args);
  printf("\033[0m");
}
