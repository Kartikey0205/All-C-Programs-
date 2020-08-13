//WAP to print Fibonacci series with recursion
int fib_rec(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fib_rec(n-2) + fib_rec(n-1);

}
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number : \n");
    scanf("%d", &num);
    printf("The term in fibonaaci series at position %d is %d", num, fib_rec(num));
    return 0;
}

/* OUTPUT:
Enter a number :
6
The term in fibonaaci series at position 6 is 13

*/