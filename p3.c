//WAP to add , sub. , multiply , divide two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Sum of a and is %d\n", a + b);
    printf("Subtraction of a and is %d\n", a - b);
    printf("Multiplication of a and is %d\n", a * b);
    printf("Division of a and is %d\n", a / b);
    printf("Modulus of a and is %d\n", a % b);
    /*
/ this is a division and it gives only quotient never count remainder

% this is a modulus operator which gives us remainder
*/
    return 0;
}

/*OUTPUT :

Enter two numbers:
7
3
Sum of a and is 10
Subtraction of a and is 4
Multiplication of a and is 21
Division of a and is 2
Modulus of a and is 1

*/
