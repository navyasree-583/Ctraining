#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int words=0;
    printf("Input string\n");
    gets(str);
    
    for(int i=0; str[i]!='\0';i++){
        if(str[i] == ' ' && str[i+1] != ' ' ){
            words++;
        }
    }
    printf("Number of words in string is %d\n",words+1);
    return 0;
}
