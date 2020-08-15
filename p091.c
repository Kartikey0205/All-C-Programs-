//WAP to compare 2 string

#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100], str2[100];
    printf("\n Enter first string : \n");
    gets(str1);
    printf("\n Enter second string : \n");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("Same Strings ");
    }
    else
    {
        printf("Different Strings ");
    }

    return 0;
}

/* OUTPUT 1:
 Enter first string :
Hello

 Enter second string :
Hello
Same Strings

*/
/*OUTPUT 2:
 Enter first string :
Hello

 Enter second string :
Kartikey
Different Strings
*/
