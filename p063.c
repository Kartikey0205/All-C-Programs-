//WAP to add 2 integer using function.
#include<stdio.h>
int sum (int ,int);
int main() {
    int a, b;
    printf("Enter 2 numbers :\n");
    scanf("%d%d", &a, &b);
    printf("Sum of %d and %d are %d ",a,b,sum(a,b));
    return 0;
    
}

int sum(int x, int y){
    return x+y;
}

/* OUTPUT:
Enter 2 numbers :
3
4
Sum of 3 and 4 are 7 
*/