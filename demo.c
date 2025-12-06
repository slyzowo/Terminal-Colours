#include <stdio.h>
#include "src/terminal_colours.c"

int main(){

  coloured_print(255, 0, 0, "Red\n");
  coloured_print(0, 255, 0, "Green\n");
  coloured_print(0, 0, 255, "Blue\n");

return 0;
}