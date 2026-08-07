//continuing from `structure_dot_notation.c`...

#include <stdio.h>

struct Person {
  char name[40];
  int age;
};

int main(void) {
  struct Person person1 = {"Martin", 57};
  struct Person person2 = {"Michelle", 27};
  // creating pointers to `personX` called `personXPointer`
  struct Person *person1Pointer = &person1;
  struct Person *person2Pointer = &person2;

  // using dereferencing and dot notation, add 1 to age of person1
  (*person1Pointer).age += 1;

  // using arrow notation, add 10 to age of person2
  person2Pointer->age += 10;
  

  printf("Hello my name is %s and I am %d years old.\n", person1.name, person1.age);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}