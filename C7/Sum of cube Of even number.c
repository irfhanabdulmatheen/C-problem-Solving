#include <stdio.h>

void main()
{

    int limit;

    printf("Enter the limit:");

    scanf("%d",&limit);

    int sum=0, i=0;

    if(limit>0)

    {
        while(limit>=i)
        {
            sum+=i*i*i;
            i+=2;
        }

        printf("The Sum of cubes of even numbers up to %d is %d",limit,sum);
    }

    else

    {
        printf("Invalid Input!");
    }

}

