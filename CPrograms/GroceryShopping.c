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
    char UserInput[100] = "";
    char UserName[50] = "";

    float Items[] = {.99, 8.99, 2.99, 1.99, 3.99};
    char Apple[6] = "Apple";
    char Chicken[8] = "Chicken";
    char Bread[6] = "Bread";
    char Carrot[7] = "Carrot";
    char Milk[5] = "Milk";
    char money = '$';

    printf("We are very limited store... so sorry in advance:)\n");
    printf("Your options from this store are: %s, %s, %s, %s, %s\n", Apple, Chicken, Bread, Carrot, Milk);
    printf("The cost of each item \n{\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f,\n %s: %c%.2f\n}\n", Apple, money, Items[0], Chicken, money, Items[1],
    Bread, money, Items[2], Carrot, money, Items[3], Milk, money, Items[4]);
    printf("Whats your name?\n");
    scanf("%s", UserName);


    printf("To shop at this store you must buy all in ascending order. Would you like to still shop? Y/N\n");
    scanf("%s", UserInput);
    printf("Muhhaha I don't care! You must buy all and play the game! Unless you ctrl C which you wouldn't do that... Right? Y/N\n");
    scanf("%s", UserInput);

    printf("Would you like to buy bread for %f??? Y/N\n", Items[2]);
    scanf("%s", UserInput);
    UserBudget = UserBudget - Items[2];
    printf("Did you say no? Oopsie;) If you said yes well congrats you have bread now. Feed your family!\n");
    printf("How about anyyy fruit!! You know an apple a day keeps the doctor away!! Would you like an apple? Y/N\n");
    scanf("%s", UserInput);
    UserBudget = UserBudget - Items[0];

    printf("OOOOOOWEEEE taking your money and giving you your item is a great feeling!! We doing great business for one another!!\n");
    printf("Kepp giving me your moooneyyy! You've only bought 2 Items and this is what you account looks like: %f", UserBudget);
    printf("Okay now that you know where you are at it's not even that bad right!! Now time to buy some Protien for those muscles! Y/N\n");
    scanf("%s", UserInput);
    UserBudget = UserBudget - Items[1];

    printf("I'm getting tired of this game im just gonna take the rest of your money! Muwhahhahaha!!\n");
    printf("I'll show you what you are at now then I'll show you what I'm gonna take!!: %f\n", UserBudget);
    UserBudget = UserBudget - UserBudget;
    printf("Your account now! %f\n", UserBudget);
    printf("Thanks for playing %s\n", UserName);

    return 0;
}