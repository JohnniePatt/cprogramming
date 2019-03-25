#include<stdio.h>
#include<string.h>
void inputMatrix(int M[3][2]); 
int maxgg(int M[3][2]);
int mingg(int M[3][2]);
int main()
{
    int i, j, M[3][2],min ,max;
    inputMatrix(M);
    printf("\nMatrix\n");
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            printf("%d\t",M[i][j]);
            
        }    
        printf("\n");
    }
    min = mingg(M);
    max = maxgg(M);
    printf("\nMin = %d\n",min);
    printf("Max = %d\n",max);

    return 0;
}
void inputMatrix(int M[3][2])
{
    int i, j;
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            printf("M[%d][%d]: ",i+1, j+1);
            scanf("%d",&M[i][j]);
        }    
    }
}
int mingg(int M[3][2])
{
    int i,j,min = M[0][0];

    for(i = 0; i < 3 ; i++)
    {

        for(j = 0; j < 2 ; j++)
        {

            if(M[i][j] < min)
            {

                min = M[i][j];
            }
        }    
    }

    return min;

}
int maxgg(int M[3][2])
{
    int i,j,max = M[0][0];

    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 2 ; j++)
        {
            if(M[i][j] > max)
            {
                max = M[i][j];
            }
            
        }    
    }
    
    return max;
}