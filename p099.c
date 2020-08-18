//WAP to print program using void pointer
#include <stdio.h>
int main()
{
    void* p;
    char c = 'c';
    int a = 5;
    p = &a;
    printf("When void pointer p holds the address of a then the value of p is : %d\n ", *(int* )p);
    p = &c;
    printf("When void pointer p holds the address of c then the value of p is : %c\n ", *(char* )p);

    return 0;
}
/* OUTPUT:
When void pointer p holds the address of a then the value of p is : 5
 When void pointer p holds the address of c then the value of p is : c
*/