// WAP to check whether a number is Even or Odd using enumerated data type
#include <stdio.h>
enum boolean
{
    false,
    true
};
enum boolean func_even(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};
int main()
{
    int num;
    enum boolean result;
    printf("Enter the number :\n");
    scanf("%d", &num);
    result = func_even(num);
    if (result == true)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}
/* OUTPUT:
Enter the number :
1029983
Odd Number
*/