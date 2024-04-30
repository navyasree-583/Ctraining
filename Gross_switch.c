#include<stdio.h>
int main(){
    float basic, hra, da, gross;
    int grade;
    printf("Enter basic salary\n");
    scanf("%f",&basic);
    printf("Enter grade (1,2,3,4)\n");
    scanf("%d",&grade);
    switch(grade){
        case  1 : hra= 0.1 * basic;
                  da= 0.05 * basic;
                  break;
        case  2 : hra = 0.12 * basic;
                  da = 0.1 * basic;
                  break;
        case  3 : hra = 0.14*basic;
                  da = 0.15 *basic;
                  break; 
        case  4 : hra = 0.16*basic;
                  da = 0.1 *basic;
                  break;
        default  :
                  hra = 0.16*basic;
                  da = 0.20 *basic;
                  }

    gross = basic+hra+da;
    printf("Grade %d\n",grade);
    printf("Basic salary : %.2f\n", basic);
    printf("Hra : %.2f\n", hra);
    printf("Da : %.2f\n", da);
    printf("Gross salary : %.2f\n",gross);

    return 0;
}