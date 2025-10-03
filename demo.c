#include <stdio.h>
#include "src/coloured_text.c"

int main(){

  printfc(NONE, RED_FG, "This Text is Coloured\n");
  printfc(YELLOW_BG, BLUE_FG, "This Background is Coloured\n");

return 0;
}