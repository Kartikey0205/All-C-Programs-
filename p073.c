//WAP to read and display n numbers using array
#include <stdio.h>

int main()
{
    int n, A[100], i;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    printf("Enter the %d number:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The number at position %d is %d\n", i, A[i]);
    }
    return 0;
}
/* OUTPUT:
Enter the value of n :
5
Enter the 5 number:
5
3
8
2
9
The number at position 0 is 5
The number at position 1 is 3
The number at position 2 is 8
The number at position 3 is 2
The number at position 4 is 9
*/