//WAP to print all prime factors of a number in C
#include <stdio.h>

int main()
{
    int x, i;
    printf("Enter a number :");
    scanf("%d", &x);

    for (i = 2; x > 1; i++)
    {
        while (x % i == 0)
        {
            printf("%d ", i);
            x = x / i;
        }
    }

    return 0;
}

/* OUTPUT:
Enter a number :36
2 2 3 3 

*/
