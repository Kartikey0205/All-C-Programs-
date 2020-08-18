//WAP to print double pointer
#include<stdio.h>
int main(){
int a=5;
int *p1=&a;
int **p2=&p1;
printf("Value of a is %d\n",a);
printf("Value of *p1 is %d\n",*p1);
printf("Value of **p2 is %d\n",**p2);
printf("p2 holds address of p1 and its value is %u\n",*p2);
printf("p1 holds address of a and its value is %u\n",p1);
printf("Address of a is %u\n",&a);
return 0;
}
/* OUTPUT:
Value of a is 5
Value of *p1 is 5
Value of **p2 is 5
p2 holds address of p1 and its value is 6422296
p1 holds address of a and its value is 6422296
Address of a is 6422296
*/