#include<stdio.h> // define the header file 
#include <stdbool.h> // import the boolean header first.
void main()   // define the main function  
{  
    printf("Welcome to JavaTpoint\n");  // print the statement.  
    float sum = (float) 5/ 2;
    printf("%f", sum);
    int a = 25, b = 5;

    // using operators and printing results 
    //relational operators
    printf("a < b  : %d\n", a < b); 
    printf("a > b  : %d\n", a > b); 
    printf("a <= b: %d\n", a <= b); 
    printf("a >= b: %d\n", a >= b); 
    printf("a == b: %d\n", a == b); 
    printf("a != b : %d\n", a != b); 
        //logical operators
    printf("a && b : %d\n", a && b); 
    printf("a || b : %d\n", a || b); 
    printf("!a: %d\n", !a); 

    const float PI = 3.14;
    int radius = 21 ;
    int diemeter = radius + radius;
    int area = PI * radius * radius ;
    int circumfrence = PI * diemeter;
    printf("the area is %d\n",area);
    printf("the circumfrence is %d\n",circumfrence);
    printf("%lu\n",sizeof(radius)); //used to know the size of data types.

    //booleans in c
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d\n",isProgrammingFun);//returns 1

    printf("%d\n",isFishTasty);//returns 0

    //Comparing Values and Variables
    printf("%d\n",10>9);
    int x = 10;
    int y = 9;
    printf("%d", x > y);

    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
    printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    // Find out if both hamburger and pizza is tasty
    printf("%d\n", isHamburgerTasty == isPizzaTasty);

    //if statements.
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge){
        printf("old enough to vote \n");

    } else {
        printf("Not old enough to vote");
    }

    int time = 22;
    if (time < 10) {
    printf("Good morning.");
    } else if (time < 20) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    //Short Hand If...Else (Ternary Operator)

    //variable = (condition) ? expressionTrue : expressionFalse;
    //int time = 20;
    //(time < 18) ? printf("good day \n") : printf("good evening \n");
    //example
    int doorCode = 1337;
    (doorCode == 1337) ? printf("\nCorrect code.The door is now open.") : printf("Wrong code.\nThe door remains closed.");
    //switch expression --Instead of writing many if..else statements, you can use the switch statement.
    //SWITCH FORMULAR.
    //     switch (expression) {
    // case x:
    //     // code block
    //     break;
    // case y:
    //     // code block
    //     break;
    // default:
    //     // code block
    // }
    //example.
    int day = 6;
    switch (day) {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("\nThursday");
        break;
        case 5:
        printf("Friday");
        break;
        default:
        printf("\nnot found\n");
    }
    //While loop
    //The while loop loops through a block of code as long as a specified condition is true:
    int i = 0;
    while (i < 5){
        printf("%d\n",i);
        i++;
    }

    //The Do/While Loop.--The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
    int p = 0;
    do {
        printf("%d\n",p);
        p++;
    }
    while (p < 5);

    int countdown = 3;

    while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
    }

    printf("Happy New Year!!\n");

    //while loop combined with an if else statement, 
    int dice = 1;
    while (dice <= 6){
        if (dice < 6){
            printf("No yatzy\n");

        } else {
            printf("Yatzy !\n");
        }
        dice++;
    }

                        // for loop--When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
                        // for loop synta
                            // int z ;
    int z;

    for (z = 0; z < 5; z++) {
    printf("%d\n", z);
    }                      // for (z = 0; z > 5; z++){
                            //     printf("%d\n",z);
                            // }
    printf("why");
    int dust;
    printf("\ntype a number:\n");
    scanf("%d",&dust);
    printf("your number is:%d",dust);

    // multiple innputs
    // Create an int and a char variable
    // int myNum;
    // char myChar;

    // // Ask the user to type a number AND a character
    // printf("Type a number AND a character and press enter: \n");

    // // Get and save the number AND character the user types
    // scanf("%d %c", &myNum, &myChar);

    // // Print the number
    // printf("Your number is: %d\n", myNum);

    // // Print the character
    // printf("Your character is: %c\n", myChar);

    // char firstName[30];
    // printf("\nenter your first name:\n");
    // scanf("%s",firstName);
    // printf("hello %s",firstName);
    //That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:


    char fullName[30];

    printf("\nType your full name and press enter: \n");
     // Get the text
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);                                    // char fullName[30];
                                       // printf("\ntype your full name: \n");
                                        // fgets(fullName, sizeof(fullName), stdin);
                                        // printf("hello %s",fullName);

    //C Arrays
    int myNumbers[] = {25,50,75,100};
    // myNumbers[0]=33;

    printf("%d",myNumbers[0]);
    int o;

    for (o = 0;o < 4;o++){
         printf("%d\n",myNumbers[o]);


    }

    //an array storing different ages
    int ages[] = {20,22,18,35,48,26,86,70};
    float avg, jim= 0;
    int k ;

    // get the length of the array
    int length = sizeof(ages)/sizeof(ages[0]);
    printf("\nlength is:%d\n",length);

    for (int i = 0; i < length; i++) {
    jim += ages[i];
    }
    printf("the sum of all array elements%d\n",jim);
    avg = jim/length;

    printf("the average age is:%.2f",avg);

    // finding the lowest age
    int lowestAge = ages[0];
    // printf("\n%d\n",lowestAge);
    for(int i = 0;i < length; i++){
        if(lowestAge > ages[i]){
            lowestAge = ages[i];
        }
    }

    printf("The lowest age in the array is: %d\n", lowestAge);

    // Multidimensional Arrays-However, if you want to store data as a tabular form, like a table with rows and columns.
    int matrix[2][3]={{1,4,2},{3,6,8}};
    printf("%d",matrix[0][2]); //outputs 2

    //Change Elements in a 2D Array
    matrix[0][0] = 9;

    printf("\n%d\n", matrix[0][0]);  // Now outputs 9 instead of 1
     //Loop Through a 2D Array

     int s , t;
     for (s = 0; s < 2;s++){
        for(t = 0;t < 3; t++){
            printf(" \nthis is the 2D loop%d\n",matrix[s][t]);
        }
     }
     //C Pointers-A pointer is a variable that stores the memory address of another variable as its value.(used together with the & reference operator).
     int myGoodness = 43;
    printf("%d\n", myGoodness);  // Outputs the value of myGoodness (43)
    printf("%p", &myGoodness); // Outputs the memory address of myGoodness(0x7ffe5367e044)

    //pointer variable-A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

    int *ptr = &myGoodness;// Pointer declaration //this is a pointer varriable.

    printf("\n%p\n",ptr);

    //Dereference.-You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):

    printf("%d\n", *ptr); // Dereference: Output the value of myAge with the pointer (43)

     //C Pointers and Arrays
    printf("%p\n", &ages);//// Get the memory address of the ages array
    printf("%p\n", &ages[0]);// Get the memory address of the first array element

    printf("%d",*ages);
    //To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):
    printf("\n%d\n",*(ages + 1));
    
    //Or loop through it:
    int *age = ages;
    int l;
    for(l = 0; l < 8; l++){
        printf("%d\n", *(age + l));
    }



    








}  