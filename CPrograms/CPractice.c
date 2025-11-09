#include <stdio.h>
#include <stdbool.h>

int main() {
    int wNum1 = 0;
    float rNum1 = 0.0;
    char sName[20] = "";
    float rSum = 0.0;
    
    printf("Enter 2 Numbers to be added to one another\n");

    printf("Whole Number first: \n");
    scanf("%d", &wNum1);

    printf("Rational Number Second: ");
    scanf("%f", &rNum1);

    rSum = wNum1 + rNum1;
    
    printf("Now we need your name so I can congradulate you!! ");
    scanf("%s", sName);
    
    

    printf("Your answer: %f\nCongrats %s", rSum, sName);


    return 0;
}