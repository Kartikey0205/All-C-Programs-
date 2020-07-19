// WAP to print first N even natural numbers

#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter the natural number:\n ");
    scanf("%d", &N);
    printf("First %d  EVEN natural number is : \n", N);
    for (i = 1; i <= N; i++)
    {
        printf("%d ", 2 * i);
    }

    return 0;
}

/*OUTPUT: 
Enter the natural number:
 9
First 9  EVEN natural number is : 
2 4 6 8 10 12 14 16 18 
*/

// ypur ASSIGNMENT

// WAP to print first 10 even natural numbers