#include<iostream>
using namespace std;

bool staircase(int mat[][4], int n, int m, int key) {
    int i = n-1, j = 0;

    while (i >= 0 && j < n)
    {
        if(mat[i][j] == key) {

            cout << "Found at cell (" << i << "," << j << ")" << endl;
            return true;
        }
        else if(mat[i][j] > key) {
            //up
            i--;
        }
        else {
            //right
            j++;
        }
    }
    
    cout << "Key Not Found" << endl;

    return false;
}

int main() {

    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    staircase(matrix, 4, 4, 11);

    return 0;
}