#include <stdio.h>

int main() {

    double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
    int len;

    len = sizeof(arr);
    printf("Size of the array, as in, the number of bytes it occupies is: %d\n", len); // this shows the ammount of bytes it is taking... aka, the size in MEMORY

    /*
    To actually get the size of the array, we have to divide its size by the type of the var like shown below...
    */

   len = sizeof(arr)/sizeof(double);
   printf("The size of the array is: %d\n", len); 
   
   for (int i = 0; i < len; i++) {
    printf("%f\n", arr[i]);
  }
}