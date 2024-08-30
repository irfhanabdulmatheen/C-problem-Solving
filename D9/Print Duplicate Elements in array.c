#include<stdio.h>
int main()
{
    int size,i,j,count;
    printf("Array Length: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe Elements in the Array are: \n");
    for(i=0;i<size;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\nDuplicate Elements: \n");
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
                if(a[i]==a[j])
                {
                    count++;
                    break;
                }
        }
        if(count!=0)
        {
            printf("%5d",a[i]);
        }
    }
    }
