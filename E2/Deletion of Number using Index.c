#include<stdio.h>
int main()
{
    int size,index;
    printf("Size of an Array : ");
    scanf("%d",&size);
    printf("Enter the Index Number to Delete : ");
    scanf("%d",&index);
    int arr[size],i,j;
    for(i=0;i < size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=index;i < size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Element in the array after Deletion : ");
    for(i=0;i < size - 1;i++)
    {
        printf("%5d",arr[i]);
    }
}
