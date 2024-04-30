#include<Stdio.h>
void months_days(int);
void months_days(int days){
    int months= days/30;
    int d = days%30;
    printf("Months = %d and Days = %d",months,d);
}
int main(){
    int days;
    printf("Enter number of days");
    scanf("%d",&days);
    months_days(days);
    return 0;
}