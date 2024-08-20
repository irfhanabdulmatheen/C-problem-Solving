#include<stdio.h>
int main()
{
    int terms,sum=0,i,t=9;
    printf("Enter the number of terms: ");
    scanf("%d",&terms);
    printf("The series are: ");
    if(terms>0)
    {
        for(i=1;i<=terms;i++)
        {
            sum+=t;
            printf("%d ",t);
            t=t*10+9;
        }
        printf("\n Sum of the series= %d",sum);
    }
    else
    {
        printf("Invalid Input!");
    }
}
