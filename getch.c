#include<stdio.h>
int main(){
    char answer;
    printf("Would you like to know my name?\n");
    printf("Type Y for YES and N for No : \n");
    answer = getchar();
    (answer== 'Y')? printf("My names is BUSY BEE\n") : printf("OK BYE!!\n");
    return 0;
}