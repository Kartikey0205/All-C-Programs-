//WAP to enter n number of digits from a number using these digits
#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0, A[100], nod, i; //nod=number of digit
    printf("Enter the number of digit:\n");
    scanf("%d", &nod);
    printf("Enter the %d number :\n", nod);
    for (i = 0; i < nod; i++)
    {
        scanf("%d", &A[i]);
    }
    i = 0;
    while (i < nod)
    {
        n = n + A[i] *(pow(10, i));
        i++;
    }
    printf("\n The number is : %d", n);
    return 0;
}
/*OUTPUT:
Enter the number of digit:
5
Enter the 5 number :
7
6
2
9
6

 The number is : 69266

*/