#include<stdio.h>
void fun(int y){
        y=10;
        printf("%d\n",y);
}
int main(){
    const int x= 5;
    fun(x);
    printf("%d\n",x);
    
}