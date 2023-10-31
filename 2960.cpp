#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  long num1, num2;

  scanf("%ld %ld", &num1, &num2);
  long *arr = (long *)malloc(sizeof(long) * num1);

  long s = 0;
  for (long i = 2; i <= num1; i++) {
    for (long k = 1; i * k - 1 < num1; k++) {
      if (arr[i * k - 1] == 0) {
        arr[i * k - 1] = 1;

        s++;
        if (s == num2) {
          printf("%ld", i * k);
          break;
        }
      }
    }
  }
  free(arr);
  return 0;
}