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

#include <stdio.h>
#include <stdlib.h>

//Target = 8
int main(){
    int arr[7] = {1, 3, 5, 7, 9};



    return 0;
}