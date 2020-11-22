// WAP to read a file  using fgets() function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[10];
    FILE *fp;
    fp = fopen("f3.txt", "r"); // read mode m agr hoga toh file must present hona chaiye pehle se wrna error  aur kch aur likha hona chaiye
    if (fp == NULL)
    {
        printf("File is not found");
        exit(1);
    }
     
    while (fgets(str,9,fp)!=NULL)//end of file
    {
        printf("%s", str);
        
    }
    fclose(fp);
    return 0;
}