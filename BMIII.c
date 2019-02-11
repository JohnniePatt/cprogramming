#include<stdio.h>
int main()
{
    char gender;
    int thisyear, byear;
    float weight, height, BMI, BMR;
    printf("Enter Gender (M/W): ");
    scanf("%c", &gender);
    switch (gender)
    {
        case 'M' :
                    printf("Enter current year: ");
                    scanf("%d",&thisyear);
                    printf("Enter your birth year: ");
                    scanf("%d",&byear);
                    printf("Enter your weight (kg): ");
                    scanf("%f",&weight);
                    printf("Enter your height( cm): ");
                    scanf("%f",&height);
                    printf("- - - - - -\n");
                    thisyear = thisyear - byear;
                    BMR = 66.5 + (13.75 * weight) + 
                        (5.003 * height) - 
                        (6.755 * thisyear);
                    BMI = weight/((height/100)*(height/100));
                    printf("Your age = %d\n",thisyear);
                    printf("Your BMI = %.3f\n",BMI);
                    printf("Your BMR = %.3f\n",BMR);
                    break;
         case 'W':
                printf("Enter current year: ");
                scanf("%d",&thisyear);
                printf("Enter your birth year: ");   
                scanf("%d",&byear);
                printf("Enter your weight (kg): ");
                scanf("%f",&weight);
                printf("Enter your height( cm): ");
                scanf("%f",&height);
                printf("- - - - - -\n");
                thisyear = thisyear - byear;
                BMR = BMR = 655.1 + (9.563 * weight) + 
                    (1.850 * height) - 
                    (4.676 * thisyear);
                BMI = weight/((height/100)*(height/100));
                printf("Your age = %d\n",thisyear);
                printf("Your BMI = %.3f\n",BMI);
                printf("Your BMR = %.3f\n",BMR);   
                break;    
        default : printf("%c is not M or W\n",gender);break;
    }

    return 0;
}
