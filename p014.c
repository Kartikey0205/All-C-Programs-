// WAP to find the size of datatypes, variable, constant
#include <stdio.h>

int main()
{

    int a, b, c, d;
    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(char);
    d = sizeof(double);
    printf("Size of datatype  is:\n");
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);

    return 0;
}

/* OUTPUT:

Size of datatype  is:
4
4
1
8

*/
