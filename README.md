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

### Defining Constants
* Using #define preprocessor: ```#define identifier value```
* Using const keyword: ```const type variable = value;```

### Storage classes
A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program. They precede the type that they modify. We have four different storage classes in a C program
* auto
* register
* static
* extern

#### auto
The auto storage class is the default storage class for all local variables.
```
{
   int mount;
   auto int month;
}
```
#### register
The register storage class is used to define local variables that should be stored in a register instead of RAM. ```register int  miles;```

#### static
The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls. <br>
In C programming, when static is used on a global variable, it causes only one copy of that member to be shared by all the objects of its class.

#### extern
The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. When you use 'extern', the variable cannot be initialized however, it points the variable name at a storage location that has been previously defined.

### Operators Precedence in C
Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others; for example, the multiplication operator has a higher precedence than the addition operator. <br>
For example, x = 7 + 3 * 2; here, x is assigned 13, not 20 because operator * has a higher precedence than +, so it first gets multiplied with 3*2 and then adds into 7.
|    Category	   |            Operator	               |    Associativity    |
|------------------|---------------------------------------|---------------------|
| Postfix	       | () [] -> . ++ - -	                   | Left to right       |
| Unary	           | + - ! ~ ++ - - (type)* & sizeof       | Right to left       |
| Multiplicative   | * / %	                               | Left to right       |
| Additive	       | + -	                               | Left to right       |
| Shift	           | << >>	                               | Left to right       |
| Relational	   | < <= > >=	                           | Left to right       |
| Equality	       | == !=	                               | Left to right       |
| Bitwise AND	   | &	                                   | Left to right       |
| Bitwise XOR	   | ^	                                   | Left to right       |
| Bitwise OR	   | &#124;	                               | Left to right       |
| Logical AND	   | &&	                                   | Left to right       |
| Logical OR	   | &#124;&#124;	                       | Left to right       |
| Conditional	   | ?:	                                   | Right to left       |
| Assignment	   | = += -= *= /= %=>>= <<= &= ^= &#124;= | Right to left       |
| Comma	           | ,	                                   | Left to right       |

## [Control Flow](./c_control_flow)
Control flow (or flow of control) is the order in which individual statements, instructions or function calls of an imperative program are executed or evaluated.
<br>
Below is an example of a control flow structure:<br><br>
![control_flow](./c_control_flow/decision_making.jpg)
<br><br>
C programming language assumes any non-zero and non-null values as true, and if it is either zero or null, then it is assumed as false value.
<br>
C programming language provides the following types of decision making statements.
* if statement: An if statement consists of a boolean expression followed by one or more statements
* if...else statement: An if statement can be followed by an optional else statement, which executes when the Boolean expression is false.
* nested if statements: You can use one if or else if statement inside another if or else if statement(s).
* switch statement: A switch statement allows a variable to be tested for equality against a list of values.
* The ? : Operator

## [Function](./c_functions)
A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.
<br>
You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.
<br>
A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

### Defining a Function
The general form of a function definition in C programming language is as follows −
```
return_type function_name( parameter list ) {
   body of the function
}
```
A function definition in C programming consists of a function header and a function body. Here are all the parts of a function −
* **Return Type** − A function may return a value. The return_type is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword void.
* **Function Name** − This is the actual name of the function. The function name and the parameter list together constitute the function signature.
* **Parameters** − A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type, order, and number of the parameters of a function. Parameters are optional; that is, a function may contain no parameters.
* **Function Body** − The function body contains a collection of statements that define what the function does.
