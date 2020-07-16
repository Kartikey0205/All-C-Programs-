//WAP to swap two numbers with the help of third variable
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the two number: \n");
    scanf("%d %d", &a, &b);
    printf("Number before swap is %d %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Number after swap :%d %d", a, b);
    return 0;
}

/*OUTPUT:
Enter the two number: 
2
8
Number before swap is 2 8
Number after swap :8 2
 */
