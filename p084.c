//WAP to find largest / smallest / second largest number in array
#include <stdio.h>
int main()
{
    int i, n, arr[20], pos, large, second_large;
    printf("\n Enter the number of elements in the array: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the number : ");
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    pos = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
    }
    second_large = arr[n - pos - 1];
    for (i = 0; i < n; i++)
    {
        if (i != pos)
        {
            if (arr[i] > second_large)
            {
                second_large = arr[i];
            }
        }
    }
    printf("\n The numbers you entered are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n  The largest of these numbers is:\n%d", large);
    printf("\n The second largest of these numbers is : \n%d", second_large);

    return 0;
}
/* OUTPUT:

 Enter the number of elements in the array: 
5

 Enter the number : 1

 Enter the number : 2

 Enter the number : 3

 Enter the number : 4

 Enter the number : 5

 The numbers you entered are : 
1 2 3 4 5 
  The largest of these numbers is:
5
 The second largest of these numbers is : 
4
*/