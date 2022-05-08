#include <stdio.h>
#include "snowflakes.h"

#define SIZE 100000

int main(void) {
  int snowflakes[SIZE][6];
  int n, i, j;
  printf("How many snowflakes?\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter 6 values for snowflake %i:\n", i+1);
    for (j = 0; j < 6; j++) {
      scanf("%d", &snowflakes[i][j]);
    }
  }
  identify_identical(snowflakes, n);
  return 0;
}
