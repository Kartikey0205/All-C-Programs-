// WAP to print first N odd natural numbers

#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter the natural number:\n ");
    scanf("%d", &N);
    printf("First %d  ODD natural number is : \n", N);
    for (i = 1; i <= N; i++)
    {
        printf("%d ", 2 * i - 1);
    }

    return 0;
}

/*OUTPUT: 
Enter the natural number:
 11
First 11  ODD natural number is : 
1 3 5 7 9 11 13 15 17 19 21 
*/

//YOUR ASSIGNMENT

// WAP to print first 10 odd natural numbers