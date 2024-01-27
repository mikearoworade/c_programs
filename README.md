# Almost Everything C
C is an imperative (procedural) language. <br>
All the code has to be inside a function. <br>
You have to compile C files with a compiler (For instance gcc) to create an executable file.<br><br>
**Steps to form an executable file in C** <br>
* Processing, compilation, assembly and linking

## About
* C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
* C is strongly associated with UNIX, as it was developed to write the UNIX operating system.
* It is one of the most popular programming language in the world
* C is very fast, compared to other programming languages, like Java and Python
* C is very versatile; it can be used in both applications and technologies

## Comment
Begins with /* and ends with */

## Compile c
Ensure your C code is betty compliant and compile code as below <br> ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o file``` <br>To installl Betty, click link: [Install Betty](https://github.com/alx-tools/Betty)

### Tasks 
**Write a script that runs a C file through the preprocessor** <br>
imagine we have a c file called __main.c__. Hence we can export it as in ```export CFILE=main.c``` <br>
__Solution__ <br> ```gcc -E $CFILE -o c```
<br><br>
**Write a Script that compiles a C file but does not link it** <br>
__Solution__ <br>
```gcc -c $CFILE```
<br><br>
**Write a script that generates the assembly of a C code** <br>
__Solution__ <br>
```gcc -S $CFILE```
<br><br>
**Write a script that compiles a C file and create an executable name __cisfun__** <br>
__Solution__ <br>
```gcc $CFILE -o cisfun```
<br><br>

## C Output
### getchar() and putchar() function
The ```int getchar()``` function reads the next available character from the screen and returns it as an integer.<br>
The ```int putchar(int)``` function puts the passed character on the screen and return the same character. <br>

### scanf() and printf()
The ```int scanf(const char *format, ...)``` function reads the input from the standard input stream stdin and scans that input according to the format provided. <br>
The ```int printf(const char *format, ...)``` function writes the output to the standard output stream stdout and produces the output according to the format provided. <br>
The format can be a simple constant string, but you can specify %s, %d, %c, %f, etc., to print or read strings, integer, character or float respectively.

