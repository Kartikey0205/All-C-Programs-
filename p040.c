//WAP to all armstrong number under 1000

#include <stdio.h>
int main()
{
    int n, r;
    printf("Armstrong Number under 1000 are\n");
    for (n = 1; n <= 1000; n++)
    {
        int sum = 0;
        int x;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            sum = sum + (r * r * r);
            x = x / 10;
        }
        if (sum == n)
        {
            printf("%d\n", sum);
        }
    }

    return 0;
}

/* OUTPUT:
Armstrong Number under 1000 are
1
153
153
370
371
407
*/
