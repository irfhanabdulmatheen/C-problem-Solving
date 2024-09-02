#include stdio.h
int main()
{
    int size, number, found = 0;
    printf(Enter the size of the array );
    scanf(%d, &size);
    int numbers[size];
    for (int i = 0; i  size; i++)
    {
        printf(Number %d , i + 1);
        scanf(%d, &numbers[i]);
    }
    printf(Enter the number to find  index );
    scanf(%d, &number);
    for (int i = 0; i  size; i++)
    {
        if (numbers[i] == number)
        {
            printf(The number %d is found at index %d (position %d).n, number, i, i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf(The number %d is not found in the array.n, number);
    }
    return 0;

}
