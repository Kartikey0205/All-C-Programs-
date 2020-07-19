// WAP to print multiplication of table

#include <stdio.h>

int main()
{
    int i, x = 1;
    printf("Enter the no. of a table which you want :\n");
    scanf("%d", &i);
    printf("Multiplication Table of %d is:\n", i);
    // by while LOOP

    while (x != 11)
    {
        printf("%d*%d=%d\n", i, x, i * x);
        x++;
    }

    return 0;
}

/*
OUTPUT: - of while loop
Enter the no. of a table which you want :
6
Multiplication Table of 6 is:
6*1=6
6*2=12
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42
6*8=48
6*9=54
6*10=60

*/



// EXERCISE - TRY IT BY USING FOR LOOP PLEASE !!
