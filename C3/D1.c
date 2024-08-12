#include <stdio.h>
void main()
{
    int int1, int2;
    printf("Input Number1 : ");
    scanf("%d", &int1);
    printf("Input Number2 : ");
    scanf("%d",&int2);
    if (int1 == int2)
        printf("Number1 and Number2 are equal\n");
    else
        printf("Number1 and Number2 are not equal\n");
}
