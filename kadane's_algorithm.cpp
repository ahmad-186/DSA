#include<iostream>
using namespace std;

void maxSumSubarray(int *arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for(int i = 0; i < n; i++) {
        currSum += arr[i];

        maxSum = max(maxSum, currSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << "Maximum sum of subarray is: " << maxSum << endl;
}

int main() {
    int arr[6] = {-1, -2, -3, -4, -5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSumSubarray(arr, n);

    return 0;
}