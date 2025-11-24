#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Given a Euclidean Triangle. Where you have 1 angle, and 1 side. Find the rest of the angles and side.
Different angles formula: SOH, CAH, TOA 
*/

int main() {

    //User Side information
    char UserText[30] = ""; 
    char Hypotenuse[30] = "Hypotenuse";
    char Adjacent[30] = "Adjecent";
    char Opposite[30] = "Opposite";
    float SideValue;
    float AngleValue;

    //Answers
    //Sides
    float OppositeA = 0.0;
    float AdjacentA = 0.0;
    float HypotenuseA = 0.0;

    //Angles
    float SinAngle = 0.0;
    float TanAngle = 0.0;
    float CosAngle = 0.0;

    //Prompting user for information
    printf("What side has a value, and what is the value the side holds?\n");
    printf("What side holds the value? ");
    fgets(UserText, sizeof(UserText), stdin);
    printf("What is the value? ");
    if (scanf("%f", &SideValue) != 1) return -1;
    /*Problem here: no null byte at the end of the value
    Skips to end after entering the value*/
    printf("What is the angle? ");
    if(scanf("%f", &AngleValue) != 1) return -1;

    switch (UserText[0]) {
        case 'H':
            printf("Working with Hypotenuse");
            break;
        case 'A':
            printf("Working With Adjacent");
            break;
        case 'O':
            const float OppositeA = SideValue;
            HypotenuseA = OppositeA / sin(AngleValue);
            AdjacentA = sqrt(powf(HypotenuseA, 2) + powf(SideValue, 2));
            printf("Opposite Side: %.2f, Adjacent Side: %.2f, Hypotenuse: %.2f", OppositeA, AdjacentA, HypotenuseA);
            break;
        default:
            printf("Didn't catch what side you are working with!");
    }
    return 0;
}