## Description

The goal of the Libft project is to recreate a custom version of the standard C library, called "libft," by implementing essential functions from the C standard library that handle tasks like string manipulation, memory management, and linked list operations. This project is a crucial foundation for learning low-level programming and understanding how memory and resources are managed in C.

The focus is on building a set of utility functions that will be useful in future projects, making it easier to work with C programming at a system level.

## Key Restrictions & Challenges

- **No Use of the Standard Library (except for allowed system calls):** This means that `malloc`, `printf`, `memcpy` are not allowed. Instead, we must implement these functions ourselves. This constraint pushes us to understand the inner workings of common C functions and strengthens our ability to work without relying on built-in tools.
  
- **Memory Management:** Proper memory allocation and deallocation are critical, especially for the linked list functions.
  
- **Implementation of Edge Cases:** The project requires us to carefully handle edge cases. For example, functions like `ft_strcpy` must account for cases like copying an empty string or handling null pointers, while `ft_atoi` must handle invalid inputs and large integer values gracefully.
  
- **Efficiency and Performance:** Although the focus is on implementation, there’s also an emphasis on efficient algorithms. Functions like `ft_memmove` must be implemented in a way that accounts for overlapping memory areas, ensuring that data is not corrupted.
  
- **Testing:** While no external testing framework is provided, rigorous self-testing is necessary to ensure correctness. Functions like `ft_memcpy` must be tested on various data types and edge cases (e.g., null pointers, overlapping memory regions) to ensure robustness.

## How to Run the Program

1. **Compile the Program:**
   First, compile the library by running:

   ```bash
   make

2. **Usage**

To use `libft` in your project, include the header file and compile with the library:

```c
#include "libft.h"

int main()
{
    char *str = ft_strdup("Hello, world!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```
Compile with:

```bash
gcc main.c libft.a -o test_program
