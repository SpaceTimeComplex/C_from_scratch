#include <stdio.h>

int main() {
    int studentRank; 
    float studentFeeTotal; // more common for daily things like rounding stuff
    double randomStat; // when accuracy is very important like scientific, medical or financial cases
    char studentGradeLetter; // only one character or digit

    studentRank = 1;
    studentFeeTotal = 175.37;
    studentGradeLetter = 'A';
    randomStat = 29.123891263897124612;

    printf("Student's Rank in class: %dst\n", studentRank);
    printf("Student's Total Fees: €%.2f\n", studentFeeTotal);
    printf("Student's Grade: %c\n", studentGradeLetter);
    printf("Here is a random stat: %2.6f\n", randomStat);

}