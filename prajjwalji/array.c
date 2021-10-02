//WAP to delete a no. from array

#include <stdio.h>

int main()
{
    int array[100], pos, c, n;
    printf("No. of elements\t");
    scanf("%d", &n);
    printf("Enter %d elements\t",n);
    for(c=0;c<n;c++)
    scanf("%d", &array[c]);
    printf("Enter location\t");
    scanf("%d", &pos);
    if(pos>=n+1)    
    {
        printf("Not possible.\n");
    }
    else
    {    
        for(c=pos-1;c<n-1;c++) 
        array[c] = array[c+1];        
        
        printf("Required array is\n");
        
        for(c=0;c<n-1;c++)        
        printf("%d\n",array[c]);        
    }    
    return 0;
}

