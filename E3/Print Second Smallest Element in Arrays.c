#include<stdio.h>
#include<limits.h>
int main()
{
    int size,first,second,i;
    printf("Enter the Size of The Array : ");
    scanf("%d",&size);
    int arr[size];
    first=second=INT_MAX;
    for(i=0;i<size;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i] < first)
        {
            second = first;
            first  = arr[i];
        }
        else if(arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    if(second == INT_MAX)
    {
        printf("Not Exist");
    }
    else
    {
        printf("Second Smallest Element : %d",second);
    }
}
