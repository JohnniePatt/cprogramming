#include<stdio.h>
#include<math.h>
//void get_Fx(int x);
int nresultgg(int x,int y);
int main()
{
    int nbase,nhigh,nresult;
    printf("Enter width: ");
    scanf("%d",&nbase);
    printf("Enter height: ");
    scanf("%d",&nhigh);
    nresult  = nresultgg(nbase,nhigh);
    printf("Area of rectangle (%dx%d) is %d\n",nbase,nhigh,nresult);
    return 0;
}
int nresultgg(int x,int y)
{
    int nresult = x * y;
    return nresult;
}