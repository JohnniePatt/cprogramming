#include<stdio.h>
int main()
{
    int i = 7 , count, ans = i;
    for(count = 1; count <= 5;count++)
    {
        printf("%d ", count);
        printf("%d ",ans);
        printf("\n");
        ans = i * (count + 1);
    }
    return 0;
}