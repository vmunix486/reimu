# TODO

 - OS detection (Windows/Unix)
 - Library detection (eg. `-lraylib` availability)
 - C99 test compilation
 - Sources from string (like cflags -> tcflags)
 - Separate C compiler and linker steps (`cc -c` -> `ld` -> program)
 - Testing different command line options seeing if they work for the tests (checking if compiler needs `-std=c99` or like `-lm` for rayib or like `-L/usr/X11/lib64` for X11)
 - Compiler defaults for different platforms (gcc for Most Unixes, LLVM/Clang for MacOS, i686-w64-mingw32-gcc for MSYS2 WinXP)
 - Test on pure Windows (no MSYS2)
 - Add more C source examples (Raylib example, 2 separate C files)
 - Add support for Termux (Android)
 - Add support for Clang/GCC detection (with `#ifdef __GNU_C__` and `#ifdef __clang__`)
