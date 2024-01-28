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

## [C Input and Output](./c_input_output)
### getchar() and putchar() function
The ```int getchar()``` function reads the next available character from the screen and returns it as an integer.<br>
The ```int putchar(int)``` function puts the passed character on the screen and return the same character. <br>

### scanf() and printf()
The ```int scanf(const char *format, ...)``` function reads the input from the standard input stream stdin and scans that input according to the format provided. <br>
The ```int printf(const char *format, ...)``` function writes the output to the standard output stream stdout and produces the output according to the format provided. <br>
The format can be a simple constant string, but you can specify %s, %d, %c, %f, etc., to print or read strings, integer, character or float respectively.

## [C Data Types](./c_datatype)
Data types in c refer to an extensive system used for declaring variables or functions of different types. The type of a variable determines how much space it occupies in storage and how the bit pattern stored is interpreted.

### The Types in C
* Basic Types: integer types and floating point type. ```char, int, long int, float```
* Enumerated types: arithmetic types and they are used to define variables that can only assign certain discrete integer values throughout the program.
* The type void: The type specifier void indicates that no value is available.
* Derived types: They include (a) Pointer types, (b) Array types, (c) Structure types, (d) Union types and (e) Function types.

## [C Variable,constant,storage classes](./c_variable_constant_storage_classes)
A variable is nothing but a name given to a storage area that our programs can manipulate. Each variable in C has a specific type, which determines the size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied to the variable. <br>
The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. Upper and lowercase letters are distinct because C is case-sensitive. Based on the basic types explained in the previous chapter, there will be the following basic variable types − ```char, int, float, double, void``` <br>
### Variable Definition in C
```type variable_list;```
#### Examples
```
int    i, j, k;
char   c, ch;
float  f, salary;
double d;
```
#### Variable can be initialized
```
extern int d = 3, f = 5;    // declaration of d and f. 
int d = 3, f = 5;           // definition and initializing d and f. 
byte z = 22;                // definition and initializes z. 
char x = 'x';               // the variable x has the value 'x'.
```
#### Integer Literal and floating literal
```
85         /* decimal */
0213       /* octal */
0x4b       /* hexadecimal */
30         /* int */
30u        /* unsigned int */
30l        /* long */
30ul       /* unsigned long */
3.14159       /* Legal */
314159E-5L    /* Legal */
```
#### Character Constant
Character literals are enclosed in single quotes, e.g., 'x' can be stored in a simple variable of char type.
<br>
A character literal can be a plain character (e.g., 'x'), an escape sequence (e.g., '\t'), or a universal character (e.g., '\u02C0').
| Escape sequence |	Meaning          |
|-----------------|------------------|
| \\              | \ character      |
| \'              | ' character      |
| \"	          | " character      |
| \?	          | ? character      |
| \a	          | Alert or bell    |
| \b	          | Backspace        |
| \f	          | Form feed        |
| \n	          | Newline          |
| \r	          | Carriage return  |
| \t	          | Horizontal tab   |
| \v	          | Vertical tab     |

