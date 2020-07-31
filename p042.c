//WAP to calcuate to check whether a number is prime or not
#include <stdio.h>

int main()
{
    int x, i;
    printf("Enter a number : \n");
    scanf("%d", &x);
    for (i = 2; i <= x - 1; i++)
    {
        if (x % i == 0)
            break;
    }
    if (i == x)

        printf("YES , %d is  a prime number ", x);

    else

        printf("NO , %d is not a prime number ", x);

    return 0;
}
/* OUTPUT:
Enter a number :
32
NO , 32 is not a prime number
*/
