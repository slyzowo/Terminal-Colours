#include <stdio.h>

// Black
char printfBlack(char blacktext[] ){
  printf("\033[30m%s\033[0m", blacktext);
}

// Bright Black
char printfLightBlack(char brightblacktext[] ){
printf("\033[1;30m%s\033[0m", brightblacktext);
}

// Red
char printfRed(char redtext[] ){
printf("\033[31m%s\033[0m", redtext);
}

// Bright Red
char printfLightRed(char brightredtext[] ){
printf("\033[1;31m%s\033[0m", brightredtext);
}

// Green
char printfGreen(char greentext[] ){
printf("\033[32m%s\033[0m", greentext);
}

// Bright Green
char printfLightGreen(char brightgreentext[] ){
printf("\033[1;32m%s\033[0m", brightgreentext);
}

// Yellow
char printfYellow(char yellowtext[] ){
printf("\033[33m%s\033[0m", yellowtext);
}

// Bright Yellow
char printfLightYellow(char brightyellowtext[] ){
printf("\033[1;33m%s\033[0m", brightyellowtext);
}

// Blue
char printfBlue(char bluetext[] ){
printf("\033[34m%s\033[0m", bluetext);
}

// Bright Blue
char printfLightBlue(char brightbluetext[] ){
printf("\033[1;34m%s\033[0m", brightbluetext);
}

// Magenta
char printfPurple(char purpletext[] ){
  printf("\033[35m%s\033[0m", purpletext);
}

// Bright Magenta
char printfLightPurple(char brightpurpletext[] ){
  printf("\033[1;35m%s\033[0m", brightpurpletext);
}

// Cyan
char printfCyan(char cyantext[] ){
  printf("\033[36m%s\033[0m", cyantext);
}

// Bright Cyan
char printfLightCyan(char brightcyantext[] ){
  printf("\033[1;36m%s\033[0m", brightcyantext);
}

// White
char printfWhite(char whitetext[] ){
  printf("\033[37m%s\033[0m", whitetext);
}

// Bright White
char printfLightWhite(char brightwhitetext[] ){
  printf("\033[1;37m%s\033[0m", brightwhitetext);
}