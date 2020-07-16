// WAP to find average of 5 numbers
#include <stdio.h>
int main()
{
    /* you can also do like this 
    int a=5,b=6,c=7,d=8,e=9;
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("Average of Five number:\n %f",avg);
    return 0;
    */

    int a, b, c, d, e;
    float avg;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("Average of Five number:\n %f", avg);

    return 0;
}

/*OUTPUT:
Enter five numbers:
5
6
7
8
9
Average of Five number:
 7.000000
*/