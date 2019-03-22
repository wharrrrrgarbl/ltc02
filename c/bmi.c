#include <stdio.h>
#include <ctype.h>

float bmi(float height, float weight){
    return weight/(height*height);
}

int main(void){
//TODO: input validation
    printf("Input comma-separated values: height(m) and weight(kg) ");
    float height, weight, c;
    scanf("%f,%f",&height,&weight);
    c = bmi(height,weight);
    printf("BMI equals %f",c);
    if (c < 15) {
        printf("\nResult: Very severely underweight");
    }
    else if (c >= 15 && c < 16) {
        printf("\nResult: Severely underweight");
    }
    else if (c >= 16 && c < 18.5) {
        printf("\nResult: Underweight");
    }
    else if (c >= 18.5 && c < 25) {
        printf("\nResult: Normal (healthy weight)");
    }
    else if (c >= 25 && c < 30) {
        printf("\nResult: Overweight");
    }
    else if (c >= 30 && c < 35) {
        printf("\nResult: Obese Class I (Moderately obese)");
    }
    else if (c >= 35 && c < 40) {
        printf("\nResult: Obese Class II (Severely obese)");
    }
    else if (c >= 40 && c < 45) {
        printf("\nResult: Obese Class III (Very severely obese)");
    }
    else if (c >= 45 && c < 50) {
        printf("\nResult: Obese Class IV (Morbidly obese)");
    }
    else if (c >= 50 && c < 60) {
        printf("\nResult: Obese Class V (Super obese)");
    }
    else if (c >= 60) {
        printf("\nResult: Obese Class VI (Hyper obese)");
    }
}
