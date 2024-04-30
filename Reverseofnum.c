#include<stdio.h>
int main(){
    int num,rem;
    printf("Enter the num");
    scanf("%d",&num);
    int rev=0;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
   printf("Reverse of a number is = %d\n",rev);
}