#include<stdio.h>
int main()
{
    int limit,i,j,sum;
    printf("Input: ");
    scanf("%d",&limit);
    printf("Strong Numbers: ");
    for(i=1;i<=limit;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
}
