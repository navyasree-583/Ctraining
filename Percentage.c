// Find Percentage of 5 subjects
#include<stdio.h>
int main(){
    float sub1, sub2, sub3;
    printf("Enter 3 subject marks");
    scanf("%f%f%f",&sub1,&sub2,&sub3);
    float Tot_marks = sub1+sub2+sub3;
    float avg_marks = Tot_marks/3.0;
    float perc = (Tot_marks/300)*100;
    printf(" Total = %.2f avg_marks=%.2f percentage=%.2f",Tot_marks, avg_marks, perc);

    return 0;
}