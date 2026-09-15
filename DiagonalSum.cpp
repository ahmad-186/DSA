// Time Complexity O(n^2)

// #include<iostream>
// using namespace std;

// void diagonalSum(int matrix[][3], int n, int m) {
//     int sum = 0;

//     for(int i = 0; i < n; i++) {  // rows
//         for(int j = 0; j < n; j++) { // cols
//             if(i == j) {
//                 sum += matrix[i][j];
//             }
//             else if(j == n-i-1) {
//                 sum += matrix[i][j];
//             }
//         }
//     }

//     cout << "Sum of Diagonal Elements = " << sum << endl;
// }

// int main() {

//     // int matrix[4][4] = {{1, 2, 3, 4},
//     //                     {5, 6, 7, 8},
//     //                     {9, 10, 11, 12},
//     //                     {13, 14, 15, 16}};

//     // diagonalSum(matrix, 4, 4);

//     int matrix2[3][3] = {{1, 2, 3},
//                         {4, 5, 6},
//                         {7, 8, 9}};

//     diagonalSum(matrix2, 3, 3);

    
//     return 0;
// }

// Time Complexity = O(n)
#include<iostream>
using namespace std;

void diagonalSum(int matrix[][3], int n, int m) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
        
        if(i != n-i-1) {
            sum += matrix[i][n-i-1];
        }
    }
    cout << "Sum of Diagonal Elements = " << sum << endl;
}

int main() {

    // int matrix[4][4] = {{1, 2, 3, 4},
    //                     {5, 6, 7, 8},
    //                     {9, 10, 11, 12},
    //                     {13, 14, 15, 16}};

    // diagonalSum(matrix, 4, 4);

    int matrix2[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    diagonalSum(matrix2, 3, 3);

    
    return 0;
}
