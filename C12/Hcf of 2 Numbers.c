#include <stdio.h>

int main() 
{
    int num1, num2, hcf, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    hcf = num1; 

    printf("HCF of the given numbers is: %d\n", hcf);

    return 0;
}
