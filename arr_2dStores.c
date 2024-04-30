
#include<stdio.h>
int main(){

    int arr[5][3];
    printf("Enter the quantities of the Items\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("Enter qty for store %d item %d ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("All the quantities of items is\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("%.d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Total quantities of each Items is\n");
    int sum;
    for(int i=0;i<3;i++){ //rowidx
        sum=0;
        for(int j=0;j<5;j++){ //colidx
            sum+=arr[j][i];
        }
        printf("Quantity of Item %d from all the stores is %d\n",i+1,sum);
    }
    return 0;
}