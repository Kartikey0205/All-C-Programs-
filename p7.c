//WAP to convert degree celsius to farenheit

#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter the value of degree celsius :%f\n", c);
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("After conversion the value in farenheit is :%f\n", f);
    return 0;
}

/*OUTPUT:
Enter the value of degree celsius :
35
After conversion the value in farenheit is :95.000000


*/