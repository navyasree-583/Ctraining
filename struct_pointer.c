#include<stdio.h>

typedef struct{
    char empname[20];
    int age;
    float salary;
} EMPLOYEE;

void printEmp(EMPLOYEE *);
void printEmp(EMPLOYEE *emp){
    printf("%s %d %.2f\n",emp->empname, emp->age, emp->salary);
}
int main(){
    EMPLOYEE emp = {"Navya",20,20000};
    printEmp(&emp);
    return 0;
}