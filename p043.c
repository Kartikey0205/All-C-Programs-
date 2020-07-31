//WAP to print all prime number between two numbers
#include <stdio.h>

int main()
{
    int x, y, i, j;
    printf("Enter  two  number : \n");
    scanf("%d%d", &x, &y);
    for (i = x + 1; i <= y - 1; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (i == j)

            printf("PRIME NUMBERS between %d&%d are %d\n", x, y, i);
    }
    return 0;
}

/* OUTPUT:
Enter  two  number :
10
20
PRIME NUMBERS between 10&20 are 11
PRIME NUMBERS between 10&20 are 13
PRIME NUMBERS between 10&20 are 17
PRIME NUMBERS between 10&20 are 19

*/
