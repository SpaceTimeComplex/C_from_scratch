#include<stdio.h>

int main() {
  
  double g = 9.81;
  double pi = 3.14;
  
  // declare pointer, assign it to address of variable `g`
  double *dblPtr = &g;
  
  // print the address of var `g`
  printf("%p\n", dblPtr); // or just &g

  // reassign dblPtr to adddress of var `pi`
  dblPtr = &pi;  
}
