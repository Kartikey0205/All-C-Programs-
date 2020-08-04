//WAP to demonstrate use of switch case without break
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age;
    printf("Enter the age : \n");
    scanf("%d", &age);
switch (age)
{
case 18:
    printf("You are eligible to vote \n");
    //break; // Here we remove break becouse we have to see what output comes if we remove break statement
case 2:
printf("You are Kid now \n");
  //break; // Here we remove break becouse we have to see what output comes if we remove break statement
  case 10:
  printf("You can only vote as a dummy vote for practice \n");
  //break; // Here we remove break becouse we have to see what output comes if we remove break statement
  
default:
printf("You have not valid proof for your age \n");
   //break; // Here we remove break becouse we have to see what output comes if we remove break statement 
}      
    
    return 0;
}
// so if you not apply break then all will print 
/* OUTPUT:
Enter the age : 
18
You are eligible to vote
You are Kid now
You can only vote as a dummy vote for practice
You have not valid proof for your age
*/