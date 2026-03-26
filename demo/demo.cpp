#include <iostream>
#include "terminal_colors.h"

int main(){

  int name = 4;

  colored_printf(255, 0, 0, "%d\n", name);
  colored_print(255, 0, 0, "Red\n");
  colored_print(0, 255, 0, "Green\n");
  colored_print(0, 0, 255, "Blue\n");

  error_print("[Error] print\n");
  warning_print("[Warning] print\n");

return 0;
}