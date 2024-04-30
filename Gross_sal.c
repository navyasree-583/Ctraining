#include<stdio.h>
int main(){
    float basic, hra, da, gross;
    int grade;
    printf("Enter basic salary\n");
    scanf("%f",&basic);
    printf("Enter grade\n");
    scanf("%d",&grade);
    if(grade==1){
        hra= 0.1 * basic;
        da= 0.05 * basic;
    }
    else if(grade == 2){
        hra = 0.12 * basic;
        da = 0.1 * basic;
    }
    else if(grade==3){
        hra = 0.14*basic;
        da = 0.15 *basic;
    }
    else{
        hra = 0.16*basic;
        da = 0.1 *basic;
    }
    gross = basic + hra + da; 
    printf("Grade %d\n",grade);
    printf("Basic salary : %.2f\n", basic);
    printf("Hra : %.2f\n", hra);
    printf("Da : %.2f\n", da);
    printf("Gross salary : %.2f\n",gross);
    return 0;
}