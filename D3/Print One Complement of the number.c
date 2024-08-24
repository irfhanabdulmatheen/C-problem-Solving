#include<stdio.h>
int main()
{
    int i=0;
    char binary[100];
    printf("Enter : ");
    scanf("%s",&binary);
    while(binary[i] != '\0')
    {
        if(binary[i] != '0' && binary[i] != '1')
        {
            printf("Invalid Input!");
        }
        if(binary[i]=='0')
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        i++;
    }
    
}
