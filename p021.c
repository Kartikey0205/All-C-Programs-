// WAP to check whether a number is positive or negative

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the number :\n");
    scanf("%d", &x);
    if (x >0)
    {
        printf("The number is POSITIVE.");
    }
    else
    {
        printf("The number is NEGATIVE.");
    }

    return 0;
}

/* OUTPUT:
Enter the number :
5
The number is POSITIVE.
*/