//WAP to reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
    char S[20], l;
    printf("Enter the string : \n");
    gets(S);
    strrev(S);
    printf("The Reverse  of string  is : \n %s", S);
    return 0;
}
/* OUTPUT:
Enter the string : 
Kartikey
The Reverse  of string  is : 
 yekitraK
*/