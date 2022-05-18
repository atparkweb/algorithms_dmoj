#include <stdio.h>

void print_array(int a[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");
}

// O(n^2)
void insertion_sort(int a[], int n) {
  int i, j, key;

  for (i = 1; i < n; i++) {
    key = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j -= 1;
    }

    a[j + 1] = key;
  }
}

#define SIZE 6

int main(void) {
  int i, number;
  int a[SIZE];

  printf("Input %d integers:\n", SIZE);
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &number);
    a[i] = number;
  }

  insertion_sort(a, SIZE);

  printf("Sorted keys are:\n");

  print_array(a, SIZE);

  return 0;
}
