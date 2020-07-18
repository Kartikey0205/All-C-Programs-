// WAP to find largest of 3 no.s using && operator

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the Three Number:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is largest");
    }
    else
    {
        if (b > a && b > c)
        {
            printf("b is largest");
        }
        else
        {
            printf("c is largest");
        }
    }

    return 0;
}


/* OUTPUT:
Enter the Three Number:
40
34
56
c is largest

*/
