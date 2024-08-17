#include <stdio.h>
int main()
{
    int number;

    printf("Input a positive integer: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", i,number, number * i);

        i++;
    }

    return 0;
}
