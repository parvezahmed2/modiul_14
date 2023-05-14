#include<stdio.h>

// return + no parameter 

void sum(int x, int y){
    int s=x+y;  // calculation 
    printf("%d\n",s); // print value 
}

int main(){  

int a,b; 
scanf("%d %d",&a,&b); // input value 
sum(a,b); // paramiter pass 
     

    return 0;
}