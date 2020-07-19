// WAP to reverse a number

#include <stdio.h>
int main()
{
    int x, r, y = 0;
    printf("Enter the number which we want to reverse :\n");
    scanf("%d", &x);

    while (x != 0)
    {
        r = x % 10;
        y = y * 10 + r;
        x = x / 10;
    }

    printf("Reverse number is :\n%d", y);

    return 0;
}

/* OUTPUT:
Enter the number which we want to reverse :
1093
Reverse number is :
3901

*/
