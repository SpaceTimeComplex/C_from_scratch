#include<stdio.h>
#include<string.h>

int main() {
    
  char s1[14] = "London";
  char s2[] = " Bridge";

  char n[20] = "New";
  char y[] = " York";
  char c[] = " City";

  // concatenate `s1` and `s2`, print the result
  strcat(s1, s2);
  printf("%s\n", s1);
  
  // now concatenate string `n`, `y`, `c`, then print
  strcat(n,y);
  strcat(n,c);
  printf("%s\n", n);

}