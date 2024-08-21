#include<stdio.h>
int main()
{
    int x,y,sum=1,lcm,i;
    printf("Enter 2 integers: ");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            sum=i;
        }
    }
    lcm=(x*y)/sum;
    printf("lcm: %d",lcm);
}
