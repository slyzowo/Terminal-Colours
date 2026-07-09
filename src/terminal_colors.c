#include <stdio.h>
#include <stdarg.h>

void colored_print(int red ,int green, int blue, const char* text){
  printf("\033[38;2;%d;%d;%dm%s\033[0m", red, green, blue, text);
}

void colored_printf(int red, int green, int blue, const char *format, ...){
  printf("\033[38;2;%d;%d;%dm", red, green, blue);
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  va_end(args);
  printf("\033[0m");
}
