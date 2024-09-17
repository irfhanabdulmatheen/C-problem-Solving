#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    int flag;
    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);
    flag = strcmp(str1, str2);
    if(flag == 0)
    {
        printf("Both strings are equal.");
    }
    else if(flag == -1)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}
