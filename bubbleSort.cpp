#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n) {

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {

    int arr[5] = {5,4,1,3,2};

    cout << "Before Sorting" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << endl;

    bubbleSort(arr, 5);

    cout << "After Sorting" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ' ';
    }
    
    return 0;
}


// Upgradation for already sorted array

// #include<iostream>
// using namespace std;

// void bubbleSort(int *arr, int n) {

//     for(int i = 0; i < n-1; i++) {

//         bool isSwap = false;
//         cout << "Outer Loop" << endl;

//         for(int j = 0; j < n-i-1; j++) {
//             cout << "Inner Loop" << ' ';
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }

//         if(!isSwap) {
//             return;
//         }
//     }
// }

// int main() {

//     int arr[5] = {1,2,3,4,5};

//     cout << "Before Sorting" << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << ' ';
//     }

//     cout << endl;

//     bubbleSort(arr, 5);

//     cout << "After Sorting" << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << ' ';
//     }
    
//     return 0;
// }