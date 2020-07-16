// WAP to swap two numbers without using third variable
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number :\n");
    scanf("%d %d", &a, &b);
    printf("Nummber before swapping : %d %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number after swaaping :%d %d", a, b);
    return 0;
}

/* OUTPUT:

Enter two number :
5
6
Nummber before swapping : 5 6
Number after swaaping :6 5
*/