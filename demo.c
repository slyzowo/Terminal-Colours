#include <stdio.h>
#include "src/coloured_text.c"

int main(){

  printfc(DEFAULT_BG, RED_FG, "This Foreground is Coloured RED\n");
  printfc(DEFAULT_BG, YELLOW_FG, "This Foreground is Coloured YELLOW\n");
  printfc(DEFAULT_BG, GREEN_FG, "This Foreground is Coloured GREEN\n");
  printfc(DEFAULT_BG, BLUE_FG, "This Foreground is Coloured BLUE\n");
  printfc(DEFAULT_BG, PURPLE_FG, "This Foreground is Coloured PURPLE\n");
  printfc(DEFAULT_BG, WHITE_FG, "This Foreground is Coloured WHITE\n");
  printfc(DEFAULT_BG, BLACK_FG, "This Foreground is Coloured BLACK\n");

  printfc(RED_BG, DEFAULT_FG, "This Background is Coloured RED\n");
  printfc(YELLOW_BG, DEFAULT_FG, "This Background is Coloured YELLOW\n");
  printfc(GREEN_BG, DEFAULT_FG, "This Background is Coloured GREEN\n");
  printfc(BLUE_BG, DEFAULT_FG, "This Background is Coloured BLUE\n");
  printfc(PURPLE_BG, DEFAULT_FG, "This Background is Coloured PURPLE\n");
  printfc(WHITE_BG, DEFAULT_FG, "This Background is Coloured WHITE\n");
  printfc(BLACK_BG, DEFAULT_FG, "This Background is Coloured BLACK\n");

return 0;
}