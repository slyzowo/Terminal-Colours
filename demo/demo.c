#include <stdio.h>
#include "terminal_colours.h"

int main(){

  coloured_print(255, 0, 0, "Red\n");
  coloured_print(0, 255, 0, "Green\n");
  coloured_print(0, 0, 255, "Blue\n");

  error_print("[Error] print\n");
  warning_print("[Warning] print\n");

return 0;
}