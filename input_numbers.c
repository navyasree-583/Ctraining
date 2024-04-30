#include<stdio.h>
int main(){
    int num,sum=0;
    
    scanf("%d",num);
    while(num!=-1){
        sum=sum+num;
    }
    printf("Sum is %d", sum);
}