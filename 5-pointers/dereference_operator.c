#include<stdio.h>

int main() {
  
  int k = 2000;
  int* ptr = &k;
  
  // 1. print data stored in memory address that `ptr` points to
  printf("%i\n", *ptr);

  // 2. changing value contained in memory address pointed to by `ptr` from 2000 to 961
  *ptr = 961;

  /*
  essentially, these pointers "point" to the address of the var, but you can also "point" to the value, hence being able to change it with `*ptr = 1`
  */

  printf("%i\n", k); // notice how variable k changed value after step 2
}