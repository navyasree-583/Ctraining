#include<stdio.h>
void dec_to_bin(int);
void dec
void dec_to_bin(int num){
    int rem;
    int i=0;
    int ar[50];
    while(num){
        rem = num%2;
        num=num/2;
        ar[i]=rem;
        i++;
    }

    printf("Conversion of decimal to binary\n");
    for(int j=i-1;j>=0;j--){
        printf("%d",ar[j]);
    }
    printf("\n");
}
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    dec_to_bin(num);
}