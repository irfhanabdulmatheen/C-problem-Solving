#include <stdio.h>
int main()
{
    int j,limit, sum = 0;
    printf("Input: ");
    scanf("%d",&limit);
    printf("The first %d natural numbers are :\n",limit);
    for (j = 1; j <= limit; j++)
    {
        sum = sum + j;
        printf("%d ", j);
    }

    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
