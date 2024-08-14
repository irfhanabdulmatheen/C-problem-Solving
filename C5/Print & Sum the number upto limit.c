#include <stdio.h>

int main()

{
    int j,limit,sum=0;

    printf("Input: ");

    scanf("%d",&limit);

    printf("\nThe first %d natural numbers are :\n",limit);

    for (j = 1; j <= limit; j++)

    {
        sum = sum + j;

        printf("%3d ", j);
    }

    printf("\n\nThe Sum is : %d\n", sum);

    return 0;

}
