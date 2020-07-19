// WAP to print first N natural numbers

#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter the natural number:\n ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

/*OUTPUT: 
Enter the natural number:
 11
1 2 3 4 5 6 7 8 9 10 11 
*/

//EXERCISE - please try it yourself !!
// WAP to print first 10 natural numbers