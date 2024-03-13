#include<stdio.h> // define the header file 

// Create a function
void myFunction() {
  printf("I just got executed!");
}


//example two;
//Parameters and Arguments

void MyNames(char name[],int age){
    printf("hello %s. you are %d years old.\n",name,age);
}

//When a parameter is passed to the function, it is called an argument. So, from the example above: name is a parameter, while Liam, Jenny and Anja are arguments.

int main(){
    
    MyNames("Liam",3);
    MyNames("Jenny",14);
    MyNames("Anja",30);
    return 0;
}