//WAP to add / sub / multiply / divide 2 numbers using pointers
#include<stdio.h>
int main(){
int a=5,b=10,c=0,*pa,*pb,*pc;
pa=&a,pb=&b,pc=&c;
*pc=(*pa)+(*pb);
printf("Sum is %d\n",*pc);
*pc=(*pa)-(*pb);
printf("Subtraction is %d\n",*pc);
*pc=(*pa)*(*pb);
printf("Multiplication is %d\n",*pc);
*pc=(*pa)/(*pb);
printf("Divide is %d\n",*pc);

return 0;
}
/* OUTPUT:
Sum is 15
Subtraction is -5
Multiplication is 50
Divide is 0
*/