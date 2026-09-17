#include <iostream>
using namespace std;

bool areAlmostEqual(std::string s1, std::string s2) {
    if (s1 == s2) return true;
    
    // Track the indices of the mismatches (-1 means not found yet)
    int first = -1;
    int second = -1;
    int mismatchCount = 0;
    
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            mismatchCount++;
            
            // If there are more than 2 mismatches, 1 swap is not enough
            if (mismatchCount > 2) {
                return false;
            }
            
            // Store the index of the mismatch
            if (first == -1) {
                first = i;
            } else {
                second = i;
            }
        }
    }
    
    // It must have exactly 2 mismatches, and swapping them must fix the strings
    return (mismatchCount == 2 && 
            s1[first] == s2[second] && 
            s1[second] == s2[first]);
}

int main() {
    // Example test case using traditional C-style char arrays
    string str1 = "bank";
    string str2 = "kanb";
    
    // The function implicitly converts char arrays to std::string parameters
    if (areAlmostEqual(str1, str2)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    return 0;
}
