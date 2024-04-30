/*
PSUEDO CODE
SUM AND AVG OF ALL EVEN NUMBERS  FROM 1 TO 100 INCLUDING 100

START SUM AND AVG OF EVEN NUMBERS FROM 1 TO 100

DECLARE  sum, even, avg
sum=0
c=0
for i=1 t0 i>=100
    if even = i%2==0
        c++
        sum+=even
    endif
endfor
avg = sum/c
DISPLAY sum
DIAPLAY avg

END PROGRAM

*/
#include<stdio.h>
int main(){
    int sum,avg,c;
    sum=0;
    c=0;
    for(int i=2;i<=100;i+=2){
        sum+=i;
        c++;
    }
printf("The sum of even numbers is =%d\n",sum);
printf("The average of even numbers is =%d",sum/c);
return 0;
}