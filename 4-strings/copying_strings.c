#include<stdio.h>
#include<string.h>

int main() {
  
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";

  // task 2: make it so that empty char array, `dst2`, has enough space to store letters of string `pan`

  int len = strlen(pan)+1; // we +1 to account for null character '\0'
  char dst2[len];
  
  // task 1: copy str from `src` to `dst`
  strcpy(dst, src);
  printf("%s\n", dst);  
  
  // task 3: copy letters of `pan` into `dst2`
  strcpy(dst2, pan);
  printf("%s\n", dst2);

}