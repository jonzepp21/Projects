#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CIS14 {
public:
     vector<int> getMaxHits(vector<int> &requests, int window_size);
};

// ------------------------------------------------------------
// DO NOT MODIFY ABOVE THIS LINE. The above is your C++ class 
// named CIS14 with its method you will implement.
// ------------------------------------------------------------

/**
 * PURPOSE: To take a vector of N size, and a window of O size, and to find the max element
 * PARAMETERS: v - the vector, window_size - the int window size, maxVect - the return, int i, int j, int g
 * RETURN VALUES: will return the maximum value through the vector in a given window
 */
vector<int> CIS14::getMaxHits(vector<int> &requests, int window_size) {
    
    // create two extra vectors, one that stores a temp vect the size of the window
    // the other that stores the maximum of that window
    vector<int> tempVect;                       
    vector<int> maxVect;
    int window = window_size;
    int g = requests.size() - window + 1;
    
    // now iterate through every item up to the end of the window
    for(int i = 0; i < g; i++) {
        window = window_size;
        int j = i;
        
        // must clear the tempVect every time to get a clean window
        tempVect = {};
        
        while(window != 0) {
            tempVect.push_back(requests[j]);
            window -= 1;
            j++;
        }
        // now find the max element of the new temp vector, and repeat until all are done
        int max = *max_element(tempVect.begin(), tempVect.end());
        maxVect.push_back(max);
    }
    
    // return the max element vector(vectors CAN be returned)
    return maxVect;
}

int main()
{
    // Instantiate an instance of the CIS14 class
    CIS14 cis14;    
    
    // Your target method will be tested with random input such
    // as the following example; the actual test cases will vary
    vector<int> v = {0,0,0};
    vector<int> ans = cis14.getMaxHits(v,10);
    
    // You may use the following code to print out your returned vector's content
    for (int i=0; i<ans.size(); i++) cout << ans[i] << ((i==ans.size()-1) ? "" : ",");
    
    return 0;
}