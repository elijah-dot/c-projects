#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter value x,y and z;");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x>y){
        if (x>z){
            printf("x is greatest");

        }
        else {
            printf("z is greatest");

        }
    }
    else if (y>z){
        printf("y is greatest");
    }
    else {
        printf("z is greatest");
    }
    return 0;

    
}