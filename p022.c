// WAP to find a bigger in 2 no. by if-else

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 number:\n");
    scanf("%d%d",&a,&b);
    
    if (a>b)
    {
        printf("A is greater");
    }
    else
    {   
        printf("B is greater");
    }
    
    return 0;
}

/* OUTPUT:
Enter 2 number:
43
20
A is greater
*/