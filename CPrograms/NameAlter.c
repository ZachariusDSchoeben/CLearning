#include <stdio.h>
#include <string.h> 
#include <windows.h>
#include <stdlib.h>

char name_update(char* UserName, int size);

int main(){
    int name_size = 0;
    char* name = (char*)malloc(name_size * sizeof(char));
    printf("How many letters is in your name? ");
    scanf("%d", &name_size);
    name_size = name_size +1;

    //checking for space or any errors
    if(name == NULL){
        printf("No memory space");
        return 1;
    }
    
    //collecting the letters of name
    printf("\nEnter in you name letter by letter! When done enter 0.");
    for (int i = 0; i < name_size; i++){
        printf("-");
        scanf("%c ", &name[i]);
    }

    printf("before: ");
    for (int j = 0; j < name_size; j++){
        printf("%c", *(name + j));
    }
    printf("\n");

    name_update(name, name_size);

    return 0;
}

char name_update(char* UserName, int size){
    srand(size);
    char Alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int min = 1;
    int max = 53;
    int random = rand() % (max - min +1) + min;
    

    for (int i = 0; i<size; i++){
        char New_Letter = Alphabet[random + i];
        UserName[i] = New_Letter;
    }
    printf("New %s", UserName);

    free(UserName);
    UserName = NULL;
    
    return 0;
}





