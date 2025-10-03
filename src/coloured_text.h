#ifndef COLOURED_TEXT_H
#define COLOURED_TEXT_H

#include "coloured_text.c"

// Global Modifiers
#define NONE 0
#define BOLD 1
#define FAINT 2
#define ITALIC 3
#define UNDERLINE 4
#define SLOW_BLINK 5
#define FAST_BLINK 6
#define STRIKE 9

// Text Modifiers
#define BLACK_FG 30
#define RED_FG 31
#define GREEN_FG 32
#define YELLOW_FG 33
#define BLUE_FG 34
#define PURPLE_FG 35
#define CYAN_FG 36
#define WHITE_FG 37
#define DEFAULT_FG 39

#define BRIGHT_BLACK_FG 90
#define BRIGHT_RED_FG 91
#define BRIGHT_GREEN_FG 92
#define BRIGHT_YELLOW_FG 93
#define BRIGHT_BLUE_FG 94
#define BRIGHT_PURPLE_FG 95
#define BRIGHT_CYAN_FG 96
#define BRIGHT_WHITE_FG 97

// Background Modifiers
#define BLACK_BG 40
#define RED_BG 41
#define GREEN_BG 42
#define YELLOW_BG 43
#define BLUE_BG 44
#define PURPLE_BG 45
#define CYAN_BG 46
#define WHITE_BG 47
#define DEFAULT_BG 49

#define BRIGHT_BLACK_BG 100
#define BRIGHT_RED_BG 101
#define BRIGHT_GREEN_BG 102
#define BRIGHT_YELLOW_BG 103
#define BRIGHT_BLUE_BG 104
#define BRIGHT_PURPLE_BG 105
#define BRIGHT_CYAN_BG 106
#define BRIGHT_WHITE_BG 107

void printfc(int attribute, int backgroundColour, int textColour, char text[]);

#endif /* COLOURED_TEXT_H */