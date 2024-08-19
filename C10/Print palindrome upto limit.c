#include<stdio.h>
int main()
{
    int num,reverse,remainder,i,temp;
    printf("Limit: ");
    scanf("%d",&num);
    printf("Palindome upto %d are : ",num);
    for(i=1;i<=num;i++)
      {
            temp=i;
            reverse=0;
    while(temp!=0)
        {
            remainder=temp%10;
            reverse=reverse*10+remainder;
            temp/=10;
        }
        if(reverse==i)
        {
            printf("%d ",reverse);
        }
      }
}
