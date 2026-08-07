#include <stdio.h>

struct Person {
  char name[40];
  int age;
};

// i.e; `void myFunction(struct Bottle b, struct Bottle* bPointer)`
// REMEMBER: when passing pointers to a struct, any modifications of member vars will affect the og struct

/* defining a function, with return type of Person
Contains:
    - function param `friend1` of type Person
    - function param `friend2Pointer`, pointer to type Person
Inside:
    - add 1 to `age` in `friend1`
    - using arrow format, add 1 to `age` var in the struct pointed to by `friend2Pointer`
    - then return struct `friend1`
*/ 
struct Person ageOne(struct Person friend1, struct Person* friend2Pointer) {
  friend1.age += 1;
  friend2Pointer->age += 1;
  return friend1;
}


int main(void) {
  struct Person myFriend = {"Martin", 57};
  struct Person myOtherFriend = {"Michelle", 27};
  // call function and assign return value to `myFriend`
  myFriend = ageOne(myFriend, &myOtherFriend);

  

  printf("Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
}