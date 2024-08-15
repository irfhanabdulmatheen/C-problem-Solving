#include<stdio.h>
int main()
{
    int number,i,prime=0;
    printf("Enter the Number: ");
    scanf("%d",&number);
    if(number==1 || number==0)
    {
        prime=1;
    }
    for(i=2;i<number;i++)
    {
     if (number % i == 0)
     {
      prime = 1;
      break;
     }
    }
    if(prime==1)
    {
        printf("%d is not the -prime number",number);
    }
    else
    {
        printf("%d is  the prime number",number);
    }
    return 0;
}
