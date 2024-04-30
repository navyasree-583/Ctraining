#include<stdio.h>
void bubble_sort(int[], int);
void print_array(int[], int);


void bubble_sort(int arr[], int size){
    for(int i=0;i<size-1; i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
               
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void print_array(int a[],int length){
    for(int k=0;k<length;k++){
        printf("%d ",a[k]);
    }
    printf("\n");
}


    
int main(){
    int subj_marks[]={99,98,94,93,91};
    //bubble sort
    int len =sizeof(subj_marks)/sizeof(subj_marks[0]);
    bubble_sort(subj_marks,len);
    printf("Sorted array of marks of a student is\n");
    print_array(subj_marks,len);
    
    return 0;
}