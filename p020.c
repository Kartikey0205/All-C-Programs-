// WAP to check whether a year is leap year or not

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the year :\n");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("The year is LEAP year.");
    }
    else
    {
        printf("The year is not a LEAP year.");
    }

    return 0;
}

/* OUTPUT:
Enter the year :
2020
The year is LEAP year.

*/
