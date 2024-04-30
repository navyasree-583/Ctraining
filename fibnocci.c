#include<stdio.h>
void fibnocci(int);
void fibnocci(int terms){
    int n1=0,n2=1,n3;
    //if(terms>=1) printf("%d ",n1);
    if(terms>=2) printf("%d %d ",n1,n2);
    for(int i=3;i<=terms;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }

}
int main(){
    int terms;
    printf("Enter no of terms\n");
    scanf("%d",&terms);
    printf("Fibnocci series upto %d terms \n",terms);
    fibnocci(terms);
    return 0;
}