# libft

## 📌 Project Overview

`libft` is a custom C library that reimplements a set of standard C library functions, as well as additional utility functions that simplify string manipulation, memory management, and linked list operations. This project is a fundamental part of the 42 curriculum, reinforcing a deep understanding of C programming.

## 🚀 Features

- Custom implementation of standard C functions from `string.h`, `stdlib.h`, and `ctype.h`.
- Additional utility functions for string operations, memory allocation, and linked lists.
- Modular structure, allowing easy integration into other projects.
- Bonus functions for linked list manipulation.

## 📁 Files

- `libft.h` - Header file containing function prototypes and necessary includes.
- `ft_*.c` - Individual source files implementing the library functions.
- `Makefile` - Automates compilation and library creation.

## 🔧 Usage

### 1️⃣ Compilation

To compile and create the library:

```sh
make
```

This generates `libft.a`, which is a static library.

To clean up object files:

```sh
make clean
```

To remove all compiled files, including `libft.a`:

```sh
make fclean
```

To recompile from scratch:

```sh
make re
```

### 2️⃣ Integration

To use `libft` in your project, include the header and link the library:

```c
#include "libft.h"
```

## 🛠 Function Categories

### 📝 String Manipulation

- `ft_strlen` - Get the length of a string.
- `ft_strchr` - Locate a character in a string.
- `ft_strrchr` - Locate the last occurrence of a character in a string.
- `ft_strncmp` - Compare two strings up to `n` characters.
- `ft_strnstr` - Find a substring in a string.
- `ft_strdup` - Duplicate a string.
- `ft_strjoin` - Concatenate two strings.
- `ft_strtrim` - Trim characters from the beginning and end of a string.
- `ft_strmapi` - Apply a function to each character of a string.
- `ft_striteri` - Apply a function to each character of a string (modifying in place).
- `ft_split` - Split a string into an array based on a delimiter.
- `ft_substr` - Extract a substring from a string.
- `ft_strlcpy` - Copy a string with size limitation.
- `ft_strlcat` - Concatenate two strings with size limitation.

### 🔢 Memory Management

- `ft_memset` - Fill a memory area with a byte.
- `ft_memcpy` - Copy memory from one location to another.
- `ft_memmove` - Move memory safely.
- `ft_memchr` - Search for a byte in memory.
- `ft_memcmp` - Compare two memory areas.
- `ft_calloc` - Allocate memory and initialize it to zero.
- `ft_bzero` - Set a memory area to zero.

### 🔤 Character Handling

- `ft_isalpha` - Check if a character is alphabetic.
- `ft_isdigit` - Check if a character is a digit.
- `ft_isalnum` - Check if a character is alphanumeric.
- `ft_isascii` - Check if a character is in the ASCII set.
- `ft_isprint` - Check if a character is printable.
- `ft_toupper` - Convert a character to uppercase.
- `ft_tolower` - Convert a character to lowercase.

### 🔢 Number Conversion

- `ft_atoi` - Convert a string to an integer.
- `ft_itoa` - Convert an integer to a string.

### 🖥 File Descriptor Functions

- `ft_putchar_fd` - Write a character to a file descriptor.
- `ft_putstr_fd` - Write a string to a file descriptor.
- `ft_putendl_fd` - Write a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Write a number to a file descriptor.

## 🏆 Learning Outcomes

- Deep understanding of standard C library functions.
- Memory allocation and management.
- String manipulation.
- Makefile usage for compiling libraries.

## 📜 License

This project follows the [42 School](https://42.fr/) coding standards.

---

