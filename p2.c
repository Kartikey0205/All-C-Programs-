//  See the use of ( \n , \t, \b ,\\ ,\r)

// Kindly change the position of various escape sequences and see their effect
#include <stdio.h>
int main()
{

    // I am using \n in all for see the output clearly

    printf("My name is Kartikey Dubey\n");

    // (use of \n - for changing line)
    printf("My name is Kartikey \n Dubey\n");

    // (use of \t - for giving space b/w two  )
    printf("My name is Kartikey \t Dubey\n");

    // (use of \b - is used to take either one space or take one letter just before \b  )
    printf("My name is\b Kartikey Dubey\n");

    // (use of \\ - for giving one slash )
    printf("My name is Kartikey \\ Dubey\n");

    // (use of \r - rerite that word which is after \r and place it in the starting place , simply say overwrite the starting word {NOTE: \r counts spaces also as a place})
    printf("My name is Kartikey \r Dubey\n");

    return 0;
}

// OUTPUT:
/*
My name is Kartikey Dubey
My name is Kartikey 
 Dubey
My name is Kartikey      Dubey
My name i Kartikey Dubey
My name is Kartikey \ Dubey
 Dubeye is Kartikey 
*/
