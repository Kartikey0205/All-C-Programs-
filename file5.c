// WAP to write a file  using fputs() function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[10];
    FILE *fp;
    fp = fopen("f4.txt", "w"); // read mode m agr hoga toh file must present hona chaiye pehle se wrna error  aur kch aur likha hona chaiye
    if (fp == NULL)
    {
        printf("File is not found");
        exit(1);
    }
    printf("Enter your Name :\n");
    gets(str);
    fputs(str, fp);

    fclose(fp);
    return 0;
}