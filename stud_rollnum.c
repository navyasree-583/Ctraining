#include<stdio.h>
#include<stdbool.h>
void linear_search(int[],int,int);
void linear_search(int ar[],int roll, int len){
    int i;
    bool flag;
    for( i=0, flag=false;i<len;i++){
        if(ar[i]==roll){
            flag=true;
            break;
        }
    }
    (flag==true) ? printf("Roll number %d found at idx %d\n",roll,i+1) :printf("Roll number not found\n");
    
}
int main(){    
    int arr[10]={1,3,4,5,2,6,9,8,7,10};
    int roll_num;
    printf("Find the roll num\n");
    scanf("%d",&roll_num);
    linear_search(arr, roll_num, 10);
    
return 0;
}