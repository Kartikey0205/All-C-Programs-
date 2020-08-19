//WAP to read and display value of an integer array allocating space dynamically for array using malloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    int *arr;
    printf("Enter a  number:\n");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
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
        printf("%d\n", *(arr + i));
    }
    free(arr);
    return 0;
}

/* OUTPUT:
Enter a  number:
3

 Enter the value at 0 index of array :
10

 Enter the value at 1 index of array :
5

 Enter the value at 2 index of array :
7
The array is :
10
5
7
*/