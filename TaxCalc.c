#include <stdio.h>

int main()
{
    int salary;
    int tax;

    printf("Enter salary");
    scanf("%d", &salary);

    if (salary <= 500000)
    {
        printf("No Tax");
        tax = 0;
    }
    else if (salary > 500000 && salary <= 1000000)
    {
        printf("10%% tax");
        tax = (salary * 10) / 100;
    }
    else if (salary > 1000000)
    {
        printf("20%% tax");
        tax = (salary * 20) / 100;
    }

    printf("\nTax = %d", tax);

    return 0;
}