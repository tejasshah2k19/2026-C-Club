#include<stdio.h>


int main(){

    int a = 10; 
    int c = 10;

    int b = a++;   // post increment 
    int d = ++c;  // pre increment 

    printf(" %d ",b);
    printf(" %d ",a); 
    
    printf(" %d ",c); 
    printf(" %d ",d); 
    
    return 0; 
}