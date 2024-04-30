#include<stdio.h>
int main(){
    float ar[5];
    float celcius;
    printf("Enter Fahrenheit temperatures\n");
    for(int i=0;i<5;i++){
        scanf("%f",&ar[i]);
    }
    printf("fahrenheit to celcius temperature\n");
    celcius=0;
    for(int i=0;i<5;i++){
        celcius= (ar[i]-32.0)*5.0/9.0;
        printf("fahrenheit to celcius of %.2f is %.2f degree celcius\n",ar[i],celcius);
    }
    return 0;
}