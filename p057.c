//Star Pattern 5

#include<stdio.h>
int main() {
    int i, j, count=0;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }

        printf("\n");
    }

    return 0;
}
/* OUTPUT:
0
1 2
3 4 5
6 7 8 9
*/