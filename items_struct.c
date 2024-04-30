#include<stdio.h>
typedef struct Items{
    char item_name[31];
    int qoh;
    float rate;
} UDT;

int main(){
    UDT item={"chair",10,5000};
    // printf("Input Item name\n");
    // gets(item.item_name);

    // printf("Input quantity\n");
    // scanf("%d",&item.qoh);

    // printf("Input Rate\n");
    // scanf("%f",&item.rate);

    printf(" Item name: %s\n Quantity: %d\n Rate of item :%.2f\n",item.item_name, item.qoh, item.rate);
    return 0;
}