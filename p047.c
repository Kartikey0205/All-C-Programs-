//WAP tp print factorial of a number
#include <stdio.h>
int main()
{
    int x, fact = 1;
    printf("Enter the number :\n ");
    scanf("%d", &x);
    for (int i = x; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Fcatorial of %d is \n  %d ", x, fact);
    return 0;
}
/* OUTPUT:
Enter the number :
 5
Fcatorial of 5 is
  120
*/
