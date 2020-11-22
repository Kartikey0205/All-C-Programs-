//WAP how to read a data from a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("f3.txt", "r"); // read mode m agr hoga toh file must present hona chaiye pehle se wrna error  aur kch aur likha hona chaiye
    if (fp == NULL)
    {
        printf("File is not found");
        exit(1);
    }
    ch = fgetc(fp); //pehla charcter read krega y 
    while (!feof(fp))//end of file
    {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
    return 0;
}