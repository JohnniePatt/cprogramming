#include<stdio.h>
int main()
{
    int i, j, k, num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    for(i = 0;i<=num; i++)
    {
        for(k = 0; k <= i ; k++)
        {
            printf(" ");
           //printf("k =%d",k);
        }
        for(j = i; j <= num ; j++)
            {   
                printf("*");  
            }
        printf("\n");  
    }

}