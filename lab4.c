#include<stdio.h>
int main()
{
    char gender;
    int thisyear, byear, weight, height, BMI, BMR;
    printf("Enter Gender (M/W): ");
    scanf(" %c", &gender);

    if (gender == 'M')
        printf("Enter current year: ");
        scanf(" %d",&thisyear);
        printf("Enter your birth year: ");
        scanf(" %d",&byear);
        printf("Enter your weight (kg): ");
        scanf(" %d",&weight);
        printf("Enter your height (cm): ");
        scanf(" %d",&height);
        printf("\n- - - - - -\n");
        thisyear = thisyear - byear;
        BMR = 66.5 + (13.75 * weight) + 
            (5.003 * height) - 
            (6.755 * thisyear);
        BMI = weight/((height/100)*(height/100));
        printf("Your age = %d\n",thisyear);
        printf("Your BMI = %d\n",BMI);
        printf("Your BMR = %d\n",BMR);
    
    if (gender == 'W')
    {
        printf("Enter current year: ");
        scanf(" %d",&thisyear);
        printf("\nEnter your birth year: ");   
        scanf(" %d",&byear);
        printf("\nEnter your weight (kg): ");
        scanf(" %d",&weight);
        printf("\nEnter your height (cm): ");
        scanf(" %d",&height);
        printf("\n- - - - - -\n");
        thisyear = thisyear - byear;
        BMR = BMR = 655.1 + (9.563 * weight) + 
            (1.850 * height) - 
            (4.676 * thisyear);
        BMI = weight/((height/100)*(height/100));
        printf("Your age = %d\n",thisyear);
        printf("Your BMI = %d\n",BMI);
        printf("Your BMR = %d\n",BMR);   

    }
    if (gender == 'X')
    {
        printf("%c is not M or W\n",gender);
    }
                
    return 0;
}


