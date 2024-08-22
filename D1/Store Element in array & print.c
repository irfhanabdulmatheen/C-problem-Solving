  #include <stdio.h>
int main()
{
    int arr[100];
    int i,limit;
    printf("Input the size of the array :\n");
    scanf("%d",&limit);
    for(i=0; i<limit; i++)
    {
	    printf("element - %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<limit; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
	return 0;
}
