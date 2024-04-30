#include<stdio.h>
int main(){
    int n,rem;
    printf("Enter the num");
    scanf("%d",&n);
    int num=n;
    int sum=0; 
    while(num!=0){
        rem=num%10;
        sum+=(rem*rem*rem);
        num=num/10;
    }
    (sum==n) ? printf("The number is armstrong number") : printf("Not a armstrong number");
return 0;
}