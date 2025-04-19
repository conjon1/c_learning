#include <stdio.h>
#define MAX 1000

void print_evens_up_to_1000_directly(void) {
  int number;
  for (number = 2; number < 1000; number += 2) {
    printf("%d\n", number);
  }
}

int main() {
  print_evens_up_to_1000_directly();
  return 0;
}
