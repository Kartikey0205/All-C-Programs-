//WAP to display program using strchar
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Programming in C";
    char *pos;
    pos= strchr(str1, 'n');
    if (pos)
    {
        printf("\n  n is found in str at position %x ",pos);
    }
    else
    {
        printf("\n  n is not found in string");
    }

    return 0;
}
/* OUTPUT:
  n is found in str at position 61fef3
*/