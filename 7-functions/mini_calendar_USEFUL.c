/*essentially this program asks the user to provide a date between
1800 and 10000 and the number of days to add to the date. The program 
then calculates the new date including if it's a leap year or not.*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_leap_year(int);
void add_days_to_date(int*, int*, int*, int);
char convert_to_month(int*);
char add_prefixes(int*);

bool is_leap_year(int year) {
  if (year % 400 == 0) {
    // automatic yes if divisible by 400
    printf("Leap Year\n");
    return true;
  }
  else if (year % 4 == 0 && year % 100 != 0) {
    // or if divisible by 4 and NOT 100, then leap year
    printf("%d: Leap Year\n", year);
    return true;
  }
  else {
    // otherwise not leap year
    printf("%d: Not Leap Year\n", year);
    return false;
  }
  // another way:
  // `return (year % 4 == 0 && (year % 100 || year % 400 == 0))`;
}

int days_in_month[12+1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int* dd, int* mm, int* yy, int days_to_add) {
  int days_left_in_month;

  while (days_to_add > 0) {
    days_left_in_month = days_in_month[*mm] - *dd; // what the month needs left

    if (*mm == 02 && is_leap_year(*yy) == true) {
      days_left_in_month += 1; // for february leap year to have 29 days
    }

    if (days_to_add > days_left_in_month) {
      days_to_add -= days_left_in_month + 1; // jump to first day of the month
      *dd = 1; // first day of month but what is next month?
      if (*mm == 12) {
        // if last month was December, next is January and +1 year
        *mm = 1;
        *yy = *yy + 1;
      }
      else *mm = *mm + 1; //if other month, just increment by one
  }
  else {
    // if days_to_add <= days_left_in_month...
    // "if all days can be added to this month" simply add them, and there are no more days left to add
    *dd += days_to_add;
    days_to_add = 0;
  }

  }
  
}

char convert_to_month(int* mm) {
  return 0;
}

char add_prefixes(int* dd) {
  return 0;
}

int main() {
  // printf("\n");
  // int year;
  // printf("Enter a year between 1800 and 10000\n");
  // scanf("%d", &year);
  // is_leap_year(year);
  int mm, dd, yy, days_to_add;
  
  printf("Please enter a date between the years 1800 and 10000 in the format dd mm yy and provide the number of days to add to this date: ");
  scanf("%d %d %d %d", &dd, &mm, &yy, &days_to_add);
  printf("Teleporting.... brtrzrzrtzztt...\n");
  add_days_to_date(&dd, &mm, &yy, days_to_add);
  printf("You have arrived at: %d.%d.%d \n", dd, mm, yy);

  if (scanf("%d %d %d %d", &dd, &mm, &yy, &days_to_add) != 4) {
    prtinf("Invalid input");
    return 1;
  }


}