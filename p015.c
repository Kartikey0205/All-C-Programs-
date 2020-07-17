// WAP to see the use of all Bitwise Operators
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    a = 23 & 56;
    b = 23 | 56;
    c = 23 ^ 56;
    d = ~23;
    e = 56 >> 2;
    f = 56 << 3;
    printf("Bitwise AND is: %d \n", a);
    printf("Bitwise OR is: %d \n", b);
    printf("Bitwise XOR is: %d \n", c);
    printf("Bitwise NOT is: %d \n", d);
    printf("Bitwise RIGHT SHIFT is: %d \n", e);
    printf("Bitwise LEFT SHIFT is: %d \n", f);
    return 0;
}

/* OUTPUT:

Bitwise AND is: 16 
Bitwise OR is: 63 
Bitwise XOR is: 47 
Bitwise NOT is: -24 
Bitwise RIGHT SHIFT is: 14 
Bitwise LEFT SHIFT is: 448 

*/
