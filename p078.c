//WAP to sum average of 5 numbers
#include <stdio.h>
int main()
{
    int n, A[100], i, avg, sum = 0;
    printf("Enter the number of array :\n");
    scanf("%d", &n);
    printf("Enter the %d number:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }
    avg = sum / 5;
    printf("The average is :\n %d", avg);
    return 0;
}
/* OUTPUT:
Enter the number of array :
5
Enter the 5 number:
1
2
3
4
5
The average is :
 3
*/