#include<stdio.h>
int main(){
    int p,t,r;
    printf("Enter principal, time and rate of interest");
    scanf("%d %d %d",&p,&t,&r);
    float SI= (p*t*r)/100;
    printf("Simple Interest is : %.2f", SI);
    return 0;
}