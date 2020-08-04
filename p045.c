// WAP to print upto 10 terms of Fibonacci series

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the index to get fibonacci series :\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib(number));
    return 0;
}

int fib(int n)
{
    int a = 0, b = 1; // any fibonacci series must start with 0 and 1
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

/* OUTPUT:
Enter the index to get fibonacci series :
20
The value of fibonacci number at position no 20 using iterative approach is 4181
*/