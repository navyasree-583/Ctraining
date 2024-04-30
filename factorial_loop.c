//Psuedo code for factorial of a  number using a loop
/*
START factorial using loops
Declare num, f=1
Display "Enter any number"
read the number num
for i=1 to i<=num i++
    f=i*f;
end for
Display "Factorial of num is " f
END factorial using loops
*/
#include<stdio.h>
int main(){
    int num,f=1;
    printf("Enter any number :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        f = i * f;
    }
    printf("Factorial of %d is %d",num,f);
    return 0;
}