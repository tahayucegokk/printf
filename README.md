# ft_printf

The `ft_printf` project is a custom implementation of the C standard library function `printf`. It handles various format specifiers to output formatted data to the terminal. The goal is to replicate the behavior of `printf`, including handling different data types like integers, strings, characters, pointers, and more.

## Overview

- **Purpose**: The `ft_printf` function mimics the standard `printf` function, allowing formatted output in the terminal with support for various format specifiers.
- **Supported Format Specifiers**:
  - `%c`: Character output
  - `%d` and `%i`: Integer output
  - `%u`: Unsigned integer output
  - `%x` and `%X`: Hexadecimal output (lowercase/uppercase)
  - `%p`: Pointer (address) output
  - `%s`: String output
  - `%%`: Percent sign output

## Usage

### `ft_printf` Function

The `ft_printf` function works by accepting a format string and a variable number of arguments, then producing formatted output based on the specifiers in the format string.

### Function Signature

```c
int ft_printf(const char *str, ...);
