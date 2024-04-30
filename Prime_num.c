/*Input a number and Display a number is prime or not*/
/*PSUEDO CODE
START PRIME NUMBER
DECLARE NUM, FLAG=0
FOR I=2 I<=NUM I++
    if NUM % I == 0
        FLAG++
    END IF
END FOR
FLAG==2 ? DISPLAY "PRIME NUMBER" : DISPLAY "NOT A PRIME NUMBER"
END PRIME NUMBER

START PRIME NUMBER
DECLARE NUM, FLAG=1
if NUM==0 || NUM==1
    DISPLAY "NOT A PRIME NUMBER"
END IF
ELSE IF 
    for i=2; i<=NUM/2; i++
        if NUM%i==0
            FLAG++
        END if
    END FOR
    if FLAG==2
        DISPLAY "IS A PRIME NUMBER"
    END if
    DISPLAY "NOT A PRIME NUMBER"
END PRIME NUMBER

*/
#include<stdio.h>
int main(){
    int num,flag=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        if(num%i==0){
            flag++;
        }
    }
    (flag==2)?printf("It is a Prime Number"): printf("Not a Prime Number");
    return 0;
}