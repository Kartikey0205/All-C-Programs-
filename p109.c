//WAP to read and display information about student using structure within structure
#include <stdio.h>

struct DOB
{
    int Date;
    int Month;
    int Year;
};
struct Student
{
    int Roll_no;
    char name[80];
    float fees;
    struct DOB dateofbirth;
};
int main()
{
struct Student Kartikey;
 printf("Enter the ROLL NO. : \n");
    scanf("%d", &Kartikey.Roll_no);
    printf("Enter the NAME : \n");
    scanf("%s", Kartikey.name);
    printf("Enter the FEES : \n");
    scanf("%f", &Kartikey.fees);
    printf("Enter the DOB : \n");
    scanf("%d%d%d", &Kartikey.dateofbirth.Date,&Kartikey.dateofbirth.Month,&Kartikey.dateofbirth.Year);

    printf("*********STUDENT DETAILS*********\n");
    printf("Roll Number = %d\n", Kartikey.Roll_no);
    printf("Name = %s\n", Kartikey.name);
    printf("Fees = %f\n", Kartikey.fees);
    printf("DOB = %d-%d-%d\n", Kartikey.dateofbirth.Date,Kartikey.dateofbirth.Month,Kartikey.dateofbirth.Year);


    return 0;
}

/* OUTPUT:
Enter the ROLL NO. :
015
Enter the NAME :
Kartikey
Enter the FEES :
144000
Enter the DOB :
02
02
2014
*********STUDENT DETAILS*********
Roll Number = 15
Name = Kartikey
Fees = 144000.000000
DOB = 2-2-2014
*/
