#include <stdio.h>
/*
If the myNumber variable local to main() is less than or equal to 50 the output will be:

`39`
`This is my global message!`

If the myNumber variable local to main() is greater than 50 the output will be:

`500`
`This is my local message!`

*/

char* myMessage = "This is my global message!";

void myFunc() {
  char* myMessage = "This is my local message!";
  printf("%s\n", myMessage);
}

int main() {
  // can change `myNumber` to be larger than `50` to test
  int myNumber = 39;

  if (myNumber <= 50) {
    printf("%d\n", myNumber);
    printf("%s\n", myMessage);
  } else {
    int myNumber = 500;
    printf("%d\n", myNumber);
    myFunc();
  }
}