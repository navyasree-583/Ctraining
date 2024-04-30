#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    (a>b) ? printf("Largest number is %d\n",a) : printf("Largest number is %d\n",b);
    return 0;
}