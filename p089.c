//WAP to find length of a string
#include <stdio.h>
#include <string.h>
int main()
{
    char S[20], l;
    printf("Enter your name : \n");
    gets(S);
    l = strlen(S);
    printf("The length of %s is : %d ", S, l);
    return 0;
}
/* OUTPUT:
Enter your name : 
Kartikey
The length of Kartikey is : 8 
*/