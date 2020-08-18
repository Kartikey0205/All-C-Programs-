//WAP to add 2 numbers using function and pointer
void sum(int *, int *, int *);
#include <stdio.h>
int main()
{
    int num1, num2, total;
    printf("\n Enter the first number :\n");
    scanf("%d", &num1);
    printf("Enter the second number :\n");
    scanf("%d", &num2);
    sum(&num1, &num2, &total);
    printf("Total = %d", total);
    return 0;
}
void sum(int *a, int *b, int *add)
{
    (*add) = (*a) + (*b);
}

/* OUTPUT:

 Enter the first number :
3
Enter the second number :
5
Total = 8
*/