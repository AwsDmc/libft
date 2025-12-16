# Libft

*This project has been created as part of the 42 curriculum by abaoni.*

## Description


Libft is the first project in the 42 curriculum, focused on building a custom C library that reimplements essential standard library functions. The goal is to develop a deep understanding of how fundamental C functions work by coding them from scratch, while also learning proper memory management, pointer manipulation, and library creation.

This library will serve as a foundation for future 42 projects, providing a collection of reliable utility functions that can be reused throughout the curriculum.

## Instructions

### Compilation

To compile the library, run:

make

This will create a libft.a static library file.

### Available Make Rules

- make or make all - Compiles the library
- make clean - Removes object files
- make fclean - Removes object files and the library
- make re - Recompiles the entire library

### Using the Library

To use libft in your project:

1. Include the header in your C files:

#include "libft.h"

2. Compile your project with the library:

gcc your_file.c -L. -lft -o your_program

## Library Functions

### Part 1: Libc Functions

These functions replicate the behavior of standard C library functions:

Character checks and conversions:
- ft_isalpha - Checks if a character is alphabetic
- ft_isdigit - Checks if a character is a digit
- ft_isalnum - Checks if a character is alphanumeric
- ft_isascii - Checks if a character is in the ASCII table
- ft_isprint - Checks if a character is printable
- ft_toupper - Converts a character to uppercase
- ft_tolower - Converts a character to lowercase

String manipulation:
- ft_strlen - Calculates the length of a string
- ft_strlcpy - Copies a string with size limit
- ft_strlcat - Concatenates strings with size limit
- ft_strchr - Locates the first occurrence of a character
- ft_strrchr - Locates the last occurrence of a character
- ft_strncmp - Compares two strings up to n characters
- ft_strnstr - Locates a substring in a string
- ft_strdup - Duplicates a string

Memory manipulation:
- ft_memset - Fills memory with a constant byte
- ft_bzero - Sets memory to zero
- ft_memcpy - Copies memory area
- ft_memmove - Copies memory area (handles overlap)
- ft_memchr - Scans memory for a character
- ft_memcmp - Compares memory areas

Conversion:
- ft_atoi - Converts a string to an integer
- ft_calloc - Allocates and zeroes memory

### Part 2: Additional Functions

Custom utility functions not present in the standard library:

- ft_substr - Extracts a substring from a string
- ft_strjoin - Concatenates two strings into a new string
- ft_strtrim - Trims specified characters from both ends of a string
- ft_split - Splits a string into an array using a delimiter
- ft_itoa - Converts an integer to a string
- ft_strmapi - Applies a function to each character of a string
- ft_striteri - Applies a function to each character of a string with index
- ft_putchar_fd - Outputs a character to a file descriptor
- ft_putstr_fd - Outputs a string to a file descriptor
- ft_putendl_fd - Outputs a string followed by newline to a file descriptor
- ft_putnbr_fd - Outputs an integer to a file descriptor

### Part 3: Linked List Functions

Linked list manipulation functions:

- ft_lstnew - Creates a new list element
- ft_lstadd_front - Adds an element at the beginning of a list
- ft_lstsize - Counts the number of elements in a list
- ft_lstlast - Returns the last element of a list
- ft_lstadd_back - Adds an element at the end of a list
- ft_lstdelone - Deletes an element and frees its memory
- ft_lstclear - Deletes and frees all elements of a list
- ft_lstiter - Applies a function to each element of a list
- ft_lstmap - Creates a new list by applying a function to each element

## Resources

### Documentation
- C Standard Library Reference
- Linux Man Pages

### AI Usage
AI tools (such as ChatGPT or Claude) were used for the following tasks:
- Providing explanations of C library function behaviors

All core functionality and implementation logic were written independently to ensure proper understanding of the concepts.
