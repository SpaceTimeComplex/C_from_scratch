#include <stdio.h>

// returns no value, one param that is int pointer, and increments the value that the pointer points to
void incrementAge(int* agePointer) {
  *agePointer += 10;
}


int main(void) {
  int age = 99;
  printf("Before: %d\n", age);
  incrementAge(&age); // call func, pass the address of age
  printf("After: %d\n", age);
  // should show the new modified value
}