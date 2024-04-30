#include<stdio.h>
#include<stdlib.h>
long factorial(int);
long factorial(int num){
    if(num<=1) {
        return 1L;
    }
    return num * factorial(num-1);
}
int main(int argc, char *argv[]){
    long fact;
    if(argc<2){
        fact = factorial(5);
        printf("**Error : To few command line parameters\n");
        printf("factorial of 5 is %ld\n",fact);
        return 1;
    }
    for(int i=1;i<argc;i++){
        int num= atoi(argv[i]);
        fact=factorial(num);
        printf("Factorial of %d is %ld\n", num,fact);
    }
    return 0;
}
