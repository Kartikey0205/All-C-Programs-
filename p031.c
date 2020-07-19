// WAP to print first N natural numbers in reverse

#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter the natural number:\n ");
    scanf("%d", &N);
    for (i = N; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}

/*OUTPUT: 
Enter the natural number:
 7
7 6 5 4 3 2 1 
*/

//EXERCISE - please try it yourself !!
// WAP to print first 10 natural numbers in reverse