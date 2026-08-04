#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // creating a number that’s 0 or 1
  srand (time(NULL));
  int coin = rand() % 2;

  // if number is 0: Heads
  // if it is not 0: Tails
  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }
}