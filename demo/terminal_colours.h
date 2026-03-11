#pragma once

#ifndef TERMINAL_COLOURS_H
#define TERMINAL_COLOURS_H

#ifdef __cplusplus
  extern "C" {
#endif

  void coloured_print(int red ,int green, int blue, const char* text);

  void error_print(const char* text);

  void warning_print(const char* text);

#ifdef __cplusplus
  }
#endif

#endif /* TERMINAL_COLOURS_H */