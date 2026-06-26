#include <stdio.h>

int main()
{
    int i;
    int start = 10;
    int end = 20;
    
    printf("\nEnter start : ");
    scanf("%d",&start);

    printf("\nenter end : ");
    scanf("%d",&end); 


    for (i = start; i <= end; i++)
    {
        printf(" %d ", i);
    }

    return 0;
}

// 1 to 100


//start : 12
//end   : 50


//no if condition 
//12 15 18 21 24 27 30 .....48
