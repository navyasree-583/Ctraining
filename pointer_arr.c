#include<stdio.h>
void display(long int*,int);
void display(long int *parr, int len){
    //printf("Address of parr  in function is %ld\n ",parr);
    for(int i=0;i<len++,parr++){
        printf("Array ele at %d is %ld",i+1,parr[i]);
    }
}
int main(){
    long int arr[5]={1,2,3,4,5};
    printf("Address of arr is %ld\n ",long(arr));
    display(arr,5);
}