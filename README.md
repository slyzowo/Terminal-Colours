# Terminal Colours
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Windows 11](https://img.shields.io/badge/Windows%2011-%230079d5.svg?style=for-the-badge&logo=Windows%2011&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)

A Windows 11 library to make coloured text in the terminal

## Installation
Download the .zip folder. and extract them and place the header file (the `.h` file) and the object file (the `.a` file) in these locations.

the header file goes in `C:\msys64\mingw64\include`

while the object file goes in `C:\msys64\mingw64\lib`.

# How to use
There are three arguments in the function `BackgroundColour` `ForegroundColour` `Text`.

1. `Text` is the Text you want to display.
2. `BackgroundColour` is the background colour you want to display behind the `Text`.
3. `ForegroundColour` is the foreground colour you want to display on the `Text`.
4. `Attribute` is the Modifier you want to display on the `Text`.

```c
coloured_print(Attribute, Background, Foreground, "Text to Display");
```

# Roadmap
I may add compatiblity with other languages. I'm unsure if I will though.

# Authors
slyzowo

# License
[MIT](https://choosealicense.com/licenses/mit/)