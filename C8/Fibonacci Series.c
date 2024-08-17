#include <stdio.h>

int main()

{
    int t1 = 0, t2 = 1, t3, n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
       
    {
        printf("%5d ", t1);  
        t3 = t1 + t2;       
        t1 = t2;           
        t2 = t3;             
    }
    printf("\n");

    return 0;
}

