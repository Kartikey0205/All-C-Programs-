//  WAP to find largest of 3 no.s using ternary operator
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    // using gternary operator it is little bit tricky to understand kindly please understand each lines like if else

    (a > b) ? ((a > c) ? printf("a is largest") : printf("c is largest")) : ((b > c) ? printf("b is largest") : printf("c is largest"));

    return 0;
}

/* OUTPUT:
Enter 3 numbers:
30
87
61
b is largest

*/
