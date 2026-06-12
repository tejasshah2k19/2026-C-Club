#include <stdio.h>

int main()
{

    int num = 10;

    printf("Enter number");
    scanf("%d",&num);

    if (num > 0){
        printf("+");
    }

    if(num < 0){
        printf("-");
    }

        return 0;
}