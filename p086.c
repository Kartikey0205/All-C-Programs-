//WAP to print matrix for addition / subtraction / multiplication / transpose
#include <stdio.h>
int main()
{
  int A[100][100], B[100][100], SUM[100][100], SUB[100][100], MUL[100][100] , i, j;
  printf("Enter the values of first array :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }
  printf("The first Array is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("Enter the values of second array :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }
  printf("The second Array is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
  printf("SUM OF A[i][j] and B[i][j] is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      SUM[i][j] = A[i][j] + B[i][j];
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", SUM[i][j]);
    }
    printf("\n");
  }
  printf("SUBTRACTION OF A[i][j] and B[i][j] is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      SUB[i][j] = A[i][j] - B[i][j];
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", SUB[i][j]);
    }
    printf("\n");
  }
  
  printf("MULTIPLICATION OF A[i][j] and B[i][j] is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      MUL[100][100]=0; 
      for (int k = 0; k < 3; k++)
      {
        
      MUL[i][j] = MUL[i][j] + (A[i][j] * B[i][j]);
      }
      
    }
    // printf("\n");
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", MUL[i][j]);
    }
    printf("\n");
  }
  printf("TRANSPOSE OF A[i][j] is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      B[i][j] = A[j][i];
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
  return 0;
}
/* OUTPUT:
Enter the values of first array :
1
2
3 
4
5
6
7
8
9
The first Array is :
1 2 3
4 5 6
7 8 9
Enter the values of second array :
9
8
7
6
5
4
3
2
1
The second Array is :
9 8 7
6 5 4
3 2 1
SUM OF A[i][j] and B[i][j] is :



10 10 10
10 10 10
10 10 10
SUBTRACTION OF A[i][j] and B[i][j] is :



-8 -6 -4
-2 0 2
4 6 8
MULTIPLICATION OF A[i][j] and B[i][j] is :
27 48 63
72 75 72
63 48 27
TRANSPOSE OF A[i][j] is :



1 4 7
2 5 8
3 6 9
*/