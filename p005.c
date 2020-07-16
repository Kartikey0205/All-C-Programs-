//WAP to find area by Heron's formula

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, S;
    float area;
    printf("Enter the three sides of a triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    S = (a + b + c) / 2;
    area = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("Area of a triangle is : %f\n", area);
    return 0;
}

/*OUTPUT:
Enter the three sides of a triangle:
3
4
5
Area of a triangle is : 6.000000

*/