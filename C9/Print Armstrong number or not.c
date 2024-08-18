#include<stdio.h>
int main()
{
    int num,ln,sum=0,num2;
    printf("Enter an Integer: ");
    scanf("%d",&num);
    num2=num;
    while(num!=0)
    {
        ln=num%10;
        sum=sum+ln*ln*ln;
        num/=10;
    }
    if(sum==num2)
    {
        printf("%d is an armstrong number",num2);
    }
    else{
        printf("%d is not an armstrong number",num2);
    }
}
