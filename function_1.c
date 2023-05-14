#include<stdio.h>

/*
return_type name(parameter)
{
    code

    return what?
}
*/
// return + paramiter 

int sum(int x,int y)
{   
    // calculation 
    int sum=x+y;
    return sum; // return value of sum 
}

int main(){
    
   int s=sum(10,20); // sum(10, 20) er maddhobe x y parameter ke call kore 
        // s = return value store kore 
    printf("%d",s); //print of s 

    return 0;
}