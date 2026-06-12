#include <stdio.h>

int main()
{

    int age;
    char gender;

    printf("Enter Age and Gender(m/f)");
    scanf("%d %c", &age, &gender);

    if (gender == 'm' && age > 18)
    {
        printf("ELigible for Voting...");
    }

    if (gender == 'f' && age > 21)
    {
        printf("Eligible for voting...");
    }

    if (gender == 'm' && age <= 18)
    {
        printf("Not Eligible for voting...");
    }

    if (gender == 'f' && age <= 21)
    {
        printf("Not Eligible for Voting...");
    }

    return 0;
}