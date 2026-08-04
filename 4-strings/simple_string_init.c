#include<stdio.h>

int main() {
  // a str using an initialized aray of `char`s
  char comp[] = {'C', 'o', 'm', 'p', 'u','t','e', 'r', '\0'};
  
  // using string literals, create another string
  char compCode[] = "Computer Code";

  // printing them
  printf("%s\n", comp); // notice we use %s instead of %c becasue this is a string, not a char anymore
  printf("%s\n", compCode);      
}