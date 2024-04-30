#include<stdio.h>
int main(){
    float ar[5];
    printf("Enter the marks of 5 subjects of a student\n");
    for(int i=0;i<5;i++){
        scanf("%f",&ar[i]);
    }
    float sum=0;
    printf("Marks of student are : ");
    for(int i=0;i<5;i++){
        printf("%.2f ",ar[i]);
        sum+=ar[i];
    }
    printf("\n");
    printf("Average of marks is %.2f\n",sum/5);
    return 0;
}