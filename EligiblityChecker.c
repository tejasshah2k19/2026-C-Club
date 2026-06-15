#include<stdio.h>


int main(){

    int maths,sci,eng;
    int totalMarks; 

    printf("Enter marks of three subjects");
    scanf("%d%d%d",&maths,&sci,&eng); 

    totalMarks = maths + sci + eng; 

    if(  maths < 35  ){
        printf("\nNot Eligible");
    }

    if(  sci < 35  ){
        printf("\nNot Eligible");
    }
    
    if(  eng < 35  ){
        printf("\nNot Eligible");
    }

    if( totalMarks < 110) {
        printf("\nNot Eligible");
    }


    return 0;
}