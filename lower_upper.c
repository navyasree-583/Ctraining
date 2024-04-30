#include<stdio.h>
#include<ctype.h>
int main(){
    char alp;
    printf("Enter an alphabet");
    putchar('\n');
    alp=getchar();
    if(islower(alp)) putchar(toupper(alp));
    else putchar(tolower(alp));
    return 0;
}