#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
