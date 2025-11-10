#include <stdio.h>

/*
Items to buy
How much the items cost

The user budget: Starting point $100
Users reciept


*/

int main () {

    float UserBudget = 100.0;
    float UserReciept = 0.0;

    float Items[] = {.99, 8.99, 2.99, 1.99, 3.99};
    char Apple[6] = "Apple";
    char Chicken[8] = "Chicken";
    char Bread[6] = "Bread";
    char Carrot[7] = "Carrot";
    char Milk[5] = "Milk";
    char money = '$';

    printf("Since I'm not using 'flow' statments I will ask you what you want in your basket\n");
    printf("Your options from this store are: %s, %s, %s, %s, %s\n", Apple, Chicken, Bread, Carrot, Milk);
    printf("The cost of each item \n{\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f\n}", Apple, money, Items[0], Chicken, money, Items[1],
    Bread, money, Items[2], Carrot, money, Items[3], Milk, money, Items[4]);
    return 0;
}