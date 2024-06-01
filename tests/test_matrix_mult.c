
#include "../include/matrix_mult.h"
#include <stdio.h>

int main() {
  int m_1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int m_2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int res[3][3];

  matrix_multiply(m_1, m_2, res);

  printf("Result matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
  return 0;
}
