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

### Usage

Include the header and link against the library in your C code:

```c

#include "matrix_mult.h"

int main() {
    int m_1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int m_2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int res[3][3];

    matrix_multiply(m_1, m_2, res);

    // Print or use the result...
    return 0;
}
```

Compile your code with the static library:

```sh

gcc main.c -L. -lmatrix_mult -o main
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
