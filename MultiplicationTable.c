#include <stdio.h>

int main()
{

    int num = 5;
    int i = 1;

abc:

    printf("\n%d * %d = %d", num, i, num * i); // 5 * 2 = 10 
    i++;//3
     
    if (i <= 10)
    { // i=5
        goto abc;
    }
    // 
    return 0;
}