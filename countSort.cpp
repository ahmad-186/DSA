#include<iostream>
using namespace std;

void countSort(int *arr, int n) {
    int freq[100000] = {0};  //Range
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Step 01:
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++; 
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    
    for(int i=minVal, j = 0; i<=maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};

    cout << "Before Sorting" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

    countSort(arr, 8);

    cout << "After Sorting" << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}