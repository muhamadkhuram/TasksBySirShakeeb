#include <stdio.h>

void main()
{
    int choice, quantity = 0, totalPrice = 0;
    printf("Menu:\n");
    printf("1. Burger - $5.00\n");
    printf("2. Pizza - $8.00\n");
    printf("3. Salad - $4.50\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected Burger. Price: $5.00\n");
        printf("Enter quantity: ");
        scanf("%i", &quantity);
        totalPrice = quantity * 5;
        printf("Total price: $%i\n", totalPrice);

        break;
    case 2:
        printf("You selected Pizza. Price: $8.00\n");

        printf("Enter quantity: ");
        scanf("%i", &quantity);
        totalPrice = quantity * 8;
        printf("Total price: $%i\n", totalPrice);

        break;
    case 3:
        printf("You selected Salad. Price: $4.50\n");

        printf("Enter quantity: ");
        scanf("%i", &quantity);
        totalPrice = quantity * 4.50;
        printf("Total price: $%i\n", totalPrice);

        break;
    case 4:
        printf("Exiting the program.\n");

        break;
    default:
        printf("Invalid choice. Please select a valid option.\n");
    }
}

/// aap method bhi bna skty ho; second last lecture topic;
/// same method bna k usko switch ase sy call kar lo;
/// example called from case 3;
/// aisy hi bna lo baki cases k liye; aur main method ma quantity aur price declare karny ki zarorat bhi nae hae;
// Keep in mind k method ko aap ny main method sy pehly declare karna hae;

void getPrice(int price)
{
    int quantity = 0, totalPrice = 0;

    printf("Enter quantity: ");
    scanf("%i", &quantity);
    totalPrice = quantity * price;
    printf("Total price: $%i\n", totalPrice);
}