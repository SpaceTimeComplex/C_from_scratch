/*
"Care is stressed with pointers because:

- Accessing memory outside valid bounds can overwrite or corrupt data.
- Dereferencing an invalid or uninitialized pointer can crash the program.
- Memory leaks can happen if dynamically allocated memory is not freed.
- Security risks, like buffer overflows, can occur.
- Pointers give direct access to memory, so mistakes can cause hard-to-find bugs or vulnerabilities."
*/

#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // pointer to the last element in `arr`
  int *ptr = &arr[9];

  // loop through `arr` and print contents in reverse
  for (int i = 10; i > 0; i--) {
    printf("%d\n", *ptr);
    ptr--;
  }

  // pointer to the first character in string `s`
  char *ptr2 = &s[0];

  // using `ptr2`, loop through `s` and replace all chars with '#'
  /*
  when CHANGING a string, we do not consider the null character, i.e., `strlen(s)+1`. This woudl then overwrite the null terminator and break the string. 
  When READING the string, consider it.
  When WRITING the string, do not. 
  */

  for (int i = 0; i < strlen(s); i++) {
    *ptr2 = '#';
    ptr2++;
  }
  
  printf("%s\n", s);  
}

