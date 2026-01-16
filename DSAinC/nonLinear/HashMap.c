/*
Key-value pair mechanism; where indexs are replaced with keys that can be any name you want. Ex: key:value -> streets:address lookup and insertion O(1)
General: int, char, strings are hashable whereas list and dictionarys are not. values need to stay the same.
Hash map sequence: 1.) store a value 2.) look value up 3.) update or intialize values

code structure

storing_var = {}

for item in data:
//checking if item is not in storing_var. Condition is true and the item is not in the set then append item as key and sest value to 1;
    if item not in storing_var:
        storing_var[item] = 1;
//if the item is already in the set increment the value by 1
    else:
        storing_var[item] += 1;
*/


/*
Things needed
    1.) Set structure
    2.) Dictionary structure
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
/*
test = [1 ,1 ,3, 4, 3]

key = value

struct
    var.key = count
    
column = key
row = value

    0 0
    0 0
    0 0
    0 0
    0 0
    0 0
    0 0
          {0}       {1}       {2}       {3}       {4}       {5}       {6}
arr = {{'0', 0}, {'0', 0}, {'0', 0}, {'0', 0}, {'0', 0}, {'0', 0}, {'0', 0},}
         0 , 1     0, 1      0, 1      0, 1      0, 1       0, 1     0, 1 
*/
 struct test1{
    int arr[7][1];
};

int main(){
    int test_arr[7] = {4, 4, 3, 6, 1, 6, 3};
    int* set = malloc(sizeof(int));

    if(set == NULL){
        printf("Insufficent Memory.");
        return 1;
    }


    //Adding non-repeating elements to array.
    for(int i = 0; i< sizeof(test_arr)/sizeof(test_arr[0]); i++){
        if(i == 0){
            set[0] = test_arr[i];
        }
        else if(set[i] == test_arr[i]){
            continue;
        }
        else
        {
            set[i] = test_arr[i];
        }    
    }

    //Checking to see if the array worked
    for(int j = 0; j < sizeof(test_arr)/sizeof(test_arr[0]); j++){
        printf("%d ", *(set + j));
    }
    

    free(set);
    set = NULL;

    return 0;
}