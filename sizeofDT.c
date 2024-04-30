#include<Stdio.h>
int main(){
    int intDT;
    float floatDT;
    double doubleDT;
    char charDT;
    printf("Size of char is %zu bytes\n",sizeof(charDT));
    printf("Size of int is %zu bytes\n",sizeof(intDT));
    printf("Size of float is %zu bytes\n",sizeof(floatDT));
    printf("Size of double is %zu bytes\n",sizeof(doubleDT));
    return 0;
}