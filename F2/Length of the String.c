#include <stdio.h>
int main()
{
    char text[100];
    int i;
    int count= 0;
    printf("Enter any string: ");
    scanf("%[^\n]s",text);
    for(i=0; text[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of '%s' = %d", text, count);
    return 0;
}
