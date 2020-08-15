//WAP to copy one string into another
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "C Program";
    char copy[50];
    strcpy(copy, str1);
    printf("First string: %s\n", str1);
    printf("Copied string: %s\n", copy);
    return 0;
}
/* OUTPUT:
First string: C Program
Copied string: C Program
*/