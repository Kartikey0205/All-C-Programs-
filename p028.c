// WAP to print 20 numbers one by one
#include <stdio.h>

int main()
{
    int i = 0, x;
    for (x = 0; x < 21; x++)
        printf("%d\n", x);

    while (i != 21)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}

/* OUTPUT : - of for loop
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
*/

/* OUTPUT : - of while loop
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/