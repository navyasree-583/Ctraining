#include<stdio.h>
int main(){
    int num,topval;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Enter topval ");
    scanf("%d",&topval);
    printf("Multiplication table of %d is\n",num);
    for(int i=1;i<=topval;i++){
        printf("%d x %d = %d\n", num, i, (num*i));
    }
    return 0;
}