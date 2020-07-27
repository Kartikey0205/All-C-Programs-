// WAP to calculate sum of digit of number
#include <stdio.h>

int main()
{
    int x, sum = 0, r;

    printf("Enter any number :\n");
    scanf("%d", &x);
    while (x != 0)
    {
        r = x % 10;
        sum = sum + r;
        x = x / 10;
    }

    printf("Sum of digits is %d", sum);
    return 0;
}
/* OUTPUT:
Enter any number :
65365
Sum of digits is 25
*/