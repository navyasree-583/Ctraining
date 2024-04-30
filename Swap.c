#include<stdio.h>
void swap(int*,int*);
void display(int,int);
void display(int x,int y){
    printf("Value of num1 and num2 is %d %d\n ",x,y);
}
void swap(int *n1,int *n2){
    int temp=0;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main(){
    int a,b;
    printf("Enter a,b value");
    scanf("%d %d",&a,&b);
    display(a,b);
    swap(&a,&b);
    display(a,b);
    return 0;
}