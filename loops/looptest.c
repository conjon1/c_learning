#include <stdio.h>

#define MAX_IDS 32

int main() {

  int ids[MAX_IDS] = {0};

  // LOOP - do the same thing over and over
  // until the condition is met
  // for loops
  // while loops
  // do while
  //
  int i = 0;
  for (i = 0; i < MAX_IDS; i++) {
    ids[i] = i * i;
    printf("%d: %d\n", i, ids[i]);
  }

  i = 0;
  while (i < MAX_IDS) {

    ids[i] = i * i;
    printf("%d: %d\n", i, ids[i]);
    i++;
  }

  i = 0;
  do {
    ids[i] = i * i;
    printf("%d: %d\n", i, ids[i]);
    i++;
  } while (i < MAX_IDS);
}
