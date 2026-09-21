#include<stdio.h>
#include<string.h>

int main(){

    // shopping cart program //

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Enter the item name: ");
    fgets(item, sizeof(item), stdin);

    printf("Enter the price of each item: ");
    scanf("%f", &price);
    printf("Enter the quantity of items: ");
    scanf("%d", &quantity);
    total = price * quantity;
    
    printf("you have bought %d %s:", quantity, item);
    item[strlen(item) - 1] = '\0'; // to remove the newline character from the string //

    printf("%c%.2f\n", currency, total);



    return 0;
}