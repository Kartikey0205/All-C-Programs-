// WAP to enter a number from 1-7 and display corresponding day of week using switch case
#include<stdio.h>
int main(){
int num ;
printf("Enter the number in between 1to 7 :\n");
scanf("%d",&num);
switch (num)
{
case 1:
    printf("According to your number the day will be :\n");
    printf("Monday");
    break;
    
    case 2:
    printf("According to your number the day will be :\n");
    printf("Tuesday");
    break;
    case 3:
    printf("According to your number the day will be :\n");
    printf("Wednesday");
    break;
    case 4:
    printf("According to your number the day will be :\n");
    printf("Thursday");
    break;

    case 5:
    printf("According to your number the day will be :\n");
    printf("Friday");
    break;
    case 6:
    printf("According to your number the day will be :\n");
    printf("Saturday");
    break;

    case 7:
    printf("According to your number the day will be :\n");
    printf("Sunday");
    break;

default: 
printf("You have not entered number in between 1 to 7 ");
    break;
}
return 0;
}

/* OUTPUT:
Enter the number in between 1to 7 :
3
According to your number the day will be :
Wednesday
*/