#include <stdio.h>
void main()
{
    int num1;
    printf("Input an integer : ");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
        printf("%d is an Even Number\n", num1);
    else
        printf("%d is an Odd Number\n", num1);

}
