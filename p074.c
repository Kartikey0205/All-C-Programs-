//WAP to print position of smallest of n number using arrray
#include <stdio.h>
int main()
{
    int i, n, small, a[100], Si = 0;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    printf("Enter the %d number:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (i = 0; i < n; i++)
    {
        if (small >= a[i])
        {
            small = a[i];
            Si = i;
        }
    }
    printf("The position of smallest of %d number is at index %d \n The value of smallest number is %d", n, Si, small);

    return 0;
}
/* 
    Enter the value of n :
5
Enter the 5 number:
3
7
1
0
4
The position of smallest of 5 number is at index 3
 The value of smallest number is 0
    */
