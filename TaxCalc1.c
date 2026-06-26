#include <stdio.h>

int main()
{

    int income;
    int tax;

    printf("Enter your income");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income * 5) / 100;
    }
    else if (income <= 1000000)
    {
        tax = (income * 10) / 100;
        // tax = income * 0.10 ;
    }
    else if (income <= 2500000)
    {
        tax = (income * 15) / 100;
    }
    else
    {
        tax = (income * 30) / 100;
    }

    printf("\nIncome : %d", income);
    printf("\nTax    : %d", tax);

    return 0;
}