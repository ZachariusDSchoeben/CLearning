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
    char Apple[5] = "Apple";
    char Chicken[7] = "Chicken";
    char Bread[5] = "Bread";
    char Carrot[6] = "Carrot";
    char Milk[4] = "Milk";

    printf("Since I'm not using 'flow' statments I will ask you what you want in your basket\n");
    printf("Your options from this store are: %s, %s, %s, %s, %s\n", Apple, Chicken, Bread, Carrot, Milk);
    printf("The cost of each item {%s:%.2f,\n %s:%.2f,\n %s:%.2f,\n %s:%.2f,\n %s:%.2f\n}", Apple, Items[0], Chicken, Items[1],
    Bread, Items[2], Carrot, Items[3], Milk, Items[4]);
    return 0;
}