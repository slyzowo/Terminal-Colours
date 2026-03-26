#include <stdio.h>
#include <stdarg.h>

void colored_print(int red ,int green, int blue, const char* text){
  printf("\033[38;2;%d;%d;%dm%s\033[0m", red, green, blue, text);
}

void colored_printf(int red, int green, int blue, const char *fmt, ...){
  printf("\033[38;2;%d;%d;%dm", red, green, blue);
  va_list args;
  va_start(args, fmt);
  vprintf(fmt, args);
  va_end(args);
  printf("\033[0m");
}

void error_print(const char* text){
  colored_print(255, 0, 0, text);
}

void error_printf(const char* text){
  colored_printf(255, 0, 0, text);
}

void warning_print(const char* text){
  colored_print(255, 255, 0, text);
}

void warning_printf(const char* text){
  colored_print(255, 255, 0, text);
}

void success_print(const char* text){
  colored_print(0, 255, 0, text);
}

void success_printf(const char* text){
  colored_print(0, 255, 0, text);
}