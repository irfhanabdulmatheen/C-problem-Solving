#include<stdio.h>
int main()
{
    int size,count=0;
    printf("Enter the Size of the array : ");
    scanf("%d",&size);
    int duplicate[size],i,j;
    for(i=0;i < size;i++)
    {
        printf("Element %d : ",i + 1);
        scanf("%d",&duplicate[i]);
    }
    for(i=0;i < size;i++)
    {
        for(j=i+1;j < size;j++)
        {
            if(duplicate[i] == duplicate[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total Number of Duplicate Elements in Array :  %d",count);
}
