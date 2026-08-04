#include <stdio.h>

int main() {
  
    /* good to know info when dealing with ASCII:
    -> 97 is the beginning of lowercase alphabet; a=97, b=96, and so on
    -> 65 is the beginning of UPPERCASE alphabet; A=65, B=66 and so on
    */

  char targetChar;
  char double_targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;
  

  targetChar = (char)sourceInt; // 99 is letter c
  double_targetChar = sourceDouble; // it breaks down 55.67 into only 55, which corresponds to ASCII value of number 7

  printf("source int %d, source double, %.2f, target %c, double_target %c\n", sourceInt, sourceDouble, targetChar, double_targetChar);

}