#include <stdio.h>
int main()
{
    int j,j1, sum = 0;
    printf("Input: ");
    scanf("%d",&j1);
    printf("The first %d natural numbers are :\n",j1);
    for (j = 1; j <= j1; j++)
    {
        sum = sum + j;
        printf("%d ", j);
    }

    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
