//  WAP to see the use of all Logical Operators
#include <stdio.h>

int main()
{
    int y = 5, x, p, q;
    x = !y > 4;
    p = y > 4 && y > 10;
    q = y < 4 || y < 10;
    printf("LOGICAL NOT is: %d \n", x);
    printf("LOGICAL AND is: %d \n", p);
    printf("LOGICAL OR is: %d \n", q);
    return 0;
}

/* OUTPUT:

LOGICAL NOT is: 0 
LOGICAL AND is: 0 
LOGICAL OR is: 1 

*/
