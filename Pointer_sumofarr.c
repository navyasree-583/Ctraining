#include<stdio.h>
long int displaysum(long int*, int);
long int displaysum(long int *parr, int size){
    long int sum=0;
        for(int i=0;i<size;i++,parr++){
            sum+= *parr;
        }
       // printf("Sum of 10 numbers using pointers is %ld",sum);
       return sum;
}
int main(){
        long int ar[10] = {1,2,3,4,5,6,7,8,9,10};
        long int resum = displaysum(ar,10);
        printf("Sum of 10 numbers using pointers is %ld",resum);
}