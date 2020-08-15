//WAP to sort an aray
#include <stdio.h>
int main()
{
int A[100] , n, i, j,temp;
printf("Enter the numbder : \n");
scanf("%d",&n);
printf("Enter %d numbers:\n",n);
for ( i = 0; i < n; i++)
{
    scanf("%d",&A[i]);
}
for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n; j++)
    {
        if (A[i]>A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        
    }
    
}
printf("The new Array after sorting is :\n");
for ( i = 0; i < n; i++)
{
    printf("%d\n",A[i]);
}

    return 0;
}
/*OUTPUT:
Enter the numbder :
5
Enter 5 numbers:
67
23
89
13
6
The new Array after sorting is :
89
67
23
13
6
*/