#include<stdio.h>
int main()
{
    float weight, height, BMI;
    printf("Enter Your weight (kg): ");
    scanf(" %f", &weight);
    printf("Enter Your height (m): ");
    scanf(" %f",&height);
    BMI = weight / (height*height);
    printf("Your BMI is %.2f\n",BMI);
    if(BMI < 18.5)
        printf("Your body size is Underweight\n");
    else if((BMI >= 18.5) && (BMI < 25))
        printf("Your body size is Normal\n");
    else if((BMI >= 25) && (BMI <= 30))
        printf("Your body size is Overweight\n");
    else if(BMI > 30)
        printf("Your body size is Obese\n");
    return 0;
}


