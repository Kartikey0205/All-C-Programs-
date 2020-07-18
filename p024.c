// WAP to find largest of 3 no.s using nested-if-else
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the First Number:\n");
    scanf("%d", &x);
    printf("Enter the Second Number:\n");
    scanf("%d", &y);
    printf("Enter the Third Number:\n");
    scanf("%d", &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("First Number is highest among all three");
        }
        else
        {
            printf("Third Number is highest among all three");
        }
    }
    else
    {
        if (y > z)
        {
            printf("Second Number is highest among all three");
        }
        else
        {
            printf("Third Number is highest among all three");
        }
    }

    return 0;
}

/*OUTPUT:
Enter the First Number:
6
Enter the Second Number:
9
Enter the Third Number:
3
Second Number is highest among all three
*/