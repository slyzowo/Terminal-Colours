#include <stdio.h>

void coloured_print(int red ,int green, int blue, char text[]){
  printf("\033[38;2;%d;%d;%dm%s\033[0m", red, green, blue, text);
}