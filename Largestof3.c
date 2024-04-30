#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a b c values");
    scanf("%d %d %d",&a,&b,&c);
    if( a>b && a>c)
        printf("Largest num is a = %d",a);
    else if(b>a && b>c)
        printf("Largest num is b = %d",b);
    else 
        printf("Largest num is c = %d",c);

    return 0;
}