#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i;
    printf("Input string  : ");
    fgets(str, sizeof str, stdin);
    str[strcspn(str,"\n")] = '\0';
    for(i=0;i < strlen(str);i++)
    {
        if(islower(str[i]))
        {
            printf("%c",toupper(str[i]));
        }
        else
        {
            printf("%c",str[i]);
        }
    }
	return 0;
}
