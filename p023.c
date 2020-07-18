// WAP to see the use of nested-if-else

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the Marks of Ram:\n");
    scanf("%d", &x);
    printf("Enter the Marks of Laksham:\n");
    scanf("%d", &y);
    printf("Enter the Marks of Sita:\n");
    scanf("%d", &z);
    if (x > y)
    {
        if (x > z)
        {
            printf("RAM has highest Marks");
        }
        else
        {
            printf("Sita has highest Marks");
        }
    }
    else
    {
        if (y > z)
        {
            printf("Laksham has highest Marks");
        }
        else
        {
            printf("Sita has highest Mraks");
        }
    }

    return 0;
}

/*OUTPUT:
Enter the Marks of Ram:
80
Enter the Marks of Laksham:
75
Enter the Marks of Sita:
85
Sita has highest Marks
*/