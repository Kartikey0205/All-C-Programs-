//WAP using Structure to read and display information about student
#include <stdio.h>
struct student
{
    int roll_no;
    char name[80];
    float fees;
    char DOB[80];
};

int main()
{
    struct student s1;
    printf("Enter the ROLL NO. : \n");
    scanf("%d", &s1.roll_no);
    printf("Enter the NAME : \n");
    scanf("%s", s1.name);
    printf("Enter the FEES : \n");
    scanf("%f", &s1.fees);
    printf("Enter the DOB : \n");
    scanf("%s", s1.DOB);

    printf("*********STUDENT DETAILS*********\n");
    printf("Roll Number = %d\n", s1.roll_no);
    printf("Name = %s\n", s1.name);
    printf("Fees = %f\n", s1.fees);
    printf("DOB = %s\n", s1.DOB);

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
02-02-2014
*********STUDENT DETAILS*********
Roll Number = 15
Name = Kartikey
Fees = 144000.000000
DOB = 02-02-2014
*/