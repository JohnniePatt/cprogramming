#include<stdio.h>
#include<string.h>
struct student{
    char stdcode, name;
    float gpa ;
}
void showStudent( struct student st);
struct student setStatus(struct student st); 

int main()
{
    struct student st;
    int i;
    for(i = 0; i < 5)
    {
        printf("gpa %d",i);
        scanf("%s",st.gpa);
    }
    
    return 0;
}
void showStudent( struct student st){
    
}
struct student setStatus(struct student st){
    if(st.gpa >= 3.50)
    {
         printf("good");
    }
    else if(st.gpa >= 2.00 && gpa < 3.50)
    {
        printf("well done");
    }
    else if(st.gpa >= 1.50 && gpa < 2.00)
    {
        printf("well");
    }
    else if(st.gpa < 1.50)
    {
        printf("bad");
    }
}
