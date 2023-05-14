#include<stdio.h>

// return +no paramiter 
int sum() 
{
    int a,b; 
    scanf("%d %d",&a,&b); // intpur value 
    int s=a+b; // calculation 

    return s; // return value 
}

int main(){

    int s=sum(); // call the function 
            //s = store value 
    printf("%d",s); // print value 
     

    return 0;
}