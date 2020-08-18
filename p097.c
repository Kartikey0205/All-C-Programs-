// WAP to calculate area of a traingle using function and pointers
#include <stdio.h>
void area(float* , float*  );
int main()
{
    float b, h, a;
    printf("Enter the base of triangle:\n");
    scanf("%f", &b);
    printf("Enter the height of triangle:\n");
    scanf("%f", &h);
    area(&b,&h);
    return 0;
}
void area(float *base, float *height)
{
    float A;
    A = 0.5 * (*base) * (*height);
    printf("Area of Triangle is :\n %.2f", A);
    
}
/* OUTPUT:
Enter the base of triangle:
10
Enter the height of triangle:
5
Area of Triangle is :
 25.00
*/