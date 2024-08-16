#include <stdio.h>

int main() 

{
  
    long long num;
    
    int count = 0;
    
    printf("Enter an integer: ");
    
    scanf("%lld", &num);
    
    if(num>=10)
        
    {
        
    do 
    
    {
        num /= 10;
        ++count;
    } 
    
    while (num != 0);
    
    printf("Number of digits: %d", count);
    
    }
    
    else
    
    {
        printf("Invalid Input!");
    }
    return 0;
}

