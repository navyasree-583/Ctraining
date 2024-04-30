#include<stdio.h>
void func();
void func(){
    auto int x= 10;
    x++;
    printf("%d \n",x);
}
int main(){
    func();
    func();
    func();
}