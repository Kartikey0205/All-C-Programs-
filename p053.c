// Star Pattern 1

#include<stdio.h>
int main() {
    int rows=5, columns = 10, i, j;
    for (i= 1; i<= rows; i++)
    {
        for (j = 1; j < columns; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
// Exercise : 
/* Try this question again by asking to user to enter the values of rows and columns and solve according to that
*/


/* OUTPUT:
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
*/