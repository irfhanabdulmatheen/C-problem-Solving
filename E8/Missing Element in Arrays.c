#include <stdio.h>
int main()
 {
    int n;
    printf("Enter the total number of elements (including the missing one): ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements of the array:\n", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    int missingNumber = total - sum;
    printf("Missing number in array: %d\n", missingNumber);
    return 0;
}
