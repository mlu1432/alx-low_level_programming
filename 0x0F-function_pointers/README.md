0x0F. C - Function pointers project
Task 0
- What's my name
- Write a function that prints a name.

- Prototype: void print_name(char *name, void (*f)(char *));

Task 1
-  If you spend too much time thinking about a thing, you'll never get it done
- Write a function that executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use

Task 2
- To hell with circumstances; I create opportunities
- Write a function that searches for an integer.

- Prototype: int int_index(int *array, int size, int (*cmp)(int));
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

Task 3
- A goal is not always meant to be reached, it often serves simply as something to aim at
- Write a program that performs simple operations.

- You are allowed to use the standard library
- Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following:
	+: addition
	-: subtraction
	*: multiplication
	/: division
	%: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
- This task requires that you create four different files.

 3-calc.h

- This file should contain all the function prototypes and data structures used by the program.
3-op_functions.c

This file should contain the 5 following functions (not more):

- op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
- op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
- op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
- op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
- op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
 3-get_op_func.c

- This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

- Prototype: int (*get_op_func(char *s))(int, int);
- where s is the operator passed as argument to the program
- This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add

Task 4
- Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
- Write a program that prints the opcodes of its own main function.

- Usage: ./main number_of_bytes
- Output format:
- the opcodes should be printed in hexadecimal, lowercase
- each opcode is two char long
- listing ends with a new line
