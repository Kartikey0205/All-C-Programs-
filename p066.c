//WAP to swap 2 numbers using Call By Value
#include<stdio.h>
void swap(int, int); // Take something returns nothing
void main() {
    int a, b;
    printf("Enter two number : \n");
    scanf("%d%d", &a, &b);
    printf("Before Swap \n");
    printf("The value of a and b are %d and %d respectively \n", a, b);
    swap(a, b);
  
}

void swap(int x, int y) {
    int temp = x;
    x=y;
    y=temp;
     printf("After Swap \n");
    printf("The value of a and b are %d and %d respectively \n", x, y);
}

/* OUTPUT:
Enter two number : 
44
97
Before Swap 
The value of a and b are 44 and 97 respectively 
After Swap 
The value of a and b are 97 and 44 respectively
*/