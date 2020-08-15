//WAP to concatenate two string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], str3[100], i = 0, j = 0;
    printf("\n Enter first string : \n");
    gets(str1);
    printf("\n Enter second string : \n");
    gets(str2);
    strcat(str1, str2);
    printf("The concatenated string is %s", str1);
    //without using strcat()
    // while (str1[i] != '\0')
    // {
    //     str3[j] = str1[i];
    //     i++;
    //     j++;
    // }
    // i = 0;
    // while (str2[i] != '\0')
    // {
    //     str3[j] = str2[i];
    //     i++;
    //     j++;
    // }
    // str3[j] = '\0';
    // printf("\n The concatenated string is :");
    // puts(str3);
    return 0;
}
/* OUTPUT:
 Enter first string :
Hello

 Enter second string :
Kartikey
The concatenated string is Hello Kartikey
*/

/* OUTPUT:
 Enter first string : 
Hello

 Enter second string : 
Kartikey

 The concatenated string is :HelloKartikey
*/