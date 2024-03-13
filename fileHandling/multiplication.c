#include <stdio.h>
int main(){
    int a;
    printf("Enter value a:");
    scanf("%d",&a);
    for (int munum = 1;munum <= 20; munum++){
        int multi = a * munum;
        printf("%d * %d = %d \n",a,munum,multi);
    }
    
    return 0;

    
}