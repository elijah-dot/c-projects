#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter value x,y and z;");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if (x<y){
        if (x<z){
            printf("x is smallest");

        }
        else {
            printf("z is smallest");

        }
    }
    else if (y<z){
        printf("y is smallest");
    }
    else {
        printf("z is smallest");
    }
    return 0;

    
}