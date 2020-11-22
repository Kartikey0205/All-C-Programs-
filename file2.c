// WAP to take string from user and print it in file  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i;
    FILE *fp; // y aise hi likhna pdega
    char s[100];
    fp = fopen("f2.txt", "w"); //syntax of fopen
    if (fp==NULL)  
    {
        printf("File is not found");
        exit(1);
    }
    printf("Enter the string:\n");
    gets(s);
    for ( i = 0; i < strlen(s) ; i++)
    {
        fputc(s[i],fp); //file m print ho jayega 
    }
    fclose(fp);

    return 0;
}