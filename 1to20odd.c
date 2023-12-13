//Write a program to print 1 to 20 numbers by skipping even numbers.
#include <stdio.h>

int main() {
  int i;
  for (i = 1; i <= 20; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}
