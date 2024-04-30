#include<iostream>
int main(){
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b";
    cin>>b;

    int temp = a;
    a=b;
    b=a;

    cout<<"Numbers after swapping = "<<a<<b;
    return 0;
}