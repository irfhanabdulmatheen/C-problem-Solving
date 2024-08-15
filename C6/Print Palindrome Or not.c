#include<stdio.h>
int main()
{
    int num,reverse,remainder,temp;
    printf("Limit: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
        {
            remainder=num%10;
            reverse=reverse*10+remainder;
            num/=10;
        }
    if(reverse==temp)
        {
            printf("%d is an palindrome",temp);
        }
    else
    {
    printf("%d is not an palindrome",temp);
    }
}
