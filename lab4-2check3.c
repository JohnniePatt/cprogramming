#include<stdio.h>
int main()
{
  int nrowA,ncolumnA,nrowB,ncolumnB, i, j,k,l;
  long arrayA[10][10],arrayB[10][10] ,arC[10][10];
  printf("Matrix A\n");
  printf("Number of rows = ");
  scanf("%d", &nrowA);
  printf("Number of columns = ");
  scanf("%d", &ncolumnA);
  for(i = 0 ; i < nrowA; i++)
  {
    for(j = 0; j < ncolumnA; j++)
    {
      printf("Matrix A (%d,%d) = ",i+1,j+1);
      scanf("%ld",&arrayA[i][j]);
    }
  }

  for(i = 0 ; i < nrowA; i++)
  {
    for(j = 0; j < ncolumnA; j++)
    {
      printf("%5ld",arrayA[i][j]);
    }
    printf("\n");
  }

  printf("\nMatrix B\n");
  printf("Number of rows = ");
  scanf("%d", &nrowB);
  printf("Number of columns = ");
  scanf("%d", &ncolumnB);
  for(i = 0 ; i < nrowB; i++)
  {
    for(j = 0; j < ncolumnB; j++)
    {
      //printf("Matrix A %d = ",arrayA[i][j]);
      //printf("Matrix B %d = ",arrayB[i][j]);
      printf("Matrix B (%d,%d) = ",i+1,j+1);
      scanf("%5ld",&arrayB[i][j]);
      //printf("Matrix A %d = ",arrayA[i][j]);
    }
  }

  for(i = 0 ; i < nrowB; i++)
  {
    for(j = 0; j < ncolumnB; j++)
    {
      printf("%5ld",arrayB[i][j]);
    }
    printf("\n");
  }

  printf("Matrix C = A * B\n");
  for(i = 0 ; i < nrowA; i++)
  {
    for(j = 0; j < ncolumnB; j++)
    {
      //printf("A %d\n", arA[i][j]);
      //printf("B %d\n", arB[i][j]);
      printf("%5ld",arC[i][j] = (arrayA[i][0] * arrayB[0][j]) + (arrayA[i][1] * arrayB[1][j]));
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
