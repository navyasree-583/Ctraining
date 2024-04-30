#include<stdio.h>
void selection_sort(int[], int);
void printarray(int ar[], int size){
    printf("Sorted array is\n");
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}
void selection_sort(int ar[], int len){

 for(int i=1; i<len; i++){
    int key=ar[i];
    int j=i-1;
    while(j>=0 && key<ar[j]){
            ar[j+1]=ar[j];
        j--;
    }
    ar[j+1] = key;
 }
}

int main(){
    int len;
    printf("Enter arr len ");
    scanf("%d",&len);
    int ar[len];
    printf("Enter Array elements");
    for(int i=0;i<len;i++){
        scanf("%d",&ar[i]);
    }
    selection_sort(ar,len);
    printarray(ar,len);
    
}