#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int getMaxColumnSum(int mat[][3], int rows, int cols) {
    int maxColSum = INT_MIN;

    for(int j = 0; j < cols; j++) {
        int colSumJ = 0;
        for(int i = 0; i < rows; i++) {
            colSumJ += mat[i][j];
        }
        maxColSum = max(maxColSum, colSumJ);
    }

    return maxColSum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "Maximum column sum: " << getMaxColumnSum(matrix, rows, cols) << endl;

    return 0;
}