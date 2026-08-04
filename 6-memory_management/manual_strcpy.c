#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

/*

 Goal: understanding how strcpy works under the hood via teh use of pointers and dereferencing.

 */

void copy(char* dst, char* src){

    // stop when it reaches the null char in `src`
    while(*src != '\0') {
        // copy the char pointed to by src into address of dst
        *dst = *src;
        // then increment the pointers, to point to next (available) char
        src++;
        dst++;
    }
    // if it finds the null char, it will break out of the while loop
    // and then the iteration should be in last char of dst
    // set that last char as terminating null char
    *dst = '\0';


}

int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  char dstString[strlen(srcString)+1]; // make it be as long as srcString

  copy(dstString, srcString);
  printf("%s \n", dstString);
 
}
