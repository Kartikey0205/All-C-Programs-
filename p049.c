//WAP to print calculator
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    while (1)
    {

        printf("What do you want to do \n 1- Addition \n 2- Subtraction \n 3-Multiplication \n 4- Divide \n 5- Exit \n Enter here : ");

        scanf("%d", &choice);
        int a, b;
        float add, subtract, multiply, divide;
        switch (choice)
        {
        case 1:
            printf("You have choosen Addition , Let's Begin \n");
            printf("Enter Two number :\n");
            scanf("%d%d", &a, &b);
            add = a + b;
            printf("The addition of %d and %d are %f \n ", a, b, add);
            break;

        case 2:
            printf("You have choosen Subtraction , Let's Begin \n ");
            printf("Enter Two number :\n");
            scanf("%d%d", &a, &b);
            subtract = a - b;
            printf("The addition of %d and %d are %f \n", a, b, subtract);
            break;

        case 3:
            printf("You have choosen Multiplication , Let's Begin \n ");
            printf("Enter Two number :\n");
            scanf("%d%d", &a, &b);
            multiply = a * b;
            printf("The addition of %d and %d are %f \n", a, b, multiply);
            break;

        case 4:
            printf("You have choosen Division , Let's Begin \n ");
            printf("Enter Two number :\n");
            scanf("%d%d", &a, &b);
            divide = a / b;
            printf("The addition of %d and %d are %f  \n", a, b, divide);
            break;

        case 5:
            printf("Thanks for doing Calculation!! , Have a Great Day !!\n");
            exit(0);
            break;

        default:
            printf("Invalid Choice !! Please choose the right choice\n");
            break;
        }
    }
    return 0;
}

/* The complete OUTPUT for each choice :

What do you want to do 
 1- Addition 
 2- Subtraction        
 3-Multiplication      
 4- Divide 
 5- Exit 
 Enter here : 1
You have choosen Addition , Let's Begin 
Enter Two number :
20
50
The addition of 20 and 50 are 70.000000 
 What do you want to do 
 1- Addition 
 2- Subtraction 
 3-Multiplication 
 4- Divide 
 5- Exit 
 Enter here : 2
You have choosen Subtraction , Let's Begin 
 Enter Two number :
30
40
The addition of 30 and 40 are -10.000000 
What do you want to do
 1- Addition
 2- Subtraction
 3-Multiplication
 4- Divide
 5- Exit
 Enter here : 3
You have choosen Multiplication , Let's Begin 
 Enter Two number :
30
8
The addition of 30 and 8 are 240.000000 
What do you want to do
 1- Addition
 2- Subtraction
 3-Multiplication
 4- Divide
 5- Exit
 Enter here : 4
You have choosen Division , Let's Begin
 Enter Two number :
40
8
The addition of 40 and 8 are 5.000000
What do you want to do
 1- Addition
 2- Subtraction
 3-Multiplication
 4- Divide
 5- Exit
 Enter here : 9
Invalid Choice !! Please choose the right choice
What do you want to do
 1- Addition
 2- Subtraction
 3-Multiplication
 4- Divide
 5- Exit
 Enter here : 5
Thanks for doing Calculation!! , Have a Great Day !!
*/