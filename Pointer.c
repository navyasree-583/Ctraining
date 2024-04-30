#include<stdio.h>
int main(){
    int num;
    double dnum;
    int *pnum=&num;
    double *pdnum = &dnum;
    printf("Address of num = %08X\n",pnum);
    printf("Address of dnum = %08X\n",pdnum);
    num=5,dnum=6;
    printf("%d %f",num , dnum);
    // *pnum=20;
    // *pdnum=10.12;
    // printf("pnum is %ld",long(*pnum));
    // printf("pdnum is %ld",*pdnum);
return 0;
}