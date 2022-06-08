#include<bits/stdc++.h>
using namespace std;

const int m = 2;
const int n = 2;
const int p = 3;

void matrixMultiplication(int a[m][n], int b[n][p], int c[m][p]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            c[i][j] = 0;
            for (int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int A[m][n] = {{1, 2}, {3, 4}};
    int B[n][p] = {{5, 6, 7}, {8, 9, 10}};

    int C[m][p];

    matrixMultiplication(A, B, C);

    return 0;
}

// Multiplication of matrices is non-commutative which means A*B ≠ B*A
// Multiplication of matrices is associative which means A*(B*C) = (A*B)*C
// For computing A*B, the number of columns in A must be equal to number of rows in B
// Existence of A*B does not imply existence of B*A
// The complexity of multiplication operation (A*B) is O(m*n*p) where m*n and n*p are order of A and B respectively
// The order of matrix C computed as A*B is m*p where m*n and n*p are order of A and B respectively