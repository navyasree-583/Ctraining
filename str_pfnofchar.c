#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string\n");
    gets(str);
    char cpystr[50];
    int stpos,endpos;
    printf("Input start position");
    scanf("%d ",&stpos);
    printf("Input end position");
    scanf("%d ",&endpos);
    strncpy(cpystr,&str[stpos],endpos);
    cpystr[endpos]='\0';
    printf("substring is %s\n",cpystr);
    return 0;
}