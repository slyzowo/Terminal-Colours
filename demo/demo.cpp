#include <iostream>
#include "terminal_colors.h"

int main(){

  int name = 4;

  cprintf(255, 0, 0, "%d\n", name);
  cprint(255, 0, 0, "Red\n");
  cprint(0, 255, 0, "Green\n");
  cprint(0, 0, 255, "Blue\n");

return 0;
}