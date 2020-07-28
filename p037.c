// WAP to calculate sum of first N natural number

#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter the natural number:\n");
    scanf("%d", &N);
    int x = N;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum of first %d natural number is \n%d", x, sum);
    return 0;
}

/* OUTPUT:
Enter the natural number:
5
Sum of first 5 natural number is 
15
*/
