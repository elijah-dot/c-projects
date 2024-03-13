#include <stdio.h>
int main(){
    int numrows;
    int sum ;
    printf("enter number of rows;");
    scanf("%d",&numrows);
    for(int rowno = 1; rowno <= numrows;rowno++){
        for(int colno = 1;colno <= rowno;colno++){
            int sum = rowno;
            // printf("*  ");//prints stars
            printf("%d ",sum);

        }
        printf("\n");

    }
    return 0 ;
}