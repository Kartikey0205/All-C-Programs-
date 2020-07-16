// WAP to see the how increment/decrement operators work
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter First Number :\n");
    scanf("%d", &x);
    x++;

    /*
    you can try yourself by trying all these also
    x--; it is known as post decrement
    ++x; it is known as pre increment
    --x; it is known as pre decrement
    */
    printf("Number after incriment:\n%d", x);

    printf("\nEnter Second Number:\n");
    scanf("%d", &y);
    y += x;

    // it simply means y=x+1 (here the valueof x comes from upper lines of program i.e.,x= value after increment)

    printf("Number after incriment:\n%d", y);
    return 0;
}

/* OUTPUT:
Enter First Number :
7
Number after incriment:
8
Enter Second Number:
9
Number after incriment:
17
*/