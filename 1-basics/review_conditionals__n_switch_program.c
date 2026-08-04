#include <stdio.h>

int main() {
  double earth_weight;
  double interplanetary_weight;
  int choice;

  printf("\nWelcome! This program will keep track of your target weight in space. \n\nFirst, provide your earth weight in kg: ");
  scanf("%lf", &earth_weight);

  if (earth_weight > 350 || earth_weight < 10) {
    printf("\nCome on.... I refuse to believe this is your real weight.\n\nWelp... If so... ");
  }

  printf("\n\nWhich planet do you want to fight on? \nThere are the following:\n");
  printf("1. Mercury");
  printf("\t2. Venus");
  printf("\t3. Mars\n");
  printf("4. Jupiter");
  printf("\t5. Saturn");
  printf("\t6. Uranus\n");
  printf("7. Neptune\n\n");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      interplanetary_weight = earth_weight * 0.38;
      break;
    case 2:
      interplanetary_weight = earth_weight * 0.91;
      break;
    case 3:
      interplanetary_weight = earth_weight * 0.38;
      break;
    case 4:
      interplanetary_weight = earth_weight * 2.34;
      break;
    case 5:
      interplanetary_weight = earth_weight * 1.06;
      break;
    case 6:
      interplanetary_weight = earth_weight * 0.92;
      break;
    case 7:
      interplanetary_weight = earth_weight * 1.19;
      break;
  }

  printf("\nAccording to our sources, your earth weight here is: %.2lf kg\n", interplanetary_weight);

}