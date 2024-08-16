#include <stdio.h>

int main()

{
    int num, sum = 0;

    printf("Enter a number: ");

    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        int digit = num % 10;

        sum += digit;

        num = num / 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
