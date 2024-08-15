#include<stdio.h>
int main()
{
    int number,i,j,sum=0;
    printf("Enter an integer : ");
    scanf("%d",&number);
    for(i=1;i<number;i++)
        {
            if(number%i==0)
            {
                sum+=i;
            }
        }
    if(sum==number)
    {
        printf("%d is the Perfect Number",number);
    }
    else
    {
        printf("%d is  not the Perfect Number",number);
    }
  return 0;
}

