#include<stdio.h>



int main(){

    int a;
    int b;


    printf("Enter two numbers");
    scanf("%d%d",&a,&b);//30 30 

    
    // printf(" %d ", a > b);//0:false 1:true 
    // printf(" %d ", a < b);//0:false 1:true 

    if( a > b ){ //30 > 30 
        printf("%d is max",a);
    }else{
        printf("%d is max",b);
    }

    return 0; 
}