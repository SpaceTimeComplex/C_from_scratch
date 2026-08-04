#include <stdio.h>
#include <string.h>
int main() {
  int counter1[] = {0,0,0,0};
  int counter2[] = {0,0,0,0};
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  int flag = 0; // to check if theres a mismatch in the two counters; 0=none, 1=mismatch

  // for s1, counting characters
  // remember strlen()+1 accounts for the null character '\0' which signals the end of the str
  for (int i = 0; i < strlen(s1)+1; i++) {
    //printf("%d ", i);
    switch(s1[i]) {
      case 'a':
        counter1[0]++;
        break;
      case 'b':
        counter1[1]++;
        break;
      case 'c': 
        counter1[2]++;
        break;
      case 'd':
        counter1[3]++;
        break;
      case ' ':
        continue;
    }
  }
  printf("Counter1 for a,b,c,d respectively: %d|%d|%d|%d \n", counter1[0],counter1[1],counter1[2],counter1[3]);

  // now for s2, counting characters
  for (int i = 0; i < strlen(s2)+1; i++) {
    //printf("%d ", i);
    switch(s2[i]) {
      case 'a':
        counter2[0]++;
        break;
      case 'b':
        counter2[1]++;
        break;
      case 'c': 
        counter2[2]++;
        break;
      case 'd':
        counter2[3]++;
        break;
      case ' ': // skip the empty spaces
        continue;
    }
  }
  printf("Counter2 for a,b,c,d respectively: %d|%d|%d|%d \n\n", counter2[0],counter2[1],counter2[2],counter2[3]);

  ///// loops 4 times, since both counters are of same size
  for (int i = 0; i < 4; i++) {
    if (counter1[i] != counter2[i]) {
      flag = 1; // a mismatch found
      break;
    }
    else {
      flag = 0; // then no mismatch
    }
  }

  // checking if they are anagrams or not; 0=no mismatches, 1=at least one mismatch was found
  if (flag == 0){
    printf("Anagram!\n");
  }
  else {
    printf("Not Anagram!\n");
  }

}