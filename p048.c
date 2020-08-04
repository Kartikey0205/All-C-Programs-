//WAP to give a 5 chance to play a match to win (switch case)
// Remember --> entering negative value will remains you in this game 
#include <stdio.h>
int main()
{
    int i = 1, x;
    while (i <= 5)
    {
        printf("Enter a number : \n");
        scanf("%d", &x);
        if (x > 0)
            break;
            i++;
    }
    (i == 6) ? printf("Game end Normally and you win the Match") : printf("Apllied Break and you lost the Match");

    return 0;
}

/* OUTPUT:
if you enter only negative then the output will be
Enter a number : 
-4
Enter a number : 
-3
Enter a number : 
-6
Enter a number : 
-7
Enter a number : 
-2
Game end Normally and you win the Match


but if you enterv positive number then 
Enter a number : 
5
Apllied Break and you lost the Match
*/