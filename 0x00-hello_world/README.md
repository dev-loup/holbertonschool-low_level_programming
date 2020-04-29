# Hello World project #cisfun

Hello world project introduces you in the basis of C programming teaching you how to compile and what is main; Betty code style is introduced too and how to use it

## Badges

After Hello world is done you will know how to start coding in a proper way

## Recomendations

* Projects were checked with `gcc 4.8.4` using `-Werror -Wall -Wextra -pedantic` even if it´s not necessary using the flags test your code is correctly written and there are no potencial mistakes
* `Betty code style` is the standard code style, you can get [the betty checker here](https://github.com/holbertonschool/Betty/wiki) and documentation about using it in different text editors
* All your files must end with a new line
* while working in your own repo remember to write a `README.md`, more information about [writting README's is here](https://www.makeareadme.com/)
* Using `global variables` is not allowed

## Installation

### Betty Code Style program
To run the Betty linter just with command betty <filename>:

*Go to the Betty repository
* Clone the repo to your local machine
* cd into the Betty directory
* Install Betty with sudo ./install.sh
* All is done, from your terminal you can use betty <file> for checking your code

## Tasks
### 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

### 1. Compiler
 
Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension .o instead of `.c`.
- Example: if the C file is `main.c`, the output file should be `main.o`

### 2. Assembler

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
* Example: if the C file is `main.c`, the output file should be `main.s`

### 3. Name

Write a script that compiles a C file and creates an executable named `cisfun`.

* The C file name will be saved in the variable `$CFILE`

### 4. Hello, puts

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

* Use the function `puts`
* You are not allowed to use `printf`
* Your program should end with the value `0`

### 5. Hello, printf

Write a C program that prints `exactly with proper grammar, but the outcome is a piece of art,`, followed by a new line.

* Use the function `printf`
* You are not allowed to use the function `puts`
* Your program should return `0`
* Your program should compile without warning when using the `-Wall` `gcc` option

### 6. Size is not grandeur, and territory does not make a nation

Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return `0`
* You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option

### 100. Intel (Advanced task)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`.
* The output file should be named the same as the C file, but with the extension .s instead of `.c`.
* Example: if the C file is `main.c`, the output file should be `main.s`

### 101. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced Task)

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) `puts`
* Your program should return 1
* Your program should compile without any warnings when using the `-Wall` `gcc` option

## License
All exercises were designed by [holberton School](https://holbertonschool.com/)
