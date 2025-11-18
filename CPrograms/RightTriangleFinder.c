#include <stdio.h>
#include <math.h>
#include <string.h>

/*
Given a Euclidean Triangle. Where you have 1 angle, and 1 side. Find the rest of the angles and side.
Different angles formula: SOH, CAH, TOA 
*/

int main() {
    //Sides to be asked
    double HypotenuseSide = 0.0;
    double AdjacentSide = 0.0;
    double OppositeSide = 0.0;
    //Angles
    //Hypotenuse + Opposite angle
    double HOAngle = 0.0;
    //Adjacent + Opposite Angle
    double AOAngle = 0.0;
    //Hypotenuse + Adjecent Angle
    double HAAngle = 0.0;

    //User information
    char UserSide[30] = "";
    float SideValue = 0.0; 

    //conditional
    char Hypotenuse[30] = "Hypotenuse";
    char Adjacent[30] = "Adjecent";
    char Opposite[30] = "Opposite";


    //Formulas to be used
    const double Tan = (OppositeSide / AdjacentSide);
    const double Sin = (OppositeSide / HypotenuseSide);
    const double Cos = (AdjacentSide / HypotenuseSide);

    printf("What side has a value, and what is the value the side holds?\n");
    printf("What side holds the value? ");
    fgets(UserSide, sizeof(UserSide), stdin);
    printf("What is the value? ");
    scanf("%f", &SideValue);

    if(UserSide == Hypotenuse)
    {
        printf("Hypotenuse\n");

    } else if (UserSide == Adjacent) {
        printf("Adjacent\n");

    } else {
        printf("Opposite\n");

    }
    return 0;
}