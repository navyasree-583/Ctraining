#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
    char str[50];
    printf("Enter the string\n");
    gets(str);

    char word[20];
    printf("Enter the word to find\n");
    gets(word);

    char* op;
    op=strstr(str,word);
    if(op){
        printf("String found\n");
        printf("The 1st occurance of \"%s\" in \"%s\" is at position %llu\n",word,str,(op-str)+1);
    }
    else{
        printf("String not found\n");
    }

}