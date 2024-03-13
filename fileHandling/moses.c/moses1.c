#include  <stdio.h>
int main(){
    int x;
 printf("enter the value of x");
 scanf("%d",& x);
 int factorial =1;
 while(x>0)
    {
        factorial*=x;
        x--;
    } 
    printf("factorial=%d",factorial);
    return 0;
}