# Coloured-Text
A Windows 11 library to make coloured text in the terminal

There are three arguments in the function `BackgroundColour` `ForegroundColour` `Text`.

1. `Text` is the Text you want to display.
2. `BackgroundColour` is the background colour you want to display behind the `Text`.
3. `ForegroundColour` is the foreground colour you want to display on the `Text`.
4. `Attribute` is the Modifier you want to display on the `Text`.

```c
Printfc(Attribute, Background, Foreground, "Text to Display");
```

An example of what the result looks like

![Example Image](https://raw.githubusercontent.com/slyzowo/Coloured-Text/main/images/demostration-pic.png)
