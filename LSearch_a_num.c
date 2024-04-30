//Declare and initialize array of numbers, input a  number and find if the number exists
#include<stdio.h>
#include<stdbool.h>
int main(){
    int len;
    bool flag;
    printf("Enter the length of arr : ");
    scanf("%d",&len);
    int ar[len];
    printf("Enter the arr elements\n");
    for(int i=0;i<len;i++){
        scanf("%d",&ar[i]);
    }
    
    int num,i;
    printf("Enter the number to search");
    scanf("%d",&num);
    for(i=0, flag=false; i<len;i++){
            if(ar[i]==num){
                flag=true;
                break;
            }
    }
    (flag==true) ? printf("Number is found at index %d",i+1) : printf("Number not found");
    

    return 0;
}