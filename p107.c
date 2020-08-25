//WAP using Structure to find largest of 3 numbers
#include <stdio.h>
struct number
{
    int a, b, c, largest;

} num;

int main()
{

    printf("Enter the first NO. : \n");
    scanf("%d", &num.a);
    printf("Enter the second NO. : \n");
    scanf("%d", &num.b);
    printf("Enter the third NO. : \n");
    scanf("%d", &num.c);

    printf("Largest Number is: \n");
    //  num.largest = ((num.a > num.b) ? ((num.a > num.c) ? num.a : num.c) : ((num.b > num.c) ? num.b : num.c));
    int l1 = num.a > num.b ? num.a : num.c;
    int l2 = num.b > num.c ? num.b : num.c;
    num.largest = l1 > l2 ? l1 : l2;
    printf("%d", num.largest);
    return 0;
}

/* OUTPUT:
Enter the first NO. :
8
Enter the second NO. :
9
Enter the third NO. :
30
Largest Number is:
30
*/