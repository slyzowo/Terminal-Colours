#include <stdio.h>
#include "src/coloured_text.h"

int main(){

  printfc(NONE, DEFAULT_BG, DEFAULT_FG, "This Text has had nothing done to it\n");
  printfc(BOLD, DEFAULT_BG, DEFAULT_FG, "This Text has been BOLDED\n");
  printfc(FAINT, DEFAULT_BG, DEFAULT_FG, "This Text has been FAINTED\n");
  printfc(ITALIC, DEFAULT_BG, DEFAULT_FG, "This Text has been ITALIC\n");
  printfc(UNDERLINE, DEFAULT_BG, DEFAULT_FG, "This Text has been UNDERLINED\n");
  printfc(SLOW_BLINK, DEFAULT_BG, DEFAULT_FG, "This Text has been SLOW_BLINKED\n");
  printfc(FAST_BLINK, DEFAULT_BG, DEFAULT_FG, "This Text has been FAST_BLINKED\n");
  printfc(STRIKE, DEFAULT_BG, DEFAULT_FG, "This Text has been STRIKED\n");

  printfc(NONE, DEFAULT_BG, RED_FG, "This Foreground is Coloured RED\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_RED_FG, "This Foreground is Coloured BRIGHT_RED\n");
  printfc(NONE, DEFAULT_BG, YELLOW_FG, "This Foreground is Coloured YELLOW\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_YELLOW_FG, "This Foreground is Coloured BRIGHT_YELLOW\n");
  printfc(NONE, DEFAULT_BG, GREEN_FG, "This Foreground is Coloured GREEN\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_GREEN_FG, "This Foreground is Coloured BRIGHT_GREEN\n");
  printfc(NONE, DEFAULT_BG, BLUE_FG, "This Foreground is Coloured BLUE\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_BLUE_FG, "This Foreground is Coloured BRIGHT_BLUE\n");
  printfc(NONE, DEFAULT_BG, PURPLE_FG, "This Foreground is Coloured PURPLE\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_PURPLE_FG, "This Foreground is Coloured BRIGHT_PURPLE\n");
  printfc(NONE, DEFAULT_BG, WHITE_FG, "This Foreground is Coloured WHITE\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_WHITE_FG, "This Foreground is Coloured BRIGHT_WHITE\n");
  printfc(NONE, DEFAULT_BG, BLACK_FG, "This Foreground is Coloured BLACK\n");
  printfc(NONE, DEFAULT_BG, BRIGHT_BLACK_FG, "This Foreground is Coloured BRIGHT_BLACK\n");

  printfc(NONE, RED_BG, DEFAULT_FG, "This Background is Coloured RED\n");
  printfc(NONE, BRIGHT_RED_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_RED\n");
  printfc(NONE, YELLOW_BG, DEFAULT_FG, "This Background is Coloured YELLOW\n");
  printfc(NONE, BRIGHT_YELLOW_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_YELLOW\n");
  printfc(NONE, GREEN_BG, DEFAULT_FG, "This Background is Coloured GREEN\n");
  printfc(NONE, BRIGHT_GREEN_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_GREEN\n");
  printfc(NONE, BLUE_BG, DEFAULT_FG, "This Background is Coloured BLUE\n");
  printfc(NONE, BRIGHT_BLUE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLUE\n");
  printfc(NONE, PURPLE_BG, DEFAULT_FG, "This Background is Coloured PURPLE\n");
  printfc(NONE, BRIGHT_PURPLE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_PURPLE\n");
  printfc(NONE, WHITE_BG, DEFAULT_FG, "This Background is Coloured WHITE\n");
  printfc(NONE, BRIGHT_WHITE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_WHITE\n");
  printfc(NONE, BLACK_BG, DEFAULT_FG, "This Background is Coloured BLACK\n");
  printfc(NONE, BRIGHT_BLACK_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLACK\n");
  getchar();

return 0;
}