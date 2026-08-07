/* defining a struct. Inside the curly brackets, member variables 
should only be declared, and not initialized.
Example for a general approach:

    struct StructName {
    char* name;
    int something;
    ... 
    };
    
*/
#include <stdio.h>

struct Person {
    char firstName[25];
    char lastName[25];
    int age;
};

int main(void) {

    // initializing them
    struct Person person1 = {"Rick", "Astley", 99};
    // DJ KHALEEEED anotha' one
    struct Person person2 = {"Ada", "Lovelace", 28};
    // anotha' one
    struct Person person3 = {"Marie", "Curie", 44};
    // anotha' one
    struct Person person4 = {"Mr."}; // not necessary to initalize everything, but at least one. More on this later.

}