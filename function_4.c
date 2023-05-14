#include<stdio.h>
//no return + no parameter 
void sum(void){
    int a,b;
    scanf("%d %d",&a,&b); // input value 
    int s=a+b; // calucation 
    printf("%d",s); // print value 
}

int main(){


    sum(); // call the function 
    

    return 0;
}