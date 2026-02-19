#include <stdio.h>

void coloured_print(int red ,int green, int blue, const char* text){
  printf("\033[38;2;%d;%d;%dm%s\033[0m", red, green, blue, text);
}

void error_print(const char* text){
  printf("\033[1m\033[38;2;255;0;0m%s\033[0m", text);
}

void warning_print(const char* text){
  printf("\033[1m\033[38;2;255;255;0m%s\033[0m", text);
}