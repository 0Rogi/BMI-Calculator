#include <stdio.h>
#include <math.h>
#define included(value, min, max) (value <= max && value >= min)

int main() {
    //? Take the weight and the height
    int weight;
    int height;

    printf("Welcome in the BMI Calculator\n\n\nPlease, insert your weight in kilograms.\n\n");
    scanf("%d", &weight);
    
    printf("Please, now insert your height in meters.\n\n", weight);
    scanf("%d", &height);
    
    //? Calculate the BMI
    double heigthpow = pow(height, 2);
    float bmi = weight / heigthpow;

    //? Check the status
    char *status = "";
    if (bmi >= 35) status = "Extremely Obese";
    if (included(bmi, 34.9, 39)) status = "Obese";
    if (included(bmi, 25, 29.9)) status = "Overweight";
    if (included(bmi, 18.5, 24.9)) status = "Normal";
    if (bmi <= 18.5) status = "Underweight";

    //? Print the result
    printf("Your BMI is %f.\nSo you are %s.", bmi, status);

    //? End the main function
    return 0;
}