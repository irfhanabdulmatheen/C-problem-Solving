#include<stdio.h>
int main()
{
    int size,i,j,count,unique=0;
    printf("Array Length: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe Elements in the Array are: ");
    for(i=0;i<size;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\nUnique Elements: \n");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
        {
            if(i!=j && a[i]==a[j])
                {
                    count++;
                    break;
                }
        }
        if(count==0)
        {
            unique++;
        }
    }
    printf("Total no of Unique Elements  : %d",unique);
    }
