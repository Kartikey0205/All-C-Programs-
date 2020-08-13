//WAP to find square of number

int sqr(int);
#include<stdio.h>
int main() {
    int n, S;
    printf("Enter the number : \n");
    scanf("%d", &n);
    S =sqr(n);
    printf("The Square of %d is %d ", n, S);
    return 0;
}

int sqr(int a) {
    return a*a;
}

/* OUTPUT:
Enter the number :
15
The Square of 15 is 225
*/