#include<stdio.h>
int main(){
    int len;
    printf("Enter length of the array\n");
    scanf("%d",&len);
    int ar[len];
    printf("Enter array elements\n");
    for(int i=0;i<len;i++){
        scanf("%d",&ar[i]);
    }
    int start,end;
    printf("Enter start and end positions\n");
    scanf("%d\n%d",&start,&end);
    for(int i=start-1;i<=end-1;i++){
        printf("%d ",ar[i]);
    }
return 0;
}