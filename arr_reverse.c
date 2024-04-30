#include<stdio.h>
void reverse_array(int[],int);
void reverse_array(int old[], int size){
      int new[size];
      for(int i=0;i<size;i++){
        new[i]= old[size -i -1];
      }
      printf("Reversed array elements\n");
      for(int i=0;i<size;i++){
         printf("%d ",new[i]);
      }
}
int main(){
    int len;
    printf("Enter the length of array\n");
    scanf("%d",&len);
    int ar[len];
    printf("Enter Array elements\n");
    for(int i=0;i<len;i++){
        scanf("%d",&ar[i]);
    }
    reverse_array(ar,len);
    
    return 0;
}