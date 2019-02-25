#include<stdio.h>
int main()
{
    //{{1, 2, 3, 4, 5},
     //                       {1, 2, 3, 4, 5},
      //                      {1, 2, 3, 4, 5}};
    int i, j,scores[3][5] ;
    float sum1,sum2,sum3,avg;
    printf("Enter number of scores 3x5");
    for(i = 0, j = 0,sum1 = 0.0; j < 5; j++)
    {
        scanf("%d",&scores[i][j]);
        sum1 = sum1 + scores[i][j];
    }
    for(i = 1,j = 0,sum2 = 0.0; j < 5; j++)
    {
        scanf("%d",&scores[i][j]);
        sum2 = sum2 + scores[i][j];
    }
    for(i = 2,j = 0,sum3 = 0.0; j < 5; j++)
    {
        scanf("%d",&scores[i][j]);
        sum3= sum3 + scores[i][j];
    }
    printf("\nSum of row 1 = %.2f\n",sum1);
    printf("Sum of row 2 = %.2f\n",sum2);
    printf("Sum of row 3 = %.2f\n",sum3);
    avg = ((sum1 / 5) + (sum2 / 5) +(sum3 / 5))/3;
    printf("Average of scores %.2f\n",avg);
}
