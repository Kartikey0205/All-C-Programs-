//WAP to find largest of 3 numbers
#include<stdio.h>
int large(int, int, int);
int main() {
    int a, b, c;
    printf("Enter 3 numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("The largest number is : %d", large(a, b, c));
    return 0;
}
int large(int a, int b, int c) {
    int k1, k2, k;
    k1=((a>b)?a:b);
    k2=((b>c)?b:c);
    k=((k1>k2)?k1:k2);
    return k;
}

/* OUTPUT:
Enter 3 numbers :
40
8
95
The largest number is : 95
*/