#include<stdio.h>



void main(){

    int n1;
    int n2;

    int ans; 

    //input 
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);//25 30

    //process 
    ans = n1 + n2 ; 
    printf("\naddition = %d",ans);

    ans = n1 - n2; 
    printf("\nsubtraction = %d",ans); 

    ans = n1 * n2 ;
    printf("\nmultiplication = %d",ans);
    
    ans = n1 / n2 ; 
    printf("\ndivision = %d",ans); 



}