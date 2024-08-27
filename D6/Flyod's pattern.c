#include<stdio.h>
int main(){
    int length;
    printf("Enter Length: ");
    scanf("%d",&length);
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(length>0)
            {
            if(i%2!=0)
            {
                if(j%2==0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            else
                {
                if(j%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            }
            else{
                printf("invalid input");
            }
        }
        printf("\n");
    }
    return 0;
}
