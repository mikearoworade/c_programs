# Almost Everything C
C is an imperative (procedural) language.
All the code has to be inside a function.
You have to compile C files with a compiler (For instance gcc) to create an executable file.

## About
* C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
* C is strongly associated with UNIX, as it was developed to write the UNIX operating system.
* It is one of the most popular programming language in the world
* C is very fast, compared to other programming languages, like Java and Python
* C is very versatile; it can be used in both applications and technologies

## Comment
Begins with /* and ends with */

## Compile c
Ensure your C code is betty compliant and compile code as below
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o file```

### Tasks
**Write a script that runs a C file through the preprocessor**
imagine we have a c file called __main.c__. Hence we can export it as in ```export CFILE=main.c```
__solution__
```gcc -E $CFILE -o c```
