0x18 c - Dynamic Labraries

libdynamic.so: A dynamic library containing multiple functions, such as _putchar, 
_islower, 
_isalpha, 
_abs, 
_isupper, 
_isdigit, 
_strlen, 
_puts, 
_strcpy, 
_atoi, 
_strcat, 
_strncat, 
_strncpy, 
_strcmp, 
_memset, 
_memcpy, 
_strchr, 
_strspn, 
_strpbrk, 
_strstr. 

- main.h that contains the prototypes
1-create_dynamic_lib.sh: A script to create a dynamic library called liball.so from all the .c files present in the current directory.

100-operations.so: A dynamic library  that contains C functions that can be called from Python. Functions include add, sub, mul, div, and mod.

100-tests.py: A Python script that demonstrates calling the C functions from the 100-operations.so dynamic library.

101-make_me_win.sh: A shell script that is designed to exploit a scenario where specific commands can be run on a server
