#include <stdio.h>

int main() {
  
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  // updating movie review score
  movieVersionReview = 'C';

  // updating its ticket price
  ticketPrice = bookPrice;

  printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}