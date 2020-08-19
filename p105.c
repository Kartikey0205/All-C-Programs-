//WAP to read and display value of an integer array allocating space dynamically for array using calloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    int *arr=NULL;
    printf("Enter a  number:\n");
    scanf("%d", &n);
    arr = (int *)calloc(n,sizeof(int));
    if (arr == NULL)
    {
        printf("\n Memory allocation Failed!!");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the value at %d index of array :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(arr+i));
    }
    free(arr);
        return 0;
}
/* OUTPUT:
Enter a  number:
5

 Enter the value at 0 index of array :
3

 Enter the value at 1 index of array :
4

 Enter the value at 2 index of array :

1

 Enter the value at 3 index of array :
9

 Enter the value at 4 index of array :
2
The array is :
3
4
1
9
2
*/