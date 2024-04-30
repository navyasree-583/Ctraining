#include<stdio.h>
int stringlen(char *str){
    char *strN =str;
    int len=0;
    while(*strN){
        strN++;
    }
    return strN-str; //1025-1020 =5

}
void strcppy(char *dest, char *src){
    while(*src){
        *dest = *src;
        dest++;
        src++;
    }
    *dest='\0';
}
int main(){
    char name[31]="Kiran";
    int len=0;
    char target[100];
    printf("Input name\n");
    gets(name); // takes char pointer
    len= stringlen(name);
    printf("Length of string is %d\n",len);
    strcppy(target,name);
    printf("Destination string is %s\n",target);
    return 0;
}