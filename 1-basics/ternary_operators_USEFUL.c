#include <stdio.h>

int main() {

    int x = 10;
    int y = 20;
    printf("We have: x=%d and y=%d\n", x, y);

    // ternary operator syntax: (condition) ? do something : else something else
    
    x > y ? printf("x is greater than y\n") : printf("y is greater than x\n");
}