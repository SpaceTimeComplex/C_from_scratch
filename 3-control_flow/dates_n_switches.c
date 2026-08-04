#include <stdio.h>

int main(void) {
  int month, day, year;

  printf("Enter date (dd/mm/yyyy): ");
  // split the user input into 3 variables for the date
  scanf("%d /%d /%d", &day, &month, &year);
    if (day > 31){
        printf("Oh, well this will cause problems. There are no more than 31 days in any month!\n");
  }


  // print the month
  switch(month){
    case 1:
      printf("January ");
      break;
    case 2:
      printf("February ");
      break;
    case 3:
      printf("March ");
      break;
    case 4:
      printf("April ");
      break;
    case 5:
      printf("May ");
      break;
    case 6:
      printf("June ");
      break;
    case 7:
      printf("July ");
      break;
    case 8:
      printf("August ");
      break;
    case 9:
      printf("September ");
      break;
    case 10:
      printf("October ");
      break;
    case 11:
      printf("November ");
      break;
    case 12:
      printf("December ");
      break;
  }

  // print the day
  printf("%d", day);

  // print the suffix for a given day
  switch(day){
    case 1: case 21: case 31:
      printf("st ");
      break;
    case 2: case 22:
      printf("nd ");
      break;
    case 3: case 23:
      printf("rd ");
      break;    
    default: // this is the rest, which tend to be 11th, 25th, etc
      printf("th ");
      break;
  }

  // print the year
  printf("%d\n", year);
  
  
  return 0;
}