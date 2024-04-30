//Psuedo code for factorial of a  number using resursion
/*
START factorial using resursion
Declare fact function
int fact(int)
Function body
int fact(int num)
    int res
    if num>1
        return num * fact(num-1)
    end if
    else
        return 1
End function body
Main function
    Declare & enter num
    Read num
    Declare res
    res = fact(num)
    Display res
END factorial using rescursion
*/
#include<stdio.h>
int fact(int);
int fact(int num){
    int res;
    if(num>1){
        return num * fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    int res = fact(num);
    printf("Factorial of %d is %d",num,res);
}