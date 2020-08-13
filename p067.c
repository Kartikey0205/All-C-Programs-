//WAP to swap 2 numbers using Call By Reference
#include<stdio.h>
void swap(int* , int*);
int main() {
    int a, b;
    printf("Enter two number : \n");
    scanf("%d%d", &a, &b);
    printf("Before Swap \n");
    printf("The value of a and b are %d and %d respectively \n", a, b);
    swap(&a, &b);
    printf("After Swap \n");
    printf("The value of a and b are %d and %d respectively \n", a, b);

    return 0;
}

void swap(int* x, int* y) {
    int temp = *x;
    *x=*y;
    *y=temp;
   
}

/* OUTPUT:
Enter two number :
5
6
Before Swap 
The value of a and b are 5 and 6 respectively 
After Swap 
The value of a and b are 6 and 5 respectively 
*/