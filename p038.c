//WAP to calculate product of first N natural number
#include <stdio.h>

int main()
{
    int N, pro = 1;
    printf("Enter the natural number:\n");
    scanf("%d", &N);
    int x = N;
    for (int i = 1; i <= N; i++)
    {
        pro = pro * i;
    }

    printf("Product of first %d natural number is \n%d", x, pro);
    return 0;
}

/* OUTPUT:
Enter the natural number:
5
Product of first 5 natural number is 
120
*/
