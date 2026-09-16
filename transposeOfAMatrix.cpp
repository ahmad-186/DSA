#include<iostream>
using namespace std;

void transpose(int mat[][3], int row = 3, int col = 3) {
    int transpose[col][row] = {{0}};
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = mat[i][j];
        }
        
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << "  ";
        }
        cout << endl;
    }
    
}

int main() {

    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
        
    transpose(matrix, 3, 3);


    return 0;
}