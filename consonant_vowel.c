#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("The character %c is a Vowel",c);
    }
    else{
        printf("The character %c is a Consonant",c);
    }
    return 0;
}