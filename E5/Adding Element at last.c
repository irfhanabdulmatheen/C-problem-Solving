#include<stdio.h>
int main()
{
    int size;
    printf("Array Length: ");
    scanf("%d",&size);
    int arr[size+1],i,value;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Value: ");
    scanf("%d",&value);
    arr[i]=value;
    size++;
    for(i=0;i<size;i++)
    {
        printf("%5d",arr[i]);
    }

}
