#include <stdio.h>
#include <string.h>
#include <windows.h>

void Loading();

typedef struct{
    char Username[50];
    char Name[50];
    char LastName[50];
    int age;

}Users;

int main(){
    Users UserList[] = {0};

    printf("Create a Username: ");
    fgets(UserList->Username, sizeof(UserList->Username), stdin);
    Loading();
    printf("Type in your Name: ");
    fgets(UserList->Name, sizeof(UserList->Name), stdin);
    Loading();
    printf("Type in your Last Name: ");
    fgets(UserList->LastName, sizeof(UserList->LastName), stdin);
    Loading();
    printf("Last thing!!");
    printf("what is your age: ");
    scanf("%d", &UserList->age);

    Sleep(100);


    printf("This is your account info\nUsername: %s\nName: %s\nLast Name: %s\nAge: %d", UserList->Username, UserList->Name, UserList->LastName, UserList->age);
    return 0;
}

void Loading(){
    char LoadingSymbol[5] = ".....";
    printf("Saving Contents");
    for(int i = 0; i<5; i++){
        printf("%c", LoadingSymbol[i]);
        Sleep(100);
    }
    printf("\n");
}