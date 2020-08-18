// WAP to find largest of 3 numbers usimg functions and pointers
#include <stdio.h>
int large(int *, int *, int *);
int main()
{
    int num1, num2, num3;
    printf("Enter the first number :\n");
    scanf("%d", &num1);
    printf("Enter the second number :\n");
    scanf("%d", &num2);
    printf("Enter the third number :\n");
    scanf("%d", &num3);

    int G = large(&num1, &num2, &num3);
    printf("The largest among %d,%d and %d is %d", num1, num2, num3, G);
    return 0;
}
int large(int *a, int *b, int *c)
{
    int L1, L2;
    L1 = (*a > *b) ? *a : *b;
    L2 = (*b > *c) ? *b : *c;
    int L = L1 > L2 ? L1 : L2;
    return L;
}
/* OUTPUT:
Enter the first number :
50
Enter the second number :
37
Enter the third number :
89
The largest among 50,37 and 89 is 89
*/