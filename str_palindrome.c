#include<stdio.h>
#include<string.h>

void palindrome(char[]);
void palindrome(char str1[]){
    int l=0;
    int h=strlen(str1)-1;
    while(h>l){
        if(str1[l++] != str1[h--]){
            printf("%s is not a palindrome string\n",str1);
            break;
        }
        else{
            printf("%s is a palidrome string\n",str1);
            break;
        }
    }
}
int main(){
    char str1[20];
    printf("Enter the string\n");
    gets(str1);
    palindrome(str1);

    return 0;
}