#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Input string\n");
    gets(str);
    int cnt=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            cnt++;
        }
    }
    printf("Total number of vowels in \" %s \" = %d\n",str,cnt);
    return 0;
}