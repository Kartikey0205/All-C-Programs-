// WAP to check whether he is eligible for vote or not

#include <stdio.h>

int main()
{
    int x;
    printf("Enter the age :\n");
    scanf("%d", &x);
    if (x > 18)
    {
        printf("Yes, you are eligible for vote.");
    }
    else
    {
        printf("No, you are not eligible for vote.");
    }

    return 0;
}

/* OUTPUT:
Enter the age :
20
Yes, you are eligible for vote.

*/
