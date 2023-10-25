// Jonathan Zepp
// CIS 014
// 11/4/22
// Assignment 8 problem 1

/**
 * PURPOSE:To find the max profit between given stock prices of the day
 * PARAMETERS:arr{} - the vector; maxProfit-int; int min; int max; maxProfit = max - min
 * RETURN VALUES:will return int getMaxProfit = max - min
 */

#include <iostream>
#include <vector>
using namespace std;

int getMaxProfit(vector<int> arr) {
    int maxProfit = 0;
    int max = 0;
    int min;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > arr[i-1] && arr[i] > max) {
            max = arr[i];
        } 
    }
    for (int j = 0; j < arr.size(); j++) {
        if (arr[j] < arr[j+1] && arr[j] < min && arr[j] !=0) {
            min = arr[j];
        }
    }
    
    maxProfit = max - min;
    if(maxProfit < 0) {
        maxProfit = 0;
    }
    return maxProfit;
}

int main() {
    vector<int> arr{1,2,4};
    cout << getMaxProfit(arr);
    return 0;
}