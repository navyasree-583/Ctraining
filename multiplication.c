/*
PSUEDO CODE
START Muliplication program
Declare multiply(num)
    for i=1 i<=7 i++
        Display "num * i=", num*i
    end for
end multiply function 

Declare num
    Enter a number
    Call muliply(num)
*/
#include<stdio.h>
void multiply(int);
void multiply(int num){
     for(int i=1;i<=num;i++){
        printf("%d X %d = %d\n",num,i, num*i);
        }
}
int main(){
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    multiply(num);
}