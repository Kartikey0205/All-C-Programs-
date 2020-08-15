//WAP to find whether the array of integer contains a duplicate number
#include <stdio.h>
int main()
{
    int i, n, A[100], value, j, flag = 0;
    printf("Enter the number :\n");
    scanf("%d", &n);
    printf("Enter the %d number :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        value = A[i];

        for (j = i + 1; j < n; j++)
        {
            if (value == A[j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("Duplicate");
    }
    else
    {
        printf("Not Duplicate");
    }
    return 0;
}

/* OUTPUT:
Enter the 10 number :
1
2
3
4
5
1
6
7
8
9
Duplicate
*/