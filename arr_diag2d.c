#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter elements in 2d array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The diagonal elements are\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}