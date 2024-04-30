#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Press any key\n");
    ch = getchar();
    if(isalpha(ch)>0) printf("The character is letter\n");
    else if(isdigit(ch)>0) printf("The character is a digit\n");
    else printf("The character is alphanumeric\n");

return 0;
}