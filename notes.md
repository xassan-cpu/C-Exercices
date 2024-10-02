## Chapter 2


### 2.1 Compiling and Linking


A brief description on how a C program is compiled.


- **Preprocessing**: The C program is first giving to a preprocessor. A preprocessor makes modifications to the program, like adding the source code of `stdio.h` when specified by a directive (i.e. `#incldue<stdio.h>`), or replacing a macro by the value it represents (i.e. for `#define INCHES_PER_POUND 166`, anywhere the variable `INCHES_PER_POUND` is present in the program will be replaces by `166`).

- **Compiling**: After the preprocessor made modifications to the program, a compiler translates the program into machine instructions (object code). 

- **Linking**: Finally, a linker combines the object code with any additional code needed to make an executable program, e.g, library functions that are used in the program.
