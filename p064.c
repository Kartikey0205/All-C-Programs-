//WAP to print area of triangle
#include<stdio.h>
#include<math.h>
int area(int b, int h) {

    return (b*h)/2;
}

int main() {
    int b, h;
    printf("Enter the base of traingle:\n");
    scanf("%d", &b);
    printf("Enter the height of traingle:\n");
    scanf("%d", &h);
    printf("Area of a Traingle  is  : %d ", area(b, h));

    return 0;
}

/* OUTPUT:
Enter the base of traingle:
16
Enter the height of traingle:
10
Area of a Traingle  is  : 80
*/