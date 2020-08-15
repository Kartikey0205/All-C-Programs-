//WAP to merge 2 unsorted array
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[100], n1, n2, temp, i, m, index = 0;
    printf("Enter the number of element in array 1:\n");
    scanf("%d", &n1);
    printf("Enter the elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of element in array 2:\n");
    scanf("%d", &n2);
    printf("Enter the elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    m = n1 + n2;
    for (i = 0; i < n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for (i = 0; i < n2; i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    printf("\n\n The cotents of the merged array are:\n ");
    for (i = 0; i < m; i++)
    {
        printf("\n Arr[%d]=%d", i, arr3[i]);
    }
    return 0;
}
/* OUTPUT:
Enter the number of element in array 1:
4
Enter the elements of first array:
10
20
30
40
Enter the number of element in array 2:
4
Enter the elements of second array:
5
15
25
35


 The cotents of the merged array are:
 
 Arr[0]=10
 Arr[1]=20
 Arr[2]=30
 Arr[3]=40
 Arr[4]=5
 Arr[5]=15
 Arr[6]=25
 Arr[7]=35
*/