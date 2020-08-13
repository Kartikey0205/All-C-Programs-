//WAP to print factorial of a number using function
#include<stdio.h>
int fact(int);
int main(){
int num;
printf("Enter the number : \n");
scanf("%d",&num);
printf("The factorial of %d is %d ",num , fact(num));
return 0;
}
int fact(int x){
    int i , f=1;
    for ( i = x; i >= 1; i--)
    {
        f=f*i;
    }
    return(f);
}

/* OUTPUT:
Enter the number :
6
The factorial of 6 is 720
*/