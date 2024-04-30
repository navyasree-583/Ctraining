#include<stdio.h>
int main(){
    int ar[5];
    printf("Enter array elements\n");
    for(int i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<5;i++){
        if(ar[i]%6==0){
            printf("Number %d is divisible by 6\n",ar[i]);
        }
    }
    return 0;
}