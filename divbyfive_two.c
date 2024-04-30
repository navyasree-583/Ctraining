#include<stdio.h>
int main(){
    int sum=0;
    int i=1;
    while(i<=100){
        if(i%5==0 && i%12==0){
            sum+=i;
        }
        i++;
    }
    printf("Sum of numbers 1 to 100 divisible by 5 and 12 is = %d\n",sum);
}