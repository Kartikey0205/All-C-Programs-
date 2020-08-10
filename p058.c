//Star Pattern 6
#include<stdio.h>
int main() {
    char i, j;
    for (i = 65; i <= 70; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c ",j);
        }

        printf("\n");
    }

    return 0;
}
/* OUTPUT:
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F 
*/