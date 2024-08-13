#include <stdio.h>
#include <string.h>
void main()
{
    int customer_id,units_used;
    float charge, surecharge = 0, amount, netamount;
    char name[25];
    printf("Input Customer ID :");
    scanf("%d", &customer_id);
    printf("Input the name of the customer :");
    scanf("%s", name);
    printf("Input the unit consumed by the customer : ");
    scanf("%d", &units_used);
    if (units_used < 200)
        charge = 1.20;
    else if (units_used >= 200 && units_used < 400)
        charge = 1.50;
    else if (units_used >= 400 && units_used < 600)
        charge = 1.80;
    else
        charge = 2.00;
    amount = units_used * charge;
    if (amount > 300)
        surecharge = amount * 15 / 100.0;
    netamount = amount + surecharge;
    if (netamount < 100)
        netamount = 100;
    printf("\n----Electricity Bill---\n");
    printf("Customer ID NO                       :%d\n", customer_id);
    printf("Customer Name                       :%s\n", name);
    printf("unit Consumed                       :%d\n", units_used);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", charge, amount);
    printf("Surchage Amount                     :%8.2f\n", surecharge);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamount);
}
