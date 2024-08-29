#include<stdio.h>
int main()
{
    int size;
    printf("Enter the Number of Elements in array : ");
    scanf("%d",&size);
    int odd[100];
    int i,j;
    for(i=0;i < size;i++)
    {
        printf("Element %d : ",i + 1);
        scanf("%d",&odd[i]);
    }
    printf("Odd Numbers in the array are : ");
    for(i=0;i < size;i++)
    {
        if(odd[i] % 2 != 0)
        {
            printf("%5d",odd[i]);
        }
    }
}
