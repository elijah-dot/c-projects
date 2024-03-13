#include <stdio.h>
// #include <stdbool.h> 
int main(){
   char answer;
   char result;
   
   char good[] = "A";
   char dome[] = "B";
   char jim[]  = "C";
   char done[] = "Y";
   char wow[] = "N";
   int w;
   int x = 15000;
   int z = 13000;
   int y = 13000;

   int sumXZ = x + z;
   int sumYZ = y + z;
   int cold = sumXZ - z;
   int warm = sumYZ - z;
   printf("Enter your status:\n A:Ophaned\n B:Needy\n C:other\n");
   scanf("%1c",&answer);
   if (answer == *good || answer == *dome){
    printf("Are you in affamative action?ANSWER IN THIS FORMAT Y=yes AND N=no\n");
    scanf("%s",&result);
    if (answer == *good & result == *done){
        // x = 15000;
        // z = 13000;
        // sum = x + z ;
        printf("your have been allocated %d Ksh.",sumXZ);
    }
    else if(answer == *good & result == *wow ){
        printf("you have been allocated %d Ksh.",cold);
    }
    else if(answer == *dome & result == *done ){
        printf("your have been allocated %d Ksh.",sumYZ);
}
    else if(answer == *dome & result == *wow ){
        printf("you have been allocated %d Ksh.",warm);

    }
    else {
        printf("!!!!please enter the correct values:yes or no as Y or N");
    }
   }
   else if(answer == *jim){
    printf("you have been allocated %d Ksh as you are not qualified for this disbursement.",w);
   }
   else{
    printf("PLEASE ENTER THE CORRECT VALUES DEPENDING ON THE MODE AND TYPE OF ANSWERS GIVEN.\n");
   }
   

    

    
    return 0;

    
}