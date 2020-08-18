//WAP to display an array of given numbers
#include <stdio.h>
int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr1;
    int *ptr2;
    ptr1 = &A[0];
    ptr2 = &A[9];
    int i = 0;
    printf("The first way of this program is :\n");

    while (ptr1 <= ptr2)
    {
        printf("The value at index %d is %d\n", i, *ptr1);
        i++;
        ptr1++;
    }
    printf("The second way of this program is :\n");
    ptr1 = &A[0];
    for (i = 0; i < 10; i++)
    {
        printf("Value of Array at index %d is %d\n", i, *(ptr1 + i));
    }

    return 0;
}
/* OUTPUT:
The first way of this program is :
The value at index 0 is 0
The value at index 1 is 1
The value at index 2 is 2
The value at index 3 is 3
The value at index 4 is 4
The value at index 5 is 5
The value at index 6 is 6
The value at index 7 is 7
The value at index 8 is 8
The value at index 9 is 9
The second way of this program is :
Value of Array at index 0 is 0
Value of Array at index 1 is 1
Value of Array at index 2 is 2
Value of Array at index 3 is 3
Value of Array at index 4 is 4
Value of Array at index 5 is 5
Value of Array at index 6 is 6
Value of Array at index 7 is 7
Value of Array at index 8 is 8
Value of Array at index 9 is 9
*/