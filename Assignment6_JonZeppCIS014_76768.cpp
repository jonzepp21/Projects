// Jon Zepp
// 10/12/22
// CIS 014 76768
// Assignment 6 

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/**
* PURPOSE:You are given two versions of software, and you will determine which one is the newer version
* PARAMETERS:ver1 and ver2, who will be compared to each other to determine heirarchy
* RETURN VALUES:either ver1 > ver2, ver1 < ver2, or ver1 = ver2;
*/ 
int compareVersions(string ver1, string ver2) {
    int vnum1 = 0, vnum2 = 0;
    for (int i = 0, j = 0; (i < ver1.length() || j < ver2.length());) {

        while (i < ver1.length() && ver1[i] != '.') {
            vnum1 = vnum1 * 10 + (ver1[i] - '0');
            i++;
        }
        while (j < ver2.length() && ver2[j] != '.') {
            vnum2 = vnum2 * 10 + (ver2[j] - '0');
            j++;
        }
 
        if (vnum1 > vnum2)
            cout << ver1 << " > " << ver2 << endl;
        else if (vnum1 < vnum2)
            cout << ver1 << " < " << ver2 << endl;
        else (vnum1 == vnum2);
            cout << ver1 << " = " << ver2 << endl;
        i++;
        j++;
    }
    return 0;
}

int main() {
    string ver1 = "0.1.6";
    string ver2 = "0.6.1";
    compareVersions(ver1, ver2);
    return 0;
    
}