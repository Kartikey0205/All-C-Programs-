// WAP to conversion of kms to miles , inches to foot , cms to inches , pounds to kgs , inches to meter
#include<stdio.h>
#include <stdlib.h> // for exit function
int main() {
    char input;
    float km_to_miles =0.621371;
    float inches_to_foot =0.0833333;
    float cms_to_inches = 0.393701;
    float pounds_to_kg =0.453592;
    float inches_to_meter =0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character for conversion of : \n 1-km to miles \n 2- inches to foot \n 3- cms to miles \n 4- pounds to kg \n 5- inches to meter \n 6- Exit\n");

        scanf("%d", &input);
        switch (input) {
        case 1:
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * km_to_miles;
            printf("%.2f Kms is equal to %.2f Miles\n", first, second);
            break;

        case 2:
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inches_to_foot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            break;

        case 3:
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cms_to_inches;
            printf("%f Cms is equal to %f Inches\n", first, second);
            break;

        case 4:
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * pounds_to_kg;
            printf("%f Pounds is equal to Kgs %f \n", first, second);
            break;

        case 5:
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inches_to_meter;
            printf("%f inches is equal to %f meters \n", first, second);
            break;
        case 6:
            printf("Qyuiting the program \n");
            exit(0);
            break;

        default:
            printf("You have not input the correct character !!\n Try Again! \n");
            break;
        }
    }


    return 0;
}
/* OUTPUT:
Enter the input character for conversion of :
 1-km to miles
 2- inches to foot
 3- cms to miles
 4- pounds to kg
 5- inches to meter
 6- Exit
1
Enter quantity in terms of first unit
2
2.00 Kms is equal to 1.24 Miles
Enter the input character for conversion of :
 1-km to miles
 2- inches to foot
 3- cms to miles
 4- pounds to kg
 5- inches to meter
 6- Exit
4
Enter quantity in terms of first unit
7
7.000000 Pounds is equal to Kgs 3.175144
Enter the input character for conversion of :
 1-km to miles
 2- inches to foot
 3- cms to miles
 4- pounds to kg
 5- inches to meter
 6- Exit
6
Qyuiting the program
*/