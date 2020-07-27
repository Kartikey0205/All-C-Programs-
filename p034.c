// WAP to count digits of a number
#include <stdio.h>

int main()
{
    int x, count = 0;
    printf("Enter the number which you to want count its digit: \n");
    scanf("%d", &x);
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    printf("Total Digit  is %d", count);

    return 0;
}

/*
OUTPUT:
Enter the number which you to want count its digit: 
37379
Total Digit  is 4

*/