//WAP to calculate GCD of 2 no.
#include <stdio.h>

int main()
{
    int x, y, H;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &x, &y);
    for (H = (x > y ? y : x); H >= 1; H--)
    {
        if (x % H == 0 && y % H == 0)
            break;
    }

    printf("HCF is \n%d", H);
    return 0;
}

/* OUTPUT:
Enter the two numbers:
4
6
HCF is
2
*/
