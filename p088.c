//WAP to display a string using printf()
#include <stdio.h>
#include<string.h>

int main()
{
char S[20]={'K','A','R','T','I','K','E','Y','\0'};
int i;
printf("The string is : \n");
for ( i = 0; i <= 7; i++)
{
    printf("%c",S[i]);
}
 return 0;
}

/* OUTPUT:
The string is :
KARTIKEY 
*/
