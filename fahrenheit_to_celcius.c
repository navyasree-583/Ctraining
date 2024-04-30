#include<stdio.h>
int main(){
    float ft;
    printf("Enter the fahrenheit temperature");
    scanf("%f",&ft);
    float celcius = (ft-32) * 5.0/9.0;
    printf("Fahrenheit temperature is = %7.2f degrees fahrenheit\n", ft);
    printf("Celcius temperature is = %13.2f degrees celcius\n",celcius);
    return 0;
}