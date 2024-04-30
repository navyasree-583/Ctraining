#include<stdio.h>
int main(){
    char name[31]="Kiran";
    printf("Input name\n");
    gets(name); // takes char pointer
    printf("Inputed name is\n");
    puts(name); 
    //printf("Name is inputed %s\n",name);
    return 0;
}