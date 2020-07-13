//WAP to find area & circumference of circle.

#include <stdio.h>

int main()
{
    int r;
    float area, circumference;
    printf("Enter the radius of a circle: %d\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area of a circle is : %f\n Circumference of a circle is: %f", area, circumference);

    return 0;
}

/* OUTPUT:
Enter the radius of a circle: 
5
Area of a circle is : 78.500000
 Circumference of a circle is: 31.400000
*/