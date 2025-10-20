#include <stdio.h>
#include "src/terminal_colours.c"

int main(){

  coloured_print(NONE, DEFAULT_BG, DEFAULT_FG, "This Text has had nothing done to it\n");
  coloured_print(BOLD, DEFAULT_BG, DEFAULT_FG, "This Text has been BOLDED\n");
  coloured_print(FAINT, DEFAULT_BG, DEFAULT_FG, "This Text has been FAINTED\n");
  coloured_print(ITALIC, DEFAULT_BG, DEFAULT_FG, "This Text has been ITALIC\n");
  coloured_print(UNDERLINE, DEFAULT_BG, DEFAULT_FG, "This Text has been UNDERLINED\n");
  coloured_print(STRIKE, DEFAULT_BG, DEFAULT_FG, "This Text has been STRIKED\n");

  coloured_print(NONE, DEFAULT_BG, RED_FG, "This Foreground is Coloured RED\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_RED_FG, "This Foreground is Coloured BRIGHT_RED\n");
  coloured_print(NONE, DEFAULT_BG, YELLOW_FG, "This Foreground is Coloured YELLOW\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_YELLOW_FG, "This Foreground is Coloured BRIGHT_YELLOW\n");
  coloured_print(NONE, DEFAULT_BG, GREEN_FG, "This Foreground is Coloured GREEN\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_GREEN_FG, "This Foreground is Coloured BRIGHT_GREEN\n");
  coloured_print(NONE, DEFAULT_BG, BLUE_FG, "This Foreground is Coloured BLUE\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_BLUE_FG, "This Foreground is Coloured BRIGHT_BLUE\n");
  coloured_print(NONE, DEFAULT_BG, PURPLE_FG, "This Foreground is Coloured PURPLE\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_PURPLE_FG, "This Foreground is Coloured BRIGHT_PURPLE\n");
  coloured_print(NONE, DEFAULT_BG, WHITE_FG, "This Foreground is Coloured WHITE\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_WHITE_FG, "This Foreground is Coloured BRIGHT_WHITE\n");
  coloured_print(NONE, DEFAULT_BG, BLACK_FG, "This Foreground is Coloured BLACK\n");
  coloured_print(NONE, DEFAULT_BG, BRIGHT_BLACK_FG, "This Foreground is Coloured BRIGHT_BLACK\n");

  coloured_print(NONE, RED_BG, DEFAULT_FG, "This Background is Coloured RED\n");
  coloured_print(NONE, BRIGHT_RED_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_RED\n");
  coloured_print(NONE, YELLOW_BG, DEFAULT_FG, "This Background is Coloured YELLOW\n");
  coloured_print(NONE, BRIGHT_YELLOW_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_YELLOW\n");
  coloured_print(NONE, GREEN_BG, DEFAULT_FG, "This Background is Coloured GREEN\n");
  coloured_print(NONE, BRIGHT_GREEN_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_GREEN\n");
  coloured_print(NONE, BLUE_BG, DEFAULT_FG, "This Background is Coloured BLUE\n");
  coloured_print(NONE, BRIGHT_BLUE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLUE\n");
  coloured_print(NONE, PURPLE_BG, DEFAULT_FG, "This Background is Coloured PURPLE\n");
  coloured_print(NONE, BRIGHT_PURPLE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_PURPLE\n");
  coloured_print(NONE, WHITE_BG, DEFAULT_FG, "This Background is Coloured WHITE\n");
  coloured_print(NONE, BRIGHT_WHITE_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_WHITE\n");
  coloured_print(NONE, BLACK_BG, DEFAULT_FG, "This Background is Coloured BLACK\n");
  coloured_print(NONE, BRIGHT_BLACK_BG, DEFAULT_FG, "This Background is Coloured BRIGHT_BLACK\n");

return 0;
}