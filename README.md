*This project was developed as part of the 42 curriculum by catencio*

# Libft Project
---
## Description
**Libft** is the first project in the 42 school curriculum. It involves developing a custom C library that replicates essential functions from the standard libc, along with additional custom functions for memory management, string manipulation, and linked list handling.

## Resources

### List of functions and manual

#### Functions - Part 1
*   `ft_isalpha` [man](https://man7.org/linux/man-pages/man3/isspace.3.html)
*	`ft_isdigit` [man](https://man7.org/linux/man-pages/man3/isspace.3.html)
*	`ft_isalnum` [man](https://man7.org/linux/man-pages/man3/isalnum.3p.html)
*	`ft_isascii` [man](https://man7.org/linux/man-pages/man3/isascii.3p.html)
*	`ft_isprint` [man](https://man7.org/linux/man-pages/man3/isprint.3p.html)
*   `ft_strlen` [man](https://man7.org/linux/man-pages/man3/strlen.3.html)
*	`ft_memset` [man](https://man7.org/linux/man-pages/man3/memset.3.html)
*	`ft_bzero` [man](https://man7.org/linux/man-pages/man3/bzero.3.html)
*	`ft_memcpy` [man](https://man7.org/linux/man-pages/man3/memcpy.3.html)
*	`ft_memmove` [man](https://man7.org/linux/man-pages/man3/memmove.3.html)
*   `ft_strlcpy` [man](https://man7.org/linux/man-pages/man7/string_copying.7.html)
*	`ft_strlcat` [man](https://man7.org/linux/man-pages/man7/string_copying.7.html)
*	`ft_toupper` [man](https://man7.org/linux/man-pages/man3/toupper.3.html)
*	`ft_tolower` [man](https://man7.org/linux/man-pages/man3/tolower.3p.html)
*   `ft_strchr` [man](https://man7.org/linux/man-pages/man3/strchr.3.html)
*	`ft_strrchr` [man](https://man7.org/linux/man-pages/man3/strrchr.3p.html)
*	`ft_strncmp` [man](https://man7.org/linux/man-pages/man3/strncmp.3p.html)
*	`ft_memchr` [man](https://man7.org/linux/man-pages/man3/memchr.3.html)
*	`ft_memcmp` [man](https://man7.org/linux/man-pages/man3/memcpy.3.html)
*   `ft_strnstr` [man](https://man.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)
*	`ft_atoi` [man](https://man7.org/linux/man-pages/man3/atoi.3.html)

#### Aditional functions - Part 2
*   `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
*   `ft_itoa`, `ft_strmapi`, `ft_striteri`
*   `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

#### Linked lists - Bonus
*   `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
*   `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

#### Compilation

1.  Compile the library:
    ```bash
    make        # Compiles the mandatory functions
    ```

3.  To use the library in your code, include the header file:
    ```c
    #include "libft.h"