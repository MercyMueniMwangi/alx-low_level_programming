Even more pointers and arrays

0-strcat.c: Function that concatenates two strings. This function appends the src string to the dest string,overwriting
the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest

1-strncat.c: Function that concatenates two strings.
It will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest

2-strncpy.c: Function that copies a string.

3-strcmp.c: Function that compares two strings.

4-rev_array.c: Function that reverses the content of an array of integers.

5-string_toupper.c: Function that changes all lowercase letters of a string to uppercase.

6-cap_string.c: Function that capitalizes all words of a string.

7-leet.c: Function that encodes a string into 1337.

8-rot13.c: Function that encodes a string using rot13.

101-magic.c: C program that prints a[2] = 98 using pointer magic.
Completion of this source code.

102-infinite_add.c: C function that adds two numbers stored in strings to a buffer.
Assumes that strings are never empty and that numbers will always be positive, or 0.
Assumes there are only digits stored in the number strings.
If result can be stored in the buffer, returns a pointer to the result.
If result cannot be stored in the buffer, returns 0.


103-print_buffer.c: C function that prints the content of an inputted number of bytes from a buffer.
Prints 10 bytes per line.
Starts with the position of the first byte in hexadecimal (8 chars), starting with 0.
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints ..
Each line ends with a new line \n.
If the inputted byte size is 0 or less, the function only prints a new line.

File _putchar.c is a function that replaces the standard library function putchar().

File holberton.h is the header file containing all the function prototypes.

The *main.c files/codes are used to test the codes