#include<stdio.h>
int main(){
    
    int len;
    printf("Enter length of array\n");
    scanf("%d",&len);
    int ar[len];
    printf("Enter the marks of subjects of a student\n");
    for(int i=0;i<len;i++){
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    int  min= ar[0];
    for(int i=0;i<len;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]<min){
            min = ar[i];
        }
    }
    printf("Maximum marks are %d\n",max);
    printf("Manimum marks are %d",min);
    return 0;
}