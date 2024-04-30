#include<stdio.h>
void func(){
    static int a=10;
    a++;
    printf("%d\n",a);
}
int main(){
    func();
    func();
    func();
}