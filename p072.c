//WAP to print factorial of a number using recursion
#include<stdio.h>
int fact(int);
int main(){
int n;
printf("Enter a number : \n");
scanf("%d",&n);
printf("Factorial of %d is %d ",n, fact(n) ); 
return 0;
}
int fact(int a){
    if (a<=1)
    {
        return 1;
    }
    else
    {
        return a * fact(a-1);
    }
    
}

/* OUTPUT:
Enter a number : 
5
Factorial of 5 is 120 
*/