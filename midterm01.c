#include<stdio.h>
#define R 3//row
#define C 10//column
int main()
{
    int loop = 1, i, j;
    int park[R][C] = {0};
    int free[R] = {C, C, C};
    int x, y;
    char sym;
    char code[R] = {'E', 'E', 'E'};
    do{
        for(i = 0; i < R; i++)
        {
            printf("R%d : ",i+1);
            for(j = 0; j < C; j++)
            {
                if(park[i][j]){
                    printf("X");
                }
                else{
                    printf("-");
                }
            }
        printf("   : %c", code[i]);
        printf("\n");
        }
        printf("PARD AT :");
        scanf("%d %d %c", &x,&y,&sym);
        if(sym == '+'){
            park[x-1][y-1] = 1;
        }
        else if(sym == '-'){
            park[x-1][y-1] = 0;
        }
        else break;
        for(i = 0; i < R; i++)
            free[i] = C;

            for(i = 0; i < R; i++)
            {
                for(j = 0; j < C; j++)
                {
                    if(park[i][j] == 1){
                        free[i] -= 1;
                        //printf("%d",free[i]);
                    }
                }
            }
        for(i = 0; i < R; i++)
        {
            if(free[i] == C)
            {
                code[i] = 'E';
            }
            else if(free[i] != 0)
                code[i] ='A';
            else    
                code[i] = 'F';
        }
    }while(loop);
    return 0;
}
