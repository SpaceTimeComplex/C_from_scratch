// basically just like C++...or the other way around...?

#include <stdio.h>
#include <string.h>

struct Person {
  char name[40];
  int age;
  char occupation[25];
};

int main(void) {
  struct Person person1 = {"Martin"};
  struct Person person2 = {"Michelle"};
  
  // can also declare first without initializing right away using dot notation.
  // So, declaration is required, but immediate initialization is optional.
  person1.age = 57;
  person2.age = 27;
  
  // for strings, you cannot initialize afterwards tho...
  // `person1.occupation = "Student";` does not work. must use strcpy
  strcpy(person1.occupation, "Instructor");
  strcpy(person2.occupation, "Student");
  

  printf("Hello my name is %s and I am %d years old. Occupation: %s\n", person1.name, person1.age, person1.occupation);
  printf("Hello my name is %s and I am %d years old.\n", person2.name, person2.age);
}