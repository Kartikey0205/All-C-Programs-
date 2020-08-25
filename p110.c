// WAP to display name of colors using enumerated data type
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
enum COLORS
{
    Red,
    Orange,
    Yellow,
    Green,
    Blue,
    Indigo,
    Violet
};
int main()
{
    enum COLORS Rainbow;
    srand(time(0));
    Rainbow = rand() % 7 ;
    switch (Rainbow)
    {
    case Red:
        printf("Color of Rainbow is RED");
        break;
    case Orange:
        printf("Color of Rainbow is ORANGE");
        break;
    case Yellow:
        printf("Color of Rainbow is YELLOW");
        break;
    case Green:
        printf("Color of Rainbow is GREEN");
        break;
    case Blue:
        printf("Color of Rainbow is BLUE");
        break;
    case Indigo:
        printf("Color of Rainbow is INDIGO");
        break;
    case Violet:
        printf("Color of Rainbow is VIOLET");
        break;
    default:
        printf("Not a Color of Rainbow ");

        break;
    }
    return 0;
}
// Run again and again you will get diffrent colour

/* OUTPUT:
Color of Rainbow is GREEN
*/