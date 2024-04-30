#include<stdio.h>
#include "user.h"
int age_ht(int age){
    int a=age;
    printf("Age of person is %d",a);
   return a;
}
int main(){
    int num=1;
    user_detail(num);
    return 0;
}