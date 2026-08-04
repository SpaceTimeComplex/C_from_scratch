#include<stdio.h>

int main() {
  // var of type double
  double dblVar = 1.591;

  // pointer var `dblPtr` that points to address of `dblVar`
  double *dblPtr = &dblVar;

  // print the address stored in `dblPtr`, which is the address of `dblVar`
  printf("%p\n", dblPtr);


  // the reference operator `&`-> this just gets the address of the var
  
  
}