#include <stdio.h>
#include "src/terminal_colours.h"


int main(){

  coloured_printf(NONE, DEFAULT_BG, DEFAULT_FG, "This Text has had nothing done to it\n");
  coloured_printf(BOLD, DEFAULT_BG, DEFAULT_FG, "This Text has been BOLDED\n");
  coloured_printf(FAINT, DEFAULT_BG, DEFAULT_FG, "This Text has been FAINTED\n");
  coloured_printf(ITALIC, DEFAULT_BG, DEFAULT_FG, "This Text has been ITALIC\n");
  coloured_printf(UNDERLINE, DEFAULT_BG, DEFAULT_FG, "This Text has been UNDERLINED\n");
  coloured_printf(SLOW_BLINK, DEFAULT_BG, DEFAULT_FG, "This Text has been SLOW_BLINKED\n");
  coloured_printf(FAST_BLINK, DEFAULT_BG, DEFAULT_FG, "This Text has been FAST_BLINKED\n");
  coloured_printf(STRIKE, DEFAULT_BG, DEFAULT_FG, "This Text has been STRIKED\n");

  coloured_printf(NONE, DEFAULT_BG, RED_FG, "This Foreground is Coloured RED\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_RED_FG, "This Foreground is Coloured BRIGHT_RED\n");
  coloured_printf(NONE, DEFAULT_BG, YELLOW_FG, "This Foreground is Coloured YELLOW\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_YELLOW_FG, "This Foreground is Coloured BRIGHT_YELLOW\n");
  coloured_printf(NONE, DEFAULT_BG, GREEN_FG, "This Foreground is Coloured GREEN\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_GREEN_FG, "This Foreground is Coloured BRIGHT_GREEN\n");
  coloured_printf(NONE, DEFAULT_BG, BLUE_FG, "This Foreground is Coloured BLUE\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_BLUE_FG, "This Foreground is Coloured BRIGHT_BLUE\n");
  coloured_printf(NONE, DEFAULT_BG, PURPLE_FG, "This Foreground is Coloured PURPLE\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_PURPLE_FG, "This Foreground is Coloured BRIGHT_PURPLE\n");
  coloured_printf(NONE, DEFAULT_BG, WHITE_FG, "This Foreground is Coloured WHITE\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_WHITE_FG, "This Foreground is Coloured BRIGHT_WHITE\n");
  coloured_printf(NONE, DEFAULT_BG, BLACK_FG, "This Foreground is Coloured BLACK\n");
  coloured_printf(NONE, DEFAULT_BG, BRIGHT_BLACK_FG, "This Foreground is Coloured BRIGHT_BLACK\n");

  coloured_printf(NONE, RED_BG, DEFAULT_FG, "This Background is Coloured RED\n");
  coloured_printf(NONE, BRIGHT_RED_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_RED\n");
  coloured_printf(NONE, YELLOW_BG, DEFAULT_FG, "This Background is Coloured YELLOW\n");
  coloured_printf(NONE, BRIGHT_YELLOW_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_YELLOW\n");
  coloured_printf(NONE, GREEN_BG, DEFAULT_FG, "This Background is Coloured GREEN\n");
  coloured_printf(NONE, BRIGHT_GREEN_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_GREEN\n");
  coloured_printf(NONE, BLUE_BG, DEFAULT_FG, "This Background is Coloured BLUE\n");
  coloured_printf(NONE, BRIGHT_BLUE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLUE\n");
  coloured_printf(NONE, PURPLE_BG, DEFAULT_FG, "This Background is Coloured PURPLE\n");
  coloured_printf(NONE, BRIGHT_PURPLE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_PURPLE\n");
  coloured_printf(NONE, WHITE_BG, DEFAULT_FG, "This Background is Coloured WHITE\n");
  coloured_printf(NONE, BRIGHT_WHITE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_WHITE\n");
  coloured_printf(NONE, BLACK_BG, DEFAULT_FG, "This Background is Coloured BLACK\n");
  coloured_printf(NONE, BRIGHT_BLACK_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLACK\n");
  getchar();

return 0;
}