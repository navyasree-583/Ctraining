#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num==0) printf("Number is 0 ");
    else{
    (num >0) ? printf("Its a positive number") : printf("Its a Negative number");
    }
    return 0;
}