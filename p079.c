//WAP to calculate sum of all even and odd natural number in an array
#include <stdio.h>
 
void main()
{
    int i,A[100], num, odd_sum = 0, even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    printf("Enter the %d number \n",num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for (i = 0; i < num; i++)
    {
        if (A[i] % 2 == 0)
            even_sum = even_sum + A[i];
        else
            odd_sum = odd_sum + A[i];
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}

/* WAP to calculate sum of all even and odd natural INDEX in an array
*/

/*OUTPUT:
Enter the value of num
10
Enter the 10 number 
5
7
45
91
105
85
2
34
356
20
Sum of all odd numbers  = 338
Sum of all even numbers = 412
*/