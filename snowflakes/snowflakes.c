#include <stdio.h>
#include "snowflakes.h"

// Compare two snowflakes in O(n^2) time complexity
// input: array of arrays of length 6, length of array (6)
// output: nothing. Print "match" or "no match" based on if arrays are equal or not

// Check if the snowflakes are identical moving from left to right and wrapping
// input: 2 snowflakes to compare (arrays of length 6), the start index
// output: number -- 1 if there is a match, 0 if there isn't a match

// Check if the snowflakes are identical moving from right to left and wrapping
// input: 2 snowflakes to compare (arrays of length 6), the start index
// output: number -- 1 if there is a match, 0 if there isn't a match

// Check if the snowflakes are both identical right and left
// input: 2 snowflakes (arrays of int)
// output: number -- 1 if there is a match, 0 if there isn't a match

#define MAX_SIZE 100000

int main(void) {
  int snowflakes[MAX_SIZE][6];
  int n, i, j;

  printf("How many snowflakes?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter 6 values for snowflake %i:\n", i + 1);
    for (j = 0; j < 6; j++) {
      scanf("%d", &snowflakes[i][j]);
    }
  }
  return 0;
}
