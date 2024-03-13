#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d",&a);
    scanf("%d",&b);

    scanf("%d",&c);

    if (a>=b){
        if (a>=c){
            printf("%d  a is the largest number",a);

        }
        else{
            printf("%d c is the largest number",c);

        }
    }
        else if (b>=c){
                printf("%d b is the largest number",b);
            }
        else {
                printf("%d c is the largest number",c);
            }
        
    

    
    return 0;

    
}