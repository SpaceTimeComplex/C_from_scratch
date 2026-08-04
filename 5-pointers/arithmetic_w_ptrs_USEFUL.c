/*
The important thing to note here is that adding n to a pointer does not increment the address to point to a value n bytes away. It moves the pointer by n * (size of the data type in bytes). 

For example, if a pointer to an int, the size of which is four bytes, initially contains address 100 (using a decimal address for simplicity), and three is added to the pointer, the pointer will now point to address 112.

TO REMEMBER: pointer addresses print in HEX, not decimal
i.e., adding 5 to address of `..c44` (5x4=20 byte shift) will instead show an increase of 14 `..c58`
Why? in hex, 14 actually IS 20
hex is base 16
*/

#include<stdio.h>

int main() {
    int x = 5;
        
    int* ptr1 = &x; // pointing to the address of x
    printf("Value of x: %d\n", x);
    printf("Value of x using *ptr: %d\n", *ptr1);
    //
    printf("Address of x using '&x': \t%p\n", &x);
    printf("Address of x using 'ptr1': \t%p\n\n", ptr1);
    // they should be the same

    // increment int pointer `ptr1` by five
    ptr1 += 5;
    printf("ptr1 -> x, but added 5: \t%p \n", ptr1);

    // decrement the pointer `ptr1` by four
    ptr1 -= 4;
    printf("ptr1 -> x, now substracted 4: \t%p \n", ptr1);
}