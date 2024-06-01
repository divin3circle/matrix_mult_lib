
#include "../include/matrix_mult.h"

void matrix_multiply(int m_1[3][3], int m_2[3][3], int res[3][3]) {
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++) {
      res[i][j] = 0;
      for (int k = 0; k <= 2; k++) {
        res[i][j] += m_1[i][k] * m_2[k][j];
      }
    }
  }
}
