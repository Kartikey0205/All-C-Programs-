// WAP to write Hello Student in file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i;
    FILE *fp; // y aise hi likhna pdega
    char s[100] = "Hello Student";
    fp = fopen("f1.txt", "w"); //syntax of fopen // w mode file bna dega aur usme y lik dega hello student
    if (fp==NULL)  
    {
        printf("File is not found");
        exit(1);
    }
    for ( i = 0; i < strlen(s) ; i++)
    {
        fputc(s[i],fp); //file m print ho jayega 
    }
    fclose(fp);

    return 0;
}