#include<stdio.h>
int main()
{
int num,div;
printf("Enter Number: ");
scanf("%d",&num);
char ones[10][10] = {"one","two","three","four","five","six","seven","eight","nine"};
char teens[10][10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char ties[10][10]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
if(num>=100 && num<=999)
{
   div=num/100;
   printf("%s hundred and",ones[div-1]);
   div=num%100;
}
if(div>9 && div<20)
{
   printf(" %s",teens[div-10]);
}
else if(div>=20)
{
   div=div/10;
   printf(" %s",ties[div-2]);
   div=num%10;
   printf(" %s",ones[div-1]);
}
else
{
   printf("Invalid Input!");
}
}

