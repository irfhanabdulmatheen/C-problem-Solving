#include <stdio.h>
int main() 
{
    char input[100]; 
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    printf("You entered: %s", input);
    return 0;
}

