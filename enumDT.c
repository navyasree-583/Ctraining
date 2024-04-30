#include<stdio.h>
enum Gradeval {GradeA ='A', GradeB, GradeC, GradeD, GradeF='F'};
enum colors {GA = 1, GB = 2, GC=3, GD=4, GF=5 };
int main(){
   enum Gradeval grade = GradeF;
   enum colors c = GF;
   printf("Grade = %c\n",grade);
   printf("Color = %d\n",c);
    return 0;
}