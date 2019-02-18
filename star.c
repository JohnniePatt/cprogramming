#include<stdio.h>
int main()
{
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d",&i);
    for(i>=1; i--;)
    {
        for(j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}