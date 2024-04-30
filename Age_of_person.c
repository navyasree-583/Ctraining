#include<stdio.h>
int main(){
    int age;
    printf("Enter age of person");
    scanf("%d",&age);
    if(age<13) printf("Person is a child\n");
    else if(age<20) printf("Person is a Teenager\n");
    else if(age<35) printf("Person is adult\n");
    else printf("Person is Senior citizen\n");
    return 0;
}