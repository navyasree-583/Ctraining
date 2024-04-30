#include <stdio.h>
#include <string.h>

typedef struct items {
    char item_name[20];
    int qty;
    float rate;
} ITEM;

int main() {
    ITEM allitems[] = {
        {"socks", 15, 50},
        {"belt", 20, 100},
        {"comb", 10, 15},
        {"bottle", 10, 150},
        {"charger", 10, 300},
        {"bucket", 10, 80},
        {"pen", 15, 10},
        {"book", 6, 200},
        {"bag", 10, 300},
        {"pencil", 5, 5}
    };

    char find[100];
    int quantity;

    printf("Enter the item to search: ");
    gets(find);

    printf("Enter quantity of item: ");
    scanf("%d", &quantity);

    int len = sizeof(allitems) / sizeof(allitems[0]);
    for (int i = 0; i < len; i++) {
        if (strcmp(allitems[i].item_name, find) == 0) {
            if (quantity > allitems[i].qty) {
                printf("Not enough quantity\n");
                break;
            } 
            else{
                printf("Item %s is available of quantity %d which costs %.2f\n", allitems[i].item_name, quantity, quantity * allitems[i].rate);
                break;
            } 
         
        }
    }

    return 0;
}
