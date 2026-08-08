#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc() and free()

// menus and data, program output -> printf(...) (stdout)
// errors, warnings, and debugging logs -> fprintf(stderr, ...) (stderr)

int main(void) {
    int count = 5;
    printf("This program dynamically allocates memory.\n");

    // 1: allocate by requesting space for 5 ints on the Heap
    int *scores = malloc(count * sizeof(int)); // calculates exact num of bytes for 5 ints

    // 2. the null check
    if (scores == NULL) {
        fprintf(stderr, "Out of memory!\n"); // print error message to 
        return 1; // this means a failure/ error (usually returning 0 is success)
    }

    // 3. populate and print the array
    for (int i = 0; i < count; i++) {
        scores[i] = (i+1) * 100; // gives 100, 200, etc

    }
    // print stored values
    printf("Scores: ");
    for (int i=0; i < count; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
    
    // clean up by handing memory back to the system
    free(scores);
    // set pointer to NULL. Like a safeguard preventnig a 'dangling pointer'
    scores = NULL;
    
    printf("Memory successfully returned and pointer cleared!\n");
    return 0;
}