// Jon Zepp
// 10/01/2022
// CIS 014 76768
// Assignment 5


#include <iostream>
#include <vector>
using namespace std;

/**
 * PURPOSE:given a vector, to determine if there is enough space to plant additional avocados, needing space between each
 * PARAMETERS:vector<int> field - the field, int n - amount to be planted.
 * RETURN VALUES:either a 1 for true, or a 0 for false.
 */ 
bool canPlantAvocados(vector<int> field, int n) {
    
    // set all necessary values for the function
    bool status = false;
    int m = 0;
    int z = field.size();
    int y = z - 1;
    
    for(int i = 1; i < z; i++) {
        
        //if condition for the beginning spot
        if(field[0] == 0 && field[1] == 0) {
            field[0] = 1;
            m = m + 1;
        }
        
        //if condition for the end spot
        if(i==y && field[i] == 0 && field[i-1] == 0) {
            field[i] = 1;
            m = m + 1;
        }
        
        //if condition for all others
        if(field[i-1] == 0 && field[i+1] == 0 && i != y) {
            field[i] = 1;
            m = m + 1;
        }
    }
    
    //compare what's possible to what's allowed, and return true/false
    if(n <= m) {
        status = true;
    } else {
        status = false;
    }
    return status;
}
   
//driver code
int main() {
    vector<int> field = {1, 0,0,0, 0,0,0,0,0};
    int n = 1;
    cout << canPlantAvocados(field, n);
    return 0;
} 
