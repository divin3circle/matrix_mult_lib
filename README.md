# Matrix Multiplication Library

A simple C library to perform multiplication of 3x3 matrices.

## Installation

### Using Make

To build the static and dynamic libraries, run:

```sh
make all

gcc -c src/matrix_mult.c -o matrix_mult.o
ar rcs libmatrix_mult.a matrix_mult.o
gcc -shared -o libmatrix_mult.so src/matrix_mult.c
```
