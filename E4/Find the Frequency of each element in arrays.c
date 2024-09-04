#include<stdio.h>
int main()
{
    int size;
    printf("length");
    scanf("%d",&size);
    int arr[size],i,j,counter,frequency[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        frequency[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        counter=1;
        if(frequency[i]==-1)
        {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
                frequency[j]=0;
            }
        }
            frequency[i]=counter;
    }
}
    for(i=0;i<size;i++)
    {
        if(frequency[i]!=0)
        printf("\n%d : %d",arr[i],frequency[i]);
    }
}
