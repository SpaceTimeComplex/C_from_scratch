#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  srand(time(NULL));

  //random number between 0-19, add 1 so its betweenn 1 and 20
  // apparently this one can result in errors; an alternavtive found in stackverflow is better: `rand() % (max - min + 1) + min`
  int randomNumber = rand() % 20 + 1;

  printf("%d\n\n", randomNumber);

  float number = 4.5;
  char letter = 'a';
  printf("%f\n", ceil(number)); // 5.000000
  printf("%f\n", log(number)); // 1.504077
  printf("%d\n", isupper(letter)); // 0
  letter = toupper(letter);
  printf("%d\n", isupper(letter)); // 1

}
/*NOTE for self: when making the file that has the math header file, must follow this:

`gcc filename -lm -o file`
or
`clang filename -lm -o file`

this allows the sytem to link math functions */