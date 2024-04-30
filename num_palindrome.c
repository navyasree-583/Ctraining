#include<stdio.h>
void num_palin(int,int);
void num_palin(int num, int orig){
    int rev=0,rem;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    (orig == rev) ? printf("Number %d is a palindrome ",orig) : printf("Number %d is not a palidrome\n", orig); 
}

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    int orig = num;
    num_palin(num,orig);
    return 0;
}