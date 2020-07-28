//WAP to calculate x power y
#include <stdio.h>

int main()
{
    int x, y, p = 1, i;
    printf("Enter the number\n");
    scanf("%d", &x);
    printf("Enter the power\n");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        p = p * x;
    }

    printf("Result of %d to the  power %d is \n%d", x, y, p);
    return 0;
}


/* OUTPUT:
Enter the number
2
Enter the power
5
Result of 2 to the  power 5 is 
32
*/