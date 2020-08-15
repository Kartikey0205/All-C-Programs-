//WAP to print elements of 3-D matrix [3*3]
#include <stdio.h>
int main()
{
    int ARR[100][100], i, j;
    printf("Enter the values of array :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ARR[i][j]);
        }
    }
    printf("The 3D Array is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", ARR[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT: 
Enter the values of array :
1
2
3
4
5
6
7
8
9
The 3D Array is :
1 2 3
4 5 6
7 8 9
*/