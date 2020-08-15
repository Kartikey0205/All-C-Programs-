// WAP to display program using strstr
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "Happy Birthday To You";
    char str2[50]= "day";
    char *ptr;
    ptr = strstr(str1, str2);
    if (ptr)
    {
        printf("\n Substring found ");
    }
    else
    {
        printf("\n Substring not found i");
    }

    return 0;
}
/* OUTPUT:
Substring found
*/