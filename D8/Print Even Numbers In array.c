#include<stdio.h>
int main()
{
    int size;
    printf("Enter the Number of Elements in array : ");
    scanf("%d",&size);
    int even[100];
    int i,j;
    for(i=0;i < size;i++)
    {
        printf("Element %d : ",i + 1);
        scanf("%d",&even[i]);
    }
    printf("Even Numbers in the array are : \n");
    for(i=0;i < size;i++)
    {
        if(even[i] % 2 == 0)
        {
            printf("%5d",even[i]);
        }
    }
}
