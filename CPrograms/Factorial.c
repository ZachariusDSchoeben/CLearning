#include <stdio.h>
#include <string.h> 
#include <windows.h>
#include <stdlib.h>

int GlobalStart = 0;
int main(){
    int DynamicArr = 0;
    printf("Enter in how many numbers you want to multiply together: ");
    scanf(" %d", &DynamicArr);
    int* pNothing = malloc(DynamicArr * sizeof(int));

    if(pNothing == NULL){
        printf("No Memory");
        return 1;
    }
//Appending elements into the array
    for(int i = 0; i < DynamicArr; i++){
        printf("Enter the numbers: #%d ", i + 1);
        scanf(" %d", &pNothing[i]);
    }
//Computation of the array elements
    for (int j = 0; j < DynamicArr; j++){
        if(j == 0){
            GlobalStart = GlobalStart + pNothing[j];
            printf("Combing number %d: %d\n", j, GlobalStart);
        }else if (j != 0 & j != sizeof(DynamicArr) - 1){
            GlobalStart = GlobalStart * pNothing[j];
            printf("Combing number %d: %d\n", j, GlobalStart);
        }else{
            printf("Something Went WRONG with the logic of the if block");
        }
    }




    free(pNothing);
    pNothing = NULL;



    return 0;
}