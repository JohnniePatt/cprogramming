#include<stdio.h>
int main()
{
    
    int dido[5], ndido=0;
    float avg,nfifa = 0,fifa[3] = {4.5, 10.5, 20.5};
    printf("Enter 5 integer for dido: ");
    for(int x = 0; x <=4 ;x++)
    {
        //printf("%d",x);
        scanf("%d",&dido[x]);
        ndido += dido[x];
    }
    printf("Number in fifa is");
    for(int x = 0; x <=2 ;x++)
    {
        //printf("%d",x);
        printf(" %.4f",fifa[x]); 
    }
    printf("\nNumber in dido is");
    for(int x = 0; x <=4 ;x++)
    {
        //printf("%d",x);
        printf(" %d",dido[x]); 
    }
    printf("\nEnter 3 floating point for fifa: ");
    for(int x = 0; x <=2 ;x++)
    {
        //printf("%d",x);
        scanf("%f",&fifa[x]);
        nfifa += fifa[x];
        
    }
    printf("Number in fifa is");
    for(int x = 0; x <=2 ;x++)
    {
        //printf("%d",x);
        printf(" %.4f",fifa[x]); 
    }
    printf("\nNumber in dido is");
    for(int x = 0; x <=4 ;x++)
    {
        //printf("%d",x);
        printf(" %d",dido[x]); 
    }
    

    //printf("%d %f",ndido,nfifa);
    avg = ((float)ndido + nfifa)/ 8;


    printf("\nAverage number is %.4f",avg);
     
    return 0;
}
