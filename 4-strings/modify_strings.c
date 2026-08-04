#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";

  /* using a loop, replace every character in the string with the char `'*'` on string `s` to "conceal it"
  printf("%s\n", s);
  for (int i = 0; i < strlen(s); i++) {
    s[i] = '*';
  }
  printf("Update: %s\n", s);

  /* next task: string `p` contains string "pool" and its mirror string "loop". Loop through the string and replace the first half with `'#'s` */

  printf("%s\n", p);
  for (int i = 0; i < strlen(p)/2; i++) {
    p[i] = '#';
  }
  printf("Update: %s\n", p);
}