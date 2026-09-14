#include<iostream>
using namespace std;

void maxSumSubarray(int *arr, int n) {
    int maxProd = INT_MIN;
    int currProd = 1;
    
    for(int i = 0; i < n; i++) {
        currProd *= arr[i];

        maxProd = max(maxProd, currProd);

    }
    cout << "Maximum product of subarray is: " << maxProd << endl;
}

int main() {
    int arr[6] = {-1, -2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSumSubarray(arr, n);

    return 0;
}

// #include<iostream>
// using namespace std;

// void maxSumSubarray(int *arr, int n) {
//     int maxProd = INT_MIN;
//     for(int start = 0; start < n; start++) {
//         for(int end=start; end < n; end++) {
//             int currProd = 1;
//             for(int i = start; i <= end; i++) {
//                 currProd *= arr[i];
//             }
//             cout << currProd << ",";
//             maxProd = max(maxProd, currProd);
//         }
//         cout << endl;
//     }
//     cout << "Maximum Product of subarray is: " << maxProd << endl;
// }

// int main() {
//     int arr[5] = {-1, -2, -3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     maxSumSubarray(arr, n);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void maxSumSubarray(int *arr, int n) {
//     int maxprod = INT_MIN;
//     for(int start = 0; start < n; start++) {
//         int currProd = 1;
//         for(int end=start; end < n; end++) {
//             currProd *= arr[end];
//             maxprod = max(maxprod, currProd);
//         }
//     }
//     cout << "Maximum Product of subarray is: " << maxprod << endl;
// }

// int main() { 
//     int arr[6] = {-1, -2, -3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     maxSumSubarray(arr, n);

//     return 0;
// }