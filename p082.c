//WAP to merge 2 sorted array
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[100], n1, n2, temp, i, m, index = 0, index_first = 0, index_second = 0;
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
    while (index_first < n1 && index_second < n2)
    {
        if (arr1[index_first] < arr2[index_second])
        {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else
        {
            arr3[index] = arr2[index_second];
            index_second++;
        }
        index++;
    }
    /* IF the elements of the first array are over and the second array has some elements 
    */
    if (index_first == n1)
    {
        while (index_second < n2)
        {
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }
    /* IF the elements of the second array are over and the first array has some elements 
    */
    else if (index_second == n2)
    {
        while (index_first < n1)
        {
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }
    printf("\n\n The contents of the merged array are:\n ");

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


 The contents of the merged array are:

 Arr[0]=5
 Arr[1]=10
 Arr[2]=15
 Arr[3]=20
 Arr[4]=25
 Arr[5]=30
 Arr[6]=35
 Arr[7]=40
*/