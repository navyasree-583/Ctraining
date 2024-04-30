#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the string to compress\n");
    gets(str);
    int cnt=1;
    int idx=1;
    char curr;
    char prev;
    printf("----Compressed string is---- \n");
    prev= str[0];
    while((curr = str[idx]) != '\0'){
        if(curr == prev){
            cnt++;
        }
        else{
            printf("%c%d",prev,cnt);
            cnt=1;
            prev=curr;
            
        }
        idx++;
    }
    printf("%c%d\n",prev,cnt);
    return 0;
    }