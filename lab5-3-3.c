#include<stdio.h>
#include<string.h>
#define max 100
typedef struct
{
    char name[max],lname[max],faculty[max],city[max],year[max];

}person;
int main()
{
    person str1[5];
    int i ;
    printf("Enter Student Information\n\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter student's first name: ");
        scanf("%s", str1[i].name );
        //printf("\n");
        printf("Enter student's last name: ");
        scanf("%s", str1[i].lname );
        //printf("\n");
        printf("Enter student's faculty: ");
        scanf("%s", str1[i].faculty );
        //printf("\n");
        printf("Enter student's province of birth: ");
        scanf("%s", str1[i].city );
        //printf("\n");
        printf("Enter student's year of birth: ");
        scanf("%s", str1[i].year );
        printf("\n");
    
    }
    printf("\nStuent Information\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s", str1[i].name );
        printf(" %s\n", str1[i].lname );
        printf("faculty: %s\n", str1[i].faculty );
        printf("province of birth: %s\n", str1[i].city );
        printf("year of birth: %s\n\n", str1[i].year );
    }
    
    return 0;
}