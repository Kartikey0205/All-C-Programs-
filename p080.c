//WAP to reverse an array
#include <stdio.h>
void arrayreverse(int arr[]){
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,67,5,8};
    printf("Before reversal the array is :\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of array at index %d is %d\n",i,arr[i]);
    }
    arrayreverse(arr);
    printf("After reversal the array is :\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of array at index %d is %d\n",i,arr[i]);
    }
    return 0;
}
/*OUTPUT:
Before reversal the array is :
The value of array at index 0 is 1
The value of array at index 1 is 2
The value of array at index 2 is 3
The value of array at index 3 is 4
The value of array at index 4 is 67
The value of array at index 5 is 5
The value of array at index 6 is 8
After reversal the array is :
The value of array at index 0 is 8
The value of array at index 1 is 5
The value of array at index 2 is 67
The value of array at index 3 is 4
The value of array at index 4 is 3
The value of array at index 5 is 2
The value of array at index 6 is 1
*/