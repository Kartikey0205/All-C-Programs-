// WAP to interchange largest and smallest number in an ARRAY
#include <stdio.h>
int main()
{
int i,n,A[100],temp,small,large,Sindex,Lindex;
printf("Enter the number :");
scanf("%d",&n);
printf("Enter the %d number :",n);

for ( i = 0; i < n; i++)
{
    scanf("%d",&A[i]);
}
small=A[0];
large=A[0];
Sindex=0;
Lindex=0;
for ( i = 0; i < n; i++)
{
    if (A[i]<small)
    {
        small=A[i];
        Sindex=i;
    }
    if (A[i]>large)
    {
        large=A[i];
        Lindex=i;
    }
    
}
temp=A[Lindex];
A[Lindex]=A[Sindex];
A[Sindex]=temp;
printf("\nThe new array is : ");
for ( i = 0; i < n; i++)
{
    printf("\n%d",A[i]);
}
    return 0;
}
/*OUTPUT:
Enter the number :6
Enter the 6 number :12
35
10
56
80
63

The new array is :
12
35
80
56
10
63
*/