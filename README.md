*This project has been created as part of the 42 curriculum by nfatihi.*


## Description:
libft is the foundational project at 42, designed to make us recode a set of standard C library functions from scratch. The goal is to understand how these core functions work under the hood, how they manage memory, and how to build a reliable, reusable static library `libft.a` that we can utilize in future C projects.

The project covers distinct C concepts including:
- Libc Functions: Reimplementation of standard library functions for character checks, string manipulation, and conversions (`ft_strlen`, `ft_strchr`, `ft_strncmp`, `ft_atoi`).
- Memory Manipulation: Low-level byte and memory block operations (`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`).
- Memory Allocation: Safe dynamic memory allocation wrappers and string builders (`ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`).
- File Descriptor Output: Functions for writing characters, strings, lines, and numbers to specified file descriptors (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`).
- Linked Lists: Comprehensive data structure utilities for managing singly linked lists (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`).

## Instructions:
- To compile the static library (`libft.a`), run the provided Makefile from the root of your project directory:  
  `make`
- To clean up object files:  
  `make clean`
- To clean up object files and the compiled library:  
  `make fclean`
- To re-compile everything from scratch:  
  `make re`

To use libft in your own C projects, include the header file in your source code:
`#include "libft.h"`

## Resources:
* [Compiling a C Program - Behind the Scenes (GeeksforGeeks)](https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes/): A clear breakdown of the four phases of compilation (Preprocessing, Compilation, Assembly, and Linking), which is essential for understanding how Makefiles and static libraries work.
* Man Pages: Essential reference for understanding standard library behavior, return values, and potential errors (`man 3 strlen`, `man 3 memset`, ...).
* AI Assistants (Gemini / Claude): Used as a conceptual study aid and interactive tutor to understand complex C memory mechanics, pointer behavior, and standard function specifications.