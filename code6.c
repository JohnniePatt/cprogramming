#include<stdio.h>
#include<string.h>
typedef struct{
    char name[61];
    char num[11];
    float gpa;
}student;

int main()
{
    student p[4];
    int i,j,age1 = 21;
    for(i = 0; i < 4 ; i++)
    {
        printf("Enter ID : ");
        scanf("%s",p[i].num);
        printf("Enter Name : ");
        scanf("%s",p[i].name);
        printf("Enter GPA : ");
        scanf("%f",&p[i].gpa);
    }
        
    
  
    for(i = 0; i < 4 ; i++)
    {
          printf("---------------------\n");
        printf("S T U D E N T %d    ->    ",i+1);
        printf("ID : %s   ",p[i].num);
        printf("Name : %s   ",p[i].name);
        printf("GPA : %.2f   \n",p[i].gpa);
    }
    return 0;
}
