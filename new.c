#include <stdio.h>

int main()
{
    char *products[] = {"Mum Water", "StarShip Mango Juice", "Shafa", "Mojo", "Drinko", "Potato Cracers Cips", "Detos Cips", "Mr. Twist Cips", "Energy Biscuit", "Tip Biscuit"};
    int prices[] = {20, 15, 30, 20, 30, 10, 20, 10, 15, 15};

    printf("Welcome to the Digital Vending Machine!\n");
    printf("Presented by NEBULA\n");
    printf("Menu:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. %s :(tk)  %d\n", i + 1, products[i], prices[i]);
    }

    int choice;
    printf("Enter the number of the item you want to purchase: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 10)
    {
        printf("Invalid choice!\n");
        printf("Please select the items from given menu.\n");
        return 1;
    }

    int total_cost = prices[choice - 1];

    printf("Total cost (+%%vat): (tk) %d\n", total_cost);

    int paid;
    printf("Enter amount paid: (tk) ");
    scanf("%d", &paid);

    if (paid < total_cost)
    {
        printf("Insufficient amount!\n");
        printf("Please provide enough amount to enjoy your food\n");
        return 1;
    }

    int change = paid - total_cost;
    printf("Change: (tk) %d\n", change);

    printf("NABULA FAMILY is praying for your healthy life!\n");

    return 0;
}
