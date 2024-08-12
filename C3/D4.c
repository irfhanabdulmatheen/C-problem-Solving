#include <stdio.h>
void main()
{
    int cprice, sprice, price;
    printf("Input Cost Price: ");
    scanf("%d", &cprice);
    printf("Input Selling Price: ");
    scanf("%d", &sprice);
    if(sprice > cprice)
    {
        price = sprice - cprice;
        printf("\nYour profit amount : %d\n", price);
    }
    else if(cprice > sprice)
    {
        price = cprice - sprice;
        printf("\nYour loss amount : %d\n", price);
    }
    else
    {
        printf("\nYou are in a no profit, no loss condition.\n");
    }
}
