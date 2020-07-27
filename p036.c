//WAP to calculate LCM of 2 no.

#include <stdio.h>
int main()
{
    int a, b, L;
    printf("Enter two number :\n");
    scanf("%d%d", &a, &b);
    for (L = (a > b ? a : b); L <= (a * b); L++)

    {
        if (L % a == 0 && L % b == 0)
            break;
    }

    printf("LCM of %d & %d is %d", a, b, L);
    return 0;
}
/* OUTPUT:
Enter two number :
4
6
LCM of 4 & 6 is 12
*/
