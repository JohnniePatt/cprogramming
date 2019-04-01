#include<stdio.h>
#include<string.h>
#define max 100
void replaceStr(char * str1,char findit ,char ch2);

int main()
{
    int i,j = 0,x;
    char findit,findit2,nreplace;
    char firststring[max], secondstring[max];
    printf("Enter a string: ");
    scanf("%[^\n]s",firststring);
    printf("str1=\"%s \" length=%d",firststring,strlen(firststring)); 
    printf("\nEnter a character to find: ");
    scanf(" %c",&findit);
    for(i = 0 ; i < strlen(firststring); i++)
    {
       //printf("it : %d\n",str1[i]);
        if(firststring[i] == findit)
        {
            j++;
            //printf("J : %d\n",j);
        }
    }
    printf("%c is found %d times.\n",findit,j);
    ////////////////////////////////////////
    printf("Enter a character to find: ");
    scanf(" %c",&findit2);
    printf("Enter a character to replace: ");
    scanf(" %c",&nreplace);
    replaceStr(firststring,findit,nreplace);
    //printf("\"%s\" comes before \"%s\"",firststring,secondstring);
    //printf("test : %s",firststring);
    //printf("test : %s",secondstring);
    return 0;
}
void replaceStr(char * str1,char findit ,char ch2)
{
    int i,j=0;
    for(i = 0 ; i < strlen(str1); i++)
    {
       //printf("it : %d\n",str1[i]);
        if(str1[i] == findit)
        {
            str1[i] = ch2;
            //printf("J : %d\n",j);
        }
    }
    printf("str1=\"%s\"\n",str1);

}
