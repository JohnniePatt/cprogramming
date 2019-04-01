#include<stdio.h>
#include<string.h>
#define max 100
void strfunc(const char * str1,const char * str2);

int main()
{
    char firststring[max], secondstring[max];
    printf("Enter first string: ");
    scanf("%s",firststring);
    printf("Enter second string: "); 
    scanf("%s",secondstring);
    strfunc(firststring,secondstring);
    //printf("\"%s\" comes before \"%s\"",firststring,secondstring);
    //printf("test : %s",firststring);
    //printf("test : %s",secondstring);
    return 0;
}
void strfunc(const char * str1,const char * str2)
{
    int result;
    //printf("test join : %s\n",str1);
    result = strcmp(str1, str2);
    //printf("result : %d\n",result);
    if(result < 0)
    {
        printf("\"%s\" comes before \"%s\"",str1,str2);
    }
    else if(result == 0)
    {
        printf("\"%s\" is the same",str1);
    }
    else if(result > 0)
    {
        printf("\"%s\" comes after \"%s\"",str1,str2);
    }
}
