#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // get the element at row=4, col=2
   int num = matrix[3][1]; // begin index=0... this means row=4, col=2
   printf("Found the num at row 4 column 2: %d\n\n", num);

  // print the sum of all the elements inside the `matrix` array
  int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
  int columnDimension = sizeof(matrix[0])/sizeof(int);

  for(int i = 0; i < rowDimension; i++) {
    // accessing the rows
    for(int j = 0; j < columnDimension; j++) {
      /* accessing the columns now
      adds the number at i=0,j=0 and so on;
      in this case, i=0,j=0 is 14, gets added to the sum, then it moves on to i=0,j=1 which is 10, gets added, etc, etc ... */
      sum += matrix[i][j];
    }
  }
  printf("The total sum of all elements inside the array is: %i\n", sum);
}