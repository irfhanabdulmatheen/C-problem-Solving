#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<2*(rows-i)-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
