// define compiler directive
#include<stdio.h>
#define PI 3.14159265
#define CIRCLEAREA(rad) PI * rad *rad
#define TOUPPER(c) c>= 'a' && c<='z' ? c-32 : c 
int main(){
    int radius;
    float area;
    printf("Input enter radius\n");
    scanf("%d",&radius);
   // area = PI * radius * radius;
    area = CIRCLEAREA(radius);
    printf("Area = %.2f\n",area); // 3.14159265 * radius * radius;
    int x =TOUPPER('d');
    printf("%c\n",x);
    return 0;
}