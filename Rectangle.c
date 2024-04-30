#include<stdio.h>
int main(){
    float l,b;
    printf("Enter length and breadth");
    scanf("%f %f",&l,&b);
    float peri = 2*(l+b);
    float area = l*b;
    printf("Perimeter and area of rectangle is %.2f %.2f",peri,area);
    return 0;

}