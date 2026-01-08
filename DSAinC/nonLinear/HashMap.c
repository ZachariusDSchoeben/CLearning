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
    struct test1 Hash_Arr = {0};
    int test_arr[7] = {4, 8, 3, 6, 1, 9, 3}; 

//Trying to figure out how to access a specific postion and how to access the value/column
/*    for (int i = 0; i < 7; i++){
        for(int j = 0; j<2; j++){
            Hash_Arr.arr[i][j] = 0;
            printf("{%d} ",Hash_Arr.arr[i][j]);
        }
        printf("\n");
        //Accessing a specific positon '[][]' coordinates. 
    }
*/
    //1. Find a target sum
    //2. Check which numbers in the arr are more than one

    for(int i = 0; i< sizeof(test_arr)/ sizeof(test_arr[0]); i++){
        for (int j = 0; j<2; j++){
            if(Hash_Arr.arr[i][0] != test_arr[j]){
                Hash_Arr.arr[i][0] = (char)test_arr[j];
            } else if (Hash_Arr.arr[i][j] == test_arr[i]){
                Hash_Arr.arr[i][1] += 1;
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < 7; i++){
        for(int j = 0; j<2; j++){
            printf("{%d} ",Hash_Arr.arr[i][j]);
        }
        printf("\n"); 
    }
    

    return 0;
}