#include<stdio.h>
#include<string.h>
int main()
{
    char word[7], numword;
    printf("Enter a word: ");
    scanf(" %s", &word);
    printf("New string = ");
    numword = strlen(word);
    //printf("%d",numword);
    for(int i = 0; i < numword;i++)
    {
        //printf("%c",word[i]);
        //printf("%d",word[i]);
        if(word[i] >= 97)
        {
            word[i] -= 32;
        }
        printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}
    