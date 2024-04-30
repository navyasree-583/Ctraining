
#include<stdio.h>
void selection_sort(int[],int);
void selection_sort(int arr[],int size){

    for(int i=0;i<size;i++){
       int min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp; 
    
    }
}
int main(){

    int arr[]={7,2,3,4,5,9,56,78,99,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    selection_sort(arr, size);
    printf("Sorted array is ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}