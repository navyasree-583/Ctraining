//PSUEDO CODE OF BUBBLE SORT
/*
Start Bubble sort
Declare num, temp
read num
Declare ar[num]
print "Enter array elements"
for i=0 to i<num i++ 
   read array elements

for i=0 to i<num-1 i++
    for j=i+1; j<num; j++
    if ar[i] >ar[j]
        temp=ar[i]
        ar[i]=ar[j]
        ar[j]=temp
    endif
endfor
Display "Print Array elements after sorted is :"
for i=0 to i<num i++
    Display "Array elements" ar[i]
endfor

END Bubble sort
*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the length of array");
    scanf("%d",&num);
    int ar[num];
    printf("Enter the array elements");
    for(int i=0;i<num;i++){
        scanf("%d",&ar[i]);
    }
    int temp=0;
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-1;j++){
        if(ar[j]>ar[j+1]){
            temp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
        }
    }
    
    }
    printf("Sorted array elements are:");
    for(int i=0;i<num;i++){
        printf("%d ", ar[i]);
    }
    return 0;
}