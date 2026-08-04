#include <stdio.h>

// yes, this small program has the number-to-guess hardcoded
// this program is about the while loop usage

int main() {

  int guess;
  int tries = 0;

  printf("I'm thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  //while the guess is not 8, and num of tries is below 50...
  while (guess != 8 && tries < 50) {
    printf("Nope! Keep on guessing!\n");
    scanf("%d", &guess);
    tries++;
  }

  if (guess == 8) {
    printf("You got it!\n");
  }
}