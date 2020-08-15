//WAP to print elements of 2-D matrix
#include <stdio.h>
int main()
{
    int ARR[100][100], i, j;
    printf("Enter the values of array :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &ARR[i][j]);
        }
    }
    printf("The 2D Array is :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", ARR[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/* OUTPUT:
Enter the values of array :
2
3
4
5
The 2D Array is :
2 3
4 5
*/